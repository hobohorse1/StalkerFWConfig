class SFW_Artifact_Sparkler extends SFW_ArtifactBase
{
    override void ArifactInitialize()
    {
        if(!GetGame().IsMultiplayer() || GetGame().IsClient())
        {
            m_ArtifactSoundName = "SFW_Artifact_SparklerSound"; //назввание звука
            m_ArtifactIdleLight = SFW_Artifact_SparklerLight.Cast( ScriptedLightBase.CreateLight(SFW_Artifact_SparklerLight, "0 0.04 0", 0.0) ); //старая штука
            m_ArtifactLightPos = "0 0.04 0"; //Позиция света на объекте
            m_ArtifactParticleId = ParticleList.SFWPSparkA; //какой партикл
            m_ArtifactParticlePos = "0 0.04 0"; // позиция партикла на объекте
        }
    }
}

class SFW_Artifact_SparklerLight extends PointLightBase
{
	static string     m_MemoryPoint = "light";
	void SFW_Artifact_SparklerLight()
	{
        SetVisibleDuringDaylight(true);			/* - cвет днем */
        SetRadiusTo( 0.4 );						/* - радиус */
        SetBrightnessTo( 2.0 );					/* - яркость */
        SetCastShadow(false);					/* - тени */
        SetFadeOutTime(0.0);					/* - время затухания (секунды) */
        SetDiffuseColor(0.2, 0.83, 0.78);			/* - базовый цвет */
        SetAmbientColor(0.2, 0.83, 0.78);			/* - идущий цвет */
        SetFlareVisible(true);					/* - Установить видимую вспышку */
        SetFlickerAmplitude(0.6);				/* - Установить амплитуду мерцания */
        SetFlickerSpeed(8.0);					/* - Установить скорость мерцания */
        SetDancingShadowsMovementSpeed(0.0);	/* - Установить скорость движения танцующих теней */
        SetDancingShadowsAmplitude(0.0);		/* - Установить амплитуду танцующих теней */
		EnableHeatHaze(true);
        SetHeatHazeRadius(0.15);
        SetHeatHazePower(0.013);
	}
}