class CfgPatches
{
	class SFW_Mutants_Snork_Sounds
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_data_aiconfigs",
			"DZ_AI"
		};
	};
};
class CfgSoundShaders
{
	class LeftAttack_SoundShader
	{
		samples[]=
		{
			
			{
				"StalkerFWConfig\mutants\snork\sounds\attack1",
				0.125
			}

		};
		volume=1.25;
		range=80;
	};
	class RightAttack_SoundShader
	{
		samples[]=
		{
			
			{
				"StalkerFWConfig\mutants\snork\sounds\attack2",
				0.125
			}
			
		};
		volume=1.25;
		range=80;
	};
	class Idle_SoundShader
	{
		samples[]=
		{
			
			{
				"StalkerFWConfig\mutants\snork\sounds\idle",
				0.125
			}
			
		};
		volume=0.6;
		range=50;
	};
};
class CfgSoundSets
{
	class Zmb_VoiceFX_Base_SoundSet;
	
	class LeftAttack_Soundset: Zmb_VoiceFX_Base_SoundSet
	{
		soundShaders[]=
		{
			"LeftAttack_SoundShader"
		};
		frequencyFactor=0.92000002;
	};
	class RightAttack_Soundset: Zmb_VoiceFX_Base_SoundSet
	{
		soundShaders[]=
		{
			"RightAttack_SoundShader"
		};
		frequencyFactor=0.92000002;
	};
	class Idle_Soundset: Zmb_VoiceFX_Base_SoundSet
	{
		soundShaders[]=
		{
			"Idle_SoundShader"
		};
		frequencyFactor=0.92000002;
	};
	
};
