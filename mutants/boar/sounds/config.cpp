class CfgPatches
{
	class SFW_Boar_Soundset
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data"};
	};
};
class CfgSoundSets
{
	class SFW_Boar_Bark_Soundset
	{
		soundShaders[] = {"SFW_Boar_Bark_Shader"};
		sound3DProcessingType = "infected3DProcessingType";
		volumeCurve = "infectedAttenuationCurve";
		spatial = 1;
		doppler = 0;
		loop = 0;
	};
	class SFW_Boar_Breath_Soundset
	{
		soundShaders[] = {"SFW_Boar_Breath_Shader"};
		sound3DProcessingType = "infected3DProcessingType";
		volumeCurve = "infectedAttenuationCurve";
		spatial = 1;
		doppler = 0;
		loop = 0;
	};
	class SFW_Boar_Groan_Soundset
	{
		soundShaders[] = {"SFW_Boar_Groan_Shader"};
		sound3DProcessingType = "infected3DProcessingType";
		volumeCurve = "infectedAttenuationCurve";
		spatial = 1;
		doppler = 0;
		loop = 0;
	};
	class SFW_Boar_Growl_Soundset
	{
		soundShaders[] = {"SFW_Boar_Growl_Shader"};
		sound3DProcessingType = "infected3DProcessingType";
		volumeCurve = "infectedAttenuationCurve";
		spatial = 1;
		doppler = 0;
		loop = 0;
	};
	class SFW_Boar_Pant_Soundset
	{
		soundShaders[] = {"SFW_Boar_Pant_Shader"};
		sound3DProcessingType = "infected3DProcessingType";
		volumeCurve = "infectedAttenuationCurve";
		spatial = 1;
		doppler = 0;
		loop = 0;
	};
	class SFW_Boar_Snarl_Soundset
	{
		soundShaders[] = {"SFW_Boar_Snarl_Shader"};
		sound3DProcessingType = "infected3DProcessingType";
		volumeCurve = "infectedAttenuationCurve";
		spatial = 1;
		doppler = 0;
		loop = 0;
	};
	class SFW_Boar_Whimper_Soundset
	{
		soundShaders[] = {"SFW_Boar_Whimper_Shader"};
		sound3DProcessingType = "infected3DProcessingType";
		volumeCurve = "infectedAttenuationCurve";
		spatial = 1;
		doppler = 0;
		loop = 0;
	};
	class SFW_Boar_Yelp_Soundset
	{
		soundShaders[] = {"SFW_Boar_Yelp_Shader"};
		sound3DProcessingType = "infected3DProcessingType";
		volumeCurve = "infectedAttenuationCurve";
		spatial = 1;
		doppler = 0;
		loop = 0;
	};
	class SFW_Boar_Yawn_Soundset
	{
		soundShaders[] = {"SFW_Boar_Yawn_Shader"};
		sound3DProcessingType = "infected3DProcessingType";
		volumeCurve = "infectedAttenuationCurve";
		spatial = 1;
		doppler = 0;
		loop = 0;
	};
	class SFW_Boar_Death_Soundset
	{
		soundShaders[] = {"SFW_Boar_Death_Shader"};
		sound3DProcessingType = "infected3DProcessingType";
		volumeCurve = "infectedAttenuationCurve";
		spatial = 1;
		doppler = 0;
		loop = 0;
	};
	class SFW_Boar_Howl_Soundset
	{
		soundShaders[] = {"SFW_Boar_Howl_Shader"};
		sound3DProcessingType = "infected3DProcessingType";
		volumeCurve = "infectedAttenuationCurve";
		spatial = 1;
		doppler = 0;
		loop = 0;
	};
};
class CfgSoundShaders
{
	class SFW_Boar_Bark_Shader
	{
		samples[] = {{"StalkerFWConfig\mutants\boar\sounds\boar_aggressive_0",0.25},{"StalkerFWConfig\mutants\boar\sounds\boar_aggressive_1",0.25},{"StalkerFWConfig\mutants\boar\sounds\boar_aggressive_2",0.25},{"StalkerFWConfig\mutants\boar\sounds\boar_aggressive_3",0.25}};
		volume = 1;
		range = 60;
	};
	class SFW_Boar_Breath_Shader
	{
		samples[] = {{"StalkerFWConfig\mutants\boar\sounds\boar_idle_0",0.4},{"StalkerFWConfig\mutants\boar\sounds\boar_idle_1",0.2},{"StalkerFWConfig\mutants\boar\sounds\boar_idle_2",0.2},{"StalkerFWConfig\mutants\boar\sounds\boar_idle_3",0.2}};
		volume = 0.1;
		range = 30;
	};
	class SFW_Boar_Groan_Shader
	{
		samples[] = {{"StalkerFWConfig\mutants\boar\sounds\boar_pain_0",0.33},{"StalkerFWConfig\mutants\boar\sounds\boar_pain_1",0.33},{"StalkerFWConfig\mutants\boar\sounds\boar_pain_3",0.34}};
		volume = 1;
		range = 60;
	};
	class SFW_Boar_Growl_Shader
	{
		samples[] = {{"StalkerFWConfig\mutants\boar\sounds\boar_attack_0",0.25},{"StalkerFWConfig\mutants\boar\sounds\boar_attack_1",0.25},{"StalkerFWConfig\mutants\boar\sounds\boar_attack_2",0.25}};
		volume = 1;
		range = 60;
	};
	class SFW_Boar_Pant_Shader
	{
		samples[] = {{"StalkerFWConfig\mutants\boar\sounds\boar_threaten_0",0.5},{"StalkerFWConfig\mutants\boar\sounds\boar_threaten_1",0.5}};
		volume = 1;
		range = 60;
	};
	class SFW_Boar_Snarl_Shader
	{
		samples[] = {{"StalkerFWConfig\mutants\boar\sounds\boar_attack_0",0.25},{"StalkerFWConfig\mutants\boar\sounds\boar_attack_1",0.25},{"StalkerFWConfig\mutants\boar\sounds\boar_attack_2",0.25}};
		volume = 1;
		range = 60;
	};
	class SFW_Boar_Whimper_Shader
	{
		samples[] = {{"StalkerFWConfig\mutants\boar\sounds\boar_panic_0",0.25},{"StalkerFWConfig\mutants\boar\sounds\boar_panic_1",0.25},{"StalkerFWConfig\mutants\boar\sounds\boar_panic_2",0.25},{"StalkerFWConfig\mutants\boar\sounds\boar_panic_3",0.25}};
		volume = 1;
		range = 60;
	};
	class SFW_Boar_Yelp_Shader
	{
		samples[] = {{"StalkerFWConfig\mutants\boar\sounds\boar_aggressive_0",1}};
		volume = 1;
		range = 60;
	};
	class SFW_Boar_Yawn_Shader
	{
		samples[] = {{"StalkerFWConfig\mutants\boar\sounds\boar_idle_3",1}};
		volume = 1;
		range = 60;
	};
	class SFW_Boar_Death_Shader
	{
		samples[] = {{"StalkerFWConfig\mutants\boar\sounds\boar_anomaly_death_0",0.2},{"StalkerFWConfig\mutants\boar\sounds\boar_death_0",0.2},{"StalkerFWConfig\mutants\boar\sounds\boar_death_1",0.2},{"StalkerFWConfig\mutants\boar\sounds\boar_death_2",0.2},{"StalkerFWConfig\mutants\boar\sounds\boar_death_3",0.2}};
		volume = 1;
		range = 60;
	};
	class SFW_Boar_Howl_Shader
	{
		samples[] = {{"StalkerFWConfig\mutants\boar\sounds\boar_anomaly_0",1}};
		volume = 1;
		range = 60;
	};
};
