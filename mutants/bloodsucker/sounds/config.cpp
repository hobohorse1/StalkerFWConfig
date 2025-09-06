class CfgPatches
{
	class SFW_Bloodsucker_Soundset
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data"};
	};
};
class CfgSoundSets
{
class CfgSoundSets
{
	class BloodSuckerAttack_SoundSet
	{
		soundShaders[] = {"BloodSuckerAttack_SoundShader"};
		sound3DProcessingType = "infected3DProcessingType";
		volumeCurve = "infectedAttenuationCurve";
		spatial = 1;
		doppler = 0;
		loop = 0;
	};
	class BloodSuckerBreath_SoundSet
	{
		soundShaders[] = {"BloodSuckerBreath_SoundShader"};
		sound3DProcessingType = "infected3DProcessingType";
		volumeCurve = "infectedAttenuationCurve";
		spatial = 1;
		doppler = 0;
		loop = 0;
	};
	class BloodSuckerHitHand_SoundSet
	{
		soundShaders[] = {"BloodSuckerHitHand_SoundShader"};
		sound3DProcessingType = "infected3DProcessingType";
		volumeCurve = "infectedAttenuationCurve";
		spatial = 1;
		doppler = 0;
		loop = 0;
	};
	class BloodSuckerDie_SoundSet
	{
		soundShaders[] = {"BloodSuckerDie_SoundShader"};
		sound3DProcessingType = "infected3DProcessingType";
		volumeCurve = "infectedAttenuationCurve";
		spatial = 1;
		doppler = 0;
		loop = 0;
	};
	class BloodSuckerEat_SoundSet
	{
		soundShaders[] = {"BloodSuckerEat_SoundShader"};
		sound3DProcessingType = "infected3DProcessingType";
		volumeCurve = "infectedAttenuationCurve";
		spatial = 1;
		doppler = 0;
		loop = 0;
	};
	class BloodSuckerGrowl_SoundSet
	{
		soundShaders[] = {"BloodSuckerGrowl_SoundShader"};
		sound3DProcessingType = "infected3DProcessingType";
		volumeCurve = "infectedAttenuationCurve";
		spatial = 1;
		doppler = 0;
		loop = 0;
	};
	class BloodSuckerHit_SoundSet
	{
		soundShaders[] = {"BloodSuckerHit_SoundShader"};
		sound3DProcessingType = "infected3DProcessingType";
		volumeCurve = "infectedAttenuationCurve";
		spatial = 1;
		doppler = 0;
		loop = 0;
	};
	class BloodSuckerIdle_SoundSet
	{
		soundShaders[] = {"BloodSuckerIdle_SoundShader"};
		sound3DProcessingType = "infected3DProcessingType";
		volumeCurve = "infectedAttenuationCurve";
		spatial = 1;
		doppler = 0;
		loop = 0;
	};
	class BloodSuckerInvisible_SoundSet
	{
		soundShaders[] = {"BloodSuckerInvisible_SoundShader"};
		sound3DProcessingType = "infected3DProcessingType";
		volumeCurve = "infectedAttenuationCurve";
		spatial = 1;
		doppler = 0;
		loop = 0;
	};
};
};
class CfgSoundShaders
{
	class BloodSuckerAttack_SoundShader
	{
		samples[] = {{"StalkerFWConfig\mutants\bloodsucker\sounds\bloodsucker_attack_0",1},{"StalkerFWConfig\mutants\bloodsucker\sounds\bloodsucker_attack_1",1},{"StalkerFWConfig\mutants\bloodsucker\sounds\bloodsucker_attack_2",1}};
		volume = 0.3;
		range = 60;
	};
	class BloodSuckerBreath_SoundShader
	{
		samples[] = {{"StalkerFWConfig\mutants\bloodsucker\sounds\bloodsucker_breath_0",1},{"StalkerFWConfig\mutants\bloodsucker\sounds\bloodsucker_breath_1",1}};
		volume = 0.3;
		range = 60;
	};
	class BloodSuckerHitHand_SoundShader
	{
		samples[] = {{"StalkerFWConfig\mutants\bloodsucker\sounds\bloodsucker_hit_hand_0",1}};
		volume = 0.3;
		range = 60;
	};
	class BloodSuckerDie_SoundShader
	{
		samples[] = {{"StalkerFWConfig\mutants\bloodsucker\sounds\bloodsucker_die_0",1},{"StalkerFWConfig\mutants\bloodsucker\sounds\bloodsucker_die_1",1},{"StalkerFWConfig\mutants\bloodsucker\sounds\bloodsucker_die_2",1},{"StalkerFWConfig\mutants\bloodsucker\sounds\bloodsucker_die_3",1}};
		volume = 0.3;
		range = 60;
	};
	class BloodSuckerEat_SoundShader
	{
		samples[] = {{"StalkerFWConfig\mutants\bloodsucker\sounds\bloodsucker_eat_0",1},{"StalkerFWConfig\mutants\bloodsucker\sounds\bloodsucker_eat_1",1}};
		volume = 0.3;
		range = 60;
	};
	class BloodSuckerGrowl_SoundShader
	{
		samples[] = {{"StalkerFWConfig\mutants\bloodsucker\sounds\bloodsucker_growl_0",1},{"StalkerFWConfig\mutants\bloodsucker\sounds\bloodsucker_growl_1",1}};
		volume = 0.3;
		range = 60;
	};
	class BloodSuckerHit_SoundShader
	{
		samples[] = {{"StalkerFWConfig\mutants\bloodsucker\sounds\bloodsucker_hit_0",1},{"StalkerFWConfig\mutants\bloodsucker\sounds\bloodsucker_hit_1",1},{"StalkerFWConfig\mutants\bloodsucker\sounds\bloodsucker_hit_2",1},{"StalkerFWConfig\mutants\bloodsucker\sounds\bloodsucker_hit_3",1},{"StalkerFWConfig\mutants\bloodsucker\sounds\bloodsucker_hit_4",1},{"StalkerFWConfig\mutants\bloodsucker\sounds\bloodsucker_hit_5",1}};
		volume = 0.3;
		range = 60;
	};
	class BloodSuckerIdle_SoundShader
	{
		samples[] = {{"StalkerFWConfig\mutants\bloodsucker\sounds\bloodsucker_idle_0",1},{"StalkerFWConfig\mutants\bloodsucker\sounds\bloodsucker_idle_1",1},{"StalkerFWConfig\mutants\bloodsucker\sounds\bloodsucker_idle_2",1}};
		volume = 0.3;
		range = 60;
	};
	class BloodSuckerInvisible_SoundShader
	{
		samples[] = {{"StalkerFWConfig\mutants\bloodsucker\sounds\bloodsucker_invisible_1",1},{"StalkerFWConfig\mutants\bloodsucker\sounds\bloodsucker_invisible_2",1}};
		volume = 0.3;
		range = 60;
	};
};
