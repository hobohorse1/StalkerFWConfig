class CfgPatches
{
	class SFW_Cat_Soundset
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data"};
	};
};
class CfgSoundSets
{
	class SFW_cat_aggressive_soundset
	{
		soundShaders[] = {"SFW_cat_aggressive_shader"};
		sound3DProcessingType = "infected3DProcessingType";
		volumeCurve = "infectedAttenuationCurve";
		spatial = 1;
		doppler = 0;
		loop = 0;
	};
	class SFW_cat_hit_soundset
	{
		soundShaders[] = {"SFW_cat_hit_shader"};
		sound3DProcessingType = "infected3DProcessingType";
		volumeCurve = "infectedAttenuationCurve";
		spatial = 1;
		doppler = 0;
		loop = 0;
	};
	class SFW_cat_panic_soundset
	{
		soundShaders[] = {"SFW_cat_panic_shader"};
		sound3DProcessingType = "infected3DProcessingType";
		volumeCurve = "infectedAttenuationCurve";
		spatial = 1;
		doppler = 0;
		loop = 0;
	};
};
class CfgSoundShaders
{
	class SFW_cat_aggressive_shader
	{
		samples[] = {{"StalkerFWConfig\mutants\cat\sounds\cat_aggressive_0",0.3},{"StalkerFWConfig\mutants\cat\sounds\cat_aggressive_1",0.3},{"StalkerFWConfig\mutants\cat\sounds\cat_aggressive_2",0.3}};
		volume = 0.3;
		range = 60;
	};
	class SFW_cat_hit_shader
	{
		samples[] = {{"StalkerFWConfig\mutants\cat\sounds\cat_hit_0",0.25},{"StalkerFWConfig\mutants\cat\sounds\cat_hit_1",0.25},{"StalkerFWConfig\mutants\cat\sounds\cat_hit_2",0.25}};
		volume = 0.3;
		range = 60;
	};
	class SFW_cat_panic_shader
	{
		samples[] = {{"StalkerFWConfig\mutants\cat\sounds\cat_panic_0",0.25},{"StalkerFWConfig\mutants\cat\sounds\cat_panic_1",0.25},{"StalkerFWConfig\mutants\cat\sounds\cat_panic_2",0.25}};
		volume = 0.3;
		range = 60;
	};
};
