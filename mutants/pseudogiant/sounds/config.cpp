class CfgPatches
{
	class SFW_Mutants_Pseudogiant_Sounds
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
	class SFW_Pseudogiant_Roar_SoundShader
	{
		samples[] = {{"StalkerFWConfig\mutants\pseudogiant\sounds\giant_underground_0",1.0}};
		volume = 2;
		range = 200;
	};
	class SFW_Pseudogiant_Attack_Special_Hit_SoundShader
	{
		samples[] = {{"StalkerFWConfig\mutants\pseudogiant\sounds\giant_hit",1.0}};
		volume = 1.5;
		range = 200;
	};
	class SFW_Pseudogiant_Attack_Special_SoundShader
	{
		samples[] = {{"StalkerFWConfig\mutants\pseudogiant\sounds\giant_threaten_0",0.5},{"StalkerFWConfig\mutants\pseudogiant\sounds\giant_threaten_0",0.5}};
		volume = 1.0;
		range = 100;
	};
	class SFW_Pseudogiant_Attack_Slash_SoundShader
	{
		samples[] = {{"StalkerFWConfig\mutants\pseudogiant\sounds\giant_attack_0",1.0}};
		volume = 1;
		range = 60;
	};
	class SFW_Pseudogiant_Attack_Bite_SoundShader
	{
		samples[] = {{"StalkerFWConfig\mutants\pseudogiant\sounds\giant_attack_1",1.0}};
		volume = 1;
		range = 60;
	};
	class SFW_Pseudogiant_Death_SoundShader
	{
		samples[] = {{"StalkerFWConfig\mutants\pseudogiant\sounds\giant_death_0",0.5},{"StalkerFWConfig\mutants\pseudogiant\sounds\giant_death_1",0.5}};
		volume = 1.4;
		range = 100;
	};
	class SFW_Pseudogiant_Idle_SoundShader
	{
		samples[] = {{"StalkerFWConfig\mutants\pseudogiant\sounds\giant_idle_0",0.5},{"StalkerFWConfig\mutants\pseudogiant\sounds\giant_idle_1",0.5}};
		volume = 1;
		range = 100;
	};
	class SFW_Pseudogiant_Aggressive_SoundShader
	{
		samples[] = {{"StalkerFWConfig\mutants\pseudogiant\sounds\giant_aggressive_0",0.5},{"StalkerFWConfig\mutants\pseudogiant\sounds\giant_aggressive_1",0.5}};
		volume = 1;
		range = 100;
	};
	class SFW_Pseudogiant_Breath_SoundShader
	{
		samples[] = {{"StalkerFWConfig\mutants\pseudogiant\sounds\giant_breath_0",0.33},{"StalkerFWConfig\mutants\pseudogiant\sounds\giant_breath_1",0.33},{"StalkerFWConfig\mutants\pseudogiant\sounds\giant_breath_2",0.33}};
		volume = 1;
		range = 100;
	};
	class SFW_Pseudogiant_Step_SoundShader
	{
		samples[] = {{"StalkerFWConfig\mutants\pseudogiant\sounds\giant_step_0",0.65},{"StalkerFWConfig\mutants\pseudogiant\sounds\giant_step_1",0.35}};
		volume = 0.3;
		range = 70;
	};
};
class CfgSoundSets
{
	class Zmb_VoiceFX_Base_SoundSet;
	class baseFootstepsZmb_SoundSet;
	class SFW_Pseudogiant_Roar_Soundset: Zmb_VoiceFX_Base_SoundSet
	{
		soundShaders[] = {"SFW_Pseudogiant_Roar_SoundShader"};
		frequencyFactor = 0.92;
	};
	class SFW_Pseudogiant_Attack_Slash_Soundset: Zmb_VoiceFX_Base_SoundSet
	{
		soundShaders[] = {"SFW_Pseudogiant_Attack_Slash_SoundShader"};
		frequencyFactor = 0.92;
	};
	class SFW_Pseudogiant_Attack_Bite_Soundset: Zmb_VoiceFX_Base_SoundSet
	{
		soundShaders[] = {"SFW_Pseudogiant_Attack_Bite_SoundShader"};
		frequencyFactor = 0.92;
	};
	class SFW_Pseudogiant_Death_Soundset: Zmb_VoiceFX_Base_SoundSet
	{
		soundShaders[] = {"SFW_Pseudogiant_Death_SoundShader"};
		frequencyFactor = 0.92;
	};
	class SFW_Pseudogiant_Breath_Soundset: Zmb_VoiceFX_Base_SoundSet
	{
		soundShaders[] = {"SFW_Pseudogiant_Breath_SoundShader"};
		frequencyFactor = 0.92;
	};
	class SFW_Pseudogiant_Aggressive_Soundset: Zmb_VoiceFX_Base_SoundSet
	{
		soundShaders[] = {"SFW_Pseudogiant_Aggressive_SoundShader"};
		frequencyFactor = 0.92;
	};
	class SFW_Pseudogiant_Idle_Soundset: Zmb_VoiceFX_Base_SoundSet
	{
		soundShaders[] = {"SFW_Pseudogiant_Idle_SoundShader"};
		frequencyFactor = 0.92;
	};
	class SFW_Pseudogiant_Attack_Special_Soundset: Zmb_VoiceFX_Base_SoundSet
	{
		soundShaders[] = {"SFW_Pseudogiant_Attack_Special_SoundShader"};
		frequencyFactor = 0.92;
	};
	class SFW_Pseudogiant_Attack_Special_Hit_Soundset: Zmb_VoiceFX_Base_SoundSet
	{
		soundShaders[] = {"SFW_Pseudogiant_Attack_Special_Hit_SoundShader"};
		frequencyFactor = 0.92;
	};
	class SFW_Pseudogiant_Step_Soundset: baseFootstepsZmb_SoundSet
	{
		soundShaders[] = {"SFW_Pseudogiant_Step_SoundShader"};
		frequencyFactor = 0.92;
	};
	class SFW_Pseudogiant_Base_CalmIdle_SoundSet: SFW_Pseudogiant_Breath_Soundset{};
	class SFW_Pseudogiant_Base_CalmMove_SoundSet: SFW_Pseudogiant_Breath_Soundset
	{
		delay = 2;
		delayRandomizer = 1;
		startDelay = 3;
		startDelayRandomizer = 1;
		frequencyFactor = 0.92;
	};
	class SFW_Pseudogiant_Base_DisturbedIdle_SoundSet: SFW_Pseudogiant_Aggressive_Soundset{};
	class SFW_Pseudogiant_Base_ChaseMove_SoundSet: SFW_Pseudogiant_Aggressive_Soundset
	{
		delay = 2;
		delayRandomizer = 1;
		startDelay = 3;
		startDelayRandomizer = 1;
		frequencyFactor = 0.92;
	};
	class SFW_Pseudogiant_Base_AlertedIdle_SoundSet: SFW_Pseudogiant_Aggressive_Soundset{};
	class SFW_Pseudogiant_Base_AlertedMove_SoundSet: SFW_Pseudogiant_Aggressive_Soundset
	{
		delay = 2;
		delayRandomizer = 1;
	};
};
