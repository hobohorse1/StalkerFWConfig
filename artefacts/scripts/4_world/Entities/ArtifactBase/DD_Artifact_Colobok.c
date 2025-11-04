class SFW_Artifact_Colobok extends SFW_ArtifactBase
{
    override void ArifactInitialize()
    {
        if(!GetGame().IsMultiplayer() || GetGame().IsClient())
        {
            m_ArtifactSoundName = "SFW_Artifact_ColobokSound"; //назввание звука
            m_ArtifactIdleLight = SFW_Artifact_ColobokLight.Cast( ScriptedLightBase.CreateLight(SFW_Artifact_ColobokLight, "0 0.04 0", 0.0) ); //старая штука
            m_ArtifactLightPos = "0 0.04 0"; //Позиция света на объекте
            m_ArtifactParticleId = ParticleList.SFWPColobok; //какой партикл
            m_ArtifactParticlePos = "0 0.04 0"; // позиция партикла на объекте
        }
    }
}

class SFW_Artifact_ColobokLight extends PointLightBase
{
	static string     m_MemoryPoint = "light";
	void SFW_Artifact_ColobokLight()
	{
        SetVisibleDuringDaylight(true);			/* - cвет днем */
        SetRadiusTo( 0.3 );						/* - радиус */
        SetBrightnessTo( 0.9 );					/* - яркость */
        SetCastShadow(false);					/* - тени */
        SetFadeOutTime(0.0);					/* - время затухания (секунды) */
        SetDiffuseColor(0.013, 1.0, 0.42);		/* - базовый цвет */
        SetAmbientColor(0.013, 1.0, 0.42);		/* - идущий цвет */
        SetFlareVisible(true);					/* - Установить видимую вспышку */
        SetFlickerAmplitude(0.7);				/* - Установить амплитуду мерцания */
        SetFlickerSpeed(2.0);					/* - Установить скорость мерцания */
        SetDancingShadowsMovementSpeed(0.0);	/* - Установить скорость движения танцующих теней */
        SetDancingShadowsAmplitude(0.0);		/* - Установить амплитуду танцующих теней */
		EnableHeatHaze(true);
        SetHeatHazeRadius(0.15);
        SetHeatHazePower(0.013);
	}
}