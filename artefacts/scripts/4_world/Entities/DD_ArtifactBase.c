class SFW_ArtifactBase
{
    protected PointLightBase 	m_ArtifactIdleLight;
    protected vector 	        m_ArtifactLightPos;
    protected Particle 			m_ArtifactEffectIdle;
    protected int               m_ArtifactParticleId;
    protected string 			m_ArtifactParticlePos;
	protected EffectSound 		m_ArtifactSound;
	protected string 		    m_ArtifactSoundName;
    protected bool              canJumping = true;
    protected bool              ArtifactChangePosition = true;
    protected ref Timer         m_JumpingTimer;
    protected vector            m_ArtifactCurentPosition;
    protected int               m_deltaTime;
    protected float             m_UpperJumpLimit;
    protected float             m_LowerJumpLimit;
    protected float             m_DesiredJumpPosition;

    protected bool m_ParticleActivSync = false;
    protected bool m_ParticleStopSync = false;

    protected bool m_ActivJumpingSync = false;
    protected bool m_StopJumpingSync = false;
	
    void SFW_ArtifactBase()
    {
        RegisterNetSyncVariableBool("m_ParticleActivSync");
        RegisterNetSyncVariableBool("m_ParticleStopSync");
        RegisterNetSyncVariableBool("m_ActivJumpingSync");
        RegisterNetSyncVariableBool("m_StopJumpingSync");

        if (canJumping)
        {
            m_JumpingTimer = new Timer(CALL_CATEGORY_SYSTEM);
            GetGame().GetCallQueue(CALL_CATEGORY_SYSTEM).CallLater(onJumping, 200, false);
        }
    };

    void ~SFW_ArtifactBase()
    {
        if (m_ArtifactIdleLight)
        {
            GetGame().ObjectDelete(m_ArtifactIdleLight);
        }
        if (m_ArtifactEffectIdle)
        {
            m_ArtifactEffectIdle.StopParticle();
            m_ArtifactEffectIdle = NULL;
        }
        if (m_ArtifactSound)
        {
            m_ArtifactSound.Stop();
            m_ArtifactSound = NULL;
        }
        if (m_JumpingTimer)
        {
            m_JumpingTimer.Stop();
            m_JumpingTimer = NULL;
        }
    };

    void onJumping()
    {
        m_ArtifactCurentPosition = GetPosition();
        m_LowerJumpLimit = m_ArtifactCurentPosition[1];
        m_UpperJumpLimit = m_LowerJumpLimit + 0.15;
        m_DesiredJumpPosition = Math.RandomFloatInclusive(m_LowerJumpLimit, m_UpperJumpLimit);
        m_JumpingTimer.Run(0.001,this,"ArtifactJumpingAnim",new Param1<float>(m_deltaTime),true);
    };

    void ParticleActivation()
    {
        ParticleStop();
        ArifactInitialize();
        if(!GetGame().IsMultiplayer() || GetGame().IsClient())
		{
            if (m_ArtifactSoundName != string.Empty)
            {
                PlaySoundSetLoop( m_ArtifactSound, m_ArtifactSoundName, 0.5, 2.0 );
            }
            m_ArtifactIdleLight.AttachOnObject(this, m_ArtifactLightPos, "0 0 0");
            m_ArtifactEffectIdle = Particle.PlayOnObject(m_ArtifactParticleId, this, m_ArtifactParticlePos.ToVector());
        }
    };

    void ArtifactJumpingAnim(float tDelta)
	{
        m_deltaTime += 0.001;
        if ( GetGame().IsClient()  ||  !GetGame().IsMultiplayer() )
        {
            if ( PlayerBase.Cast(GetHierarchyRootPlayer()) )
            {
                return;
            }

            vector mat[4];
            GetTransform(mat);
            vector posVector = mat[3];
            float y = posVector[1];

            if (!ArtifactChangePosition)
            {
                y -= 0.006;
                posVector = Vector(posVector[0], y, posVector[2]);
                if (posVector[1] <= m_ArtifactCurentPosition[1])
                {
                    m_DesiredJumpPosition = Math.RandomFloatInclusive(m_LowerJumpLimit, m_UpperJumpLimit);
                    ArtifactChangePosition = true;
                }
            }

            if (ArtifactChangePosition)
            {
                y += 0.006;
                posVector = Vector(posVector[0], y, posVector[2]);
                if (posVector[1] >= m_DesiredJumpPosition)
                    ArtifactChangePosition = false;
            }

            mat[3] = posVector;
            MoveInTime(mat,tDelta);
        }
	};

    void ParticleStop()
    {
        if (m_ArtifactIdleLight)
        {
            m_ArtifactIdleLight.FadeOut();
            m_ArtifactIdleLight = NULL;
        }
        if (m_ArtifactEffectIdle)
        {
            m_ArtifactEffectIdle.StopParticle();
            m_ArtifactEffectIdle = NULL;
        }
        if (m_ArtifactSound)
        {
            m_ArtifactSound.Stop();
            m_ArtifactSound = NULL;
        }
    };

    void JumperStop()
    {
        m_JumpingTimer.Stop();
    };

    override void OnVariablesSynchronized()
	{
		super.OnVariablesSynchronized();
		
        if (m_ParticleStopSync)
        {
            m_ParticleStopSync = false;
            GetGame().GetCallQueue(CALL_CATEGORY_SYSTEM).CallLater(ParticleStop, 200, false);
        }
        if (m_StopJumpingSync)
        {
            m_StopJumpingSync = false;
            GetGame().GetCallQueue(CALL_CATEGORY_SYSTEM).CallLater(JumperStop, 200, false);
        }
        if (m_ActivJumpingSync)
        {
            m_ActivJumpingSync = false;
            GetGame().GetCallQueue(CALL_CATEGORY_SYSTEM).CallLater(onJumping, 200, false);
        }
        if(m_ParticleActivSync)
		{
            m_ParticleActivSync = false;
			GetGame().GetCallQueue(CALL_CATEGORY_SYSTEM).CallLater(ParticleActivation, 200, false);
		}
	}; 

    void ArifactInitialize()
    {

    };
};