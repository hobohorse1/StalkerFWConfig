

class CfgPatches
{
	class DZ_Sounds_Effects_Cat
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Vehicles_Wheeled"};
	};
};
class CfgSoundSets
{
	class SFW_Mutants_flesh_aggressive_soundset
	{
		soundShaders[] = {"SFW_Mutants_flesh_aggressive_shader"};
		sound3DProcessingType = "infected3DProcessingType";
		volumeCurve = "infectedAttenuationCurve";
		spatial = 1;
		doppler = 0;
		loop = 0;
	};
	class SFW_Mutants_flesh_anomaly_death_soundset
	{
		soundShaders[] = {"SFW_Mutants_flesh_anomaly_death_shader"};
		sound3DProcessingType = "infected3DProcessingType";
		volumeCurve = "infectedAttenuationCurve";
		spatial = 1;
		doppler = 0;
		loop = 0;
	};
	class SFW_Mutants_flesh_attack_soundset
	{
		soundShaders[] = {"SFW_Mutants_flesh_attack_shader"};
		sound3DProcessingType = "infected3DProcessingType";
		volumeCurve = "infectedAttenuationCurve";
		spatial = 1;
		doppler = 0;
		loop = 0;
	};
	class SFW_Mutants_flesh_attack_hit_soundset
	{
		soundShaders[] = {"SFW_Mutants_flesh_attack_hit_shader"};
		sound3DProcessingType = "infected3DProcessingType";
		volumeCurve = "infectedAttenuationCurve";
		spatial = 1;
		doppler = 0;
		loop = 0;
	};
	class SFW_Mutants_flesh_death_soundset
	{
		soundShaders[] = {"SFW_Mutants_flesh_death_shader"};
		sound3DProcessingType = "infected3DProcessingType";
		volumeCurve = "infectedAttenuationCurve";
		spatial = 1;
		doppler = 0;
		loop = 0;
	};
	class SFW_Mutants_flesh_eat_soundset
	{
		soundShaders[] = {"SFW_Mutants_flesh_eat_shader"};
		sound3DProcessingType = "infected3DProcessingType";
		volumeCurve = "infectedAttenuationCurve";
		spatial = 1;
		doppler = 0;
		loop = 0;
	};
	class SFW_Mutants_flesh_idle_soundset
	{
		soundShaders[] = {"SFW_Mutants_flesh_idle_shader"};
		sound3DProcessingType = "infected3DProcessingType";
		volumeCurve = "infectedAttenuationCurve";
		spatial = 1;
		doppler = 0;
		loop = 0;
	};
	class SFW_Mutants_flesh_pain_soundset
	{
		soundShaders[] = {"SFW_Mutants_flesh_pain_shader"};
		sound3DProcessingType = "infected3DProcessingType";
		volumeCurve = "infectedAttenuationCurve";
		spatial = 1;
		doppler = 0;
		loop = 0;
	};
	class SFW_Mutants_flesh_panic_soundset
	{
		soundShaders[] = {"SFW_Mutants_flesh_panic_shader"};
		sound3DProcessingType = "infected3DProcessingType";
		volumeCurve = "infectedAttenuationCurve";
		spatial = 1;
		doppler = 0;
		loop = 0;
	};
};
class CfgSoundShaders
{
	class SFW_Mutants_flesh_aggressive_shader
	{
		samples[] = {{"StalkerFWConfig\mutants\flesh\sounds\flesh_aggressive_0",0.3},{"StalkerFWConfig\mutants\flesh\sounds\flesh_aggressive_1",0.3},{"StalkerFWConfig\mutants\flesh\sounds\flesh_aggressive_2",0.3}};
		volume = 0.5;
		range = 60;
	};
	class SFW_Mutants_flesh_anomaly_death_shader
	{
		samples[] = {{"StalkerFWConfig\mutants\flesh\sounds\flesh_anomaly_death_0",1}};
		volume = 1;
		range = 60;
	};
	class SFW_Mutants_flesh_attack_shader
	{
		samples[] = {{"StalkerFWConfig\mutants\flesh\sounds\flesh_attack_0",0.25},{"StalkerFWConfig\mutants\flesh\sounds\flesh_attack_1",0.25},{"StalkerFWConfig\mutants\flesh\sounds\flesh_attack_2",0.25}};
		volume = 1;
		range = 60;
	};
	class SFW_Mutants_flesh_attack_hit_shader
	{
		samples[] = {{"StalkerFWConfig\mutants\flesh\sounds\flesh_attack_hit_0",0.25},{"StalkerFWConfig\mutants\flesh\sounds\flesh_attack_hit_1",0.25}};
		volume = 1;
		range = 60;
	};
	class SFW_Mutants_flesh_death_shader
	{
		samples[] = {{"StalkerFWConfig\mutants\flesh\sounds\flesh_death_0",0.25},{"StalkerFWConfig\mutants\flesh\sounds\flesh_death_1",0.25},{"StalkerFWConfig\mutants\flesh\sounds\flesh_death_2",0.25},{"StalkerFWConfig\mutants\flesh\sounds\flesh_death_3",0.25}};
		volume = 1;
		range = 60;
	};
	class SFW_Mutants_flesh_eat_shader
	{
		samples[] = {{"StalkerFWConfig\mutants\flesh\sounds\flesh_eat_0",0.25},{"StalkerFWConfig\mutants\flesh\sounds\flesh_eat_1",0.25},{"StalkerFWConfig\mutants\flesh\sounds\flesh_eat_2",0.25},{"StalkerFWConfig\mutants\flesh\sounds\flesh_eat_3",0.25},{"StalkerFWConfig\mutants\flesh\sounds\flesh_eat_4",0.25},{"StalkerFWConfig\mutants\flesh\sounds\flesh_eat_5",0.25}};
		volume = 1;
		range = 60;
	};
	class SFW_Mutants_flesh_idle_shader
	{
		samples[] = {{"StalkerFWConfig\mutants\flesh\sounds\flesh_idle_0",0.25},{"StalkerFWConfig\mutants\flesh\sounds\flesh_idle_1",0.25},{"StalkerFWConfig\mutants\flesh\sounds\flesh_idle_2",0.25},{"StalkerFWConfig\mutants\flesh\sounds\flesh_idle_3",0.25},{"StalkerFWConfig\mutants\flesh\sounds\flesh_idle_4",0.25}};
		volume = 0.1;
		range = 30;
	};
	class SFW_Mutants_flesh_pain_shader
	{
		samples[] = {{"StalkerFWConfig\mutants\flesh\sounds\flesh_pain_0",0.25},{"StalkerFWConfig\mutants\flesh\sounds\flesh_pain_1",0.25},{"StalkerFWConfig\mutants\flesh\sounds\flesh_pain_2",0.25},{"StalkerFWConfig\mutants\flesh\sounds\flesh_pain_3",0.25}};
		volume = 1;
		range = 60;
	};
	class SFW_Mutants_flesh_panic_shader
	{
		samples[] = {{"StalkerFWConfig\mutants\flesh\sounds\flesh_panic_0",0.25},{"StalkerFWConfig\mutants\flesh\sounds\flesh_panic_1",0.25},{"StalkerFWConfig\mutants\flesh\sounds\flesh_panic_2",0.25}};
		volume = 1;
		range = 60;
	};
};
