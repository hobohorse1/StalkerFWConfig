class CfgPatches
{
	class SFW_Pseudodog_Soundset
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Vehicles_Wheeled"};
	};
};
class CfgSoundSets
{
	class SFW_pseudodog_eat_soundset
	{
		soundShaders[] = {"SFW_pseudodog_eat_shader"};
		sound3DProcessingType = "infected3DProcessingType";
		volumeCurve = "infectedAttenuationCurve";
		spatial = 1;
		doppler = 0;
		loop = 0;
	};
	class SFW_pseudodog_pseudodog_aggression_soundset
	{
		soundShaders[] = {"SFW_pseudodog_pseudodog_aggression_shader"};
		sound3DProcessingType = "infected3DProcessingType";
		volumeCurve = "infectedAttenuationCurve";
		spatial = 1;
		doppler = 0;
		loop = 0;
	};
	class SFW_pseudodog_pseudodog_attack_soundset
	{
		soundShaders[] = {"SFW_pseudodog_pseudodog_attack_shader"};
		sound3DProcessingType = "infected3DProcessingType";
		volumeCurve = "infectedAttenuationCurve";
		spatial = 1;
		doppler = 0;
		loop = 0;
	};
	class SFW_pseudodog_pseudodog_chew_soundset
	{
		soundShaders[] = {"SFW_pseudodog_pseudodog_chew_shader"};
		sound3DProcessingType = "infected3DProcessingType";
		volumeCurve = "infectedAttenuationCurve";
		spatial = 1;
		doppler = 0;
		loop = 0;
	};
	class SFW_pseudodog_pseudodog_death_soundset
	{
		soundShaders[] = {"SFW_pseudodog_pseudodog_death_shader"};
		sound3DProcessingType = "infected3DProcessingType";
		volumeCurve = "infectedAttenuationCurve";
		spatial = 1;
		doppler = 0;
		loop = 0;
	};
	class SFW_pseudodog_pseudodog_howl_soundset
	{
		soundShaders[] = {"SFW_pseudodog_pseudodog_howl_shader"};
		sound3DProcessingType = "infected3DProcessingType";
		volumeCurve = "infectedAttenuationCurve";
		spatial = 1;
		doppler = 0;
		loop = 0;
	};
	class SFW_pseudodog_pseudodog_howl_long_soundset
	{
		soundShaders[] = {"SFW_pseudodog_pseudodog_howl_long_shader"};
		sound3DProcessingType = "infected3DProcessingType";
		volumeCurve = "infectedAttenuationCurve";
		spatial = 1;
		doppler = 0;
		loop = 0;
	};
	class SFW_pseudodog_pseudodog_hurt_soundset
	{
		soundShaders[] = {"SFW_pseudodog_pseudodog_hurt_shader"};
		sound3DProcessingType = "infected3DProcessingType";
		volumeCurve = "infectedAttenuationCurve";
		spatial = 1;
		doppler = 0;
		loop = 0;
	};
	class SFW_pseudodog_pseudodog_idle_soundset
	{
		soundShaders[] = {"SFW_pseudodog_pseudodog_idle_shader"};
		sound3DProcessingType = "infected3DProcessingType";
		volumeCurve = "infectedAttenuationCurve";
		spatial = 1;
		doppler = 0;
		loop = 0;
	};
	class SFW_pseudodog_pseudodog_threaten_soundset
	{
		soundShaders[] = {"SFW_pseudodog_pseudodog_threaten_shader"};
		sound3DProcessingType = "infected3DProcessingType";
		volumeCurve = "infectedAttenuationCurve";
		spatial = 1;
		doppler = 0;
		loop = 0;
	};
	class SFW_pseudodog_psy_affect_soundset
	{
		soundShaders[] = {"SFW_pseudodog_pseudodog_howl_shader"};
		sound3DProcessingType = "infected3DProcessingType";
		volumeCurve = "infectedAttenuationCurve";
		spatial = 1;
		doppler = 0;
		loop = 0;
	};
	class SFW_pseudodog_psy_clone_kill_soundset
	{
		soundShaders[] = {"SFW_pseudodog_psy_clone_kill_Shader"};
		sound3DProcessingType = "infected3DProcessingType";
		volumeCurve = "infectedAttenuationCurve";
		spatial = 1;
		doppler = 0;
		loop = 0;
	};
};
class CfgSoundShaders
{
	class SFW_pseudodog_eat_Shader
	{
		samples[] = {{"StalkerFWConfig\mutants\pseudodog\sounds\eat_0",1}};
		volume = 1;
		range = 60;
	};
	class SFW_pseudodog_pseudodog_attack_Shader
	{
		samples[] = {{"StalkerFWConfig\mutants\pseudodog\sounds\pseudodog_attack_0",0.25},{"StalkerFWConfig\mutants\pseudodog\sounds\pseudodog_attack_1",0.25},{"StalkerFWConfig\mutants\pseudodog\sounds\pseudodog_attack_2",0.25},{"StalkerFWConfig\mutants\pseudodog\sounds\pseudodog_attack_3",0.25}};
		volume = 1;
		range = 60;
	};
	class SFW_pseudodog_pseudodog_chew_Shader
	{
		samples[] = {{"StalkerFWConfig\mutants\pseudodog\sounds\pseudodog_chew_0",0.3},{"StalkerFWConfig\mutants\pseudodog\sounds\pseudodog_chew_1",0.3},{"StalkerFWConfig\mutants\pseudodog\sounds\pseudodog_chew_2",0.3}};
		volume = 1;
		range = 60;
	};
	class SFW_pseudodog_pseudodog_death_Shader
	{
		samples[] = {{"StalkerFWConfig\mutants\pseudodog\sounds\pseudodog_death_0",0.25},{"StalkerFWConfig\mutants\pseudodog\sounds\pseudodog_death_1",0.25}};
		volume = 1;
		range = 60;
	};
	class SFW_pseudodog_pseudodog_howl_Shader
	{
		samples[] = {{"StalkerFWConfig\mutants\pseudodog\sounds\pseudodog_aggression_0",0.5},{"StalkerFWConfig\mutants\pseudodog\sounds\pseudodog_aggression_1",0.5}};
		volume = 0.1;
		range = 100;
		rangeCurve = "defaultAnimalAttenuationCurve";
	};
	class SFW_pseudodog_pseudodog_hurt_Shader
	{
		samples[] = {{"StalkerFWConfig\mutants\pseudodog\sounds\pseudodog_hurt_0",0.25},{"StalkerFWConfig\mutants\pseudodog\sounds\pseudodog_hurt_1",0.25}};
		volume = 1;
		range = 60;
	};
	class SFW_pseudodog_pseudodog_idle_Shader
	{
		samples[] = {{"StalkerFWConfig\mutants\pseudodog\sounds\pseudodog_idle_0",0.25},{"StalkerFWConfig\mutants\pseudodog\sounds\pseudodog_idle_1",0.25},{"StalkerFWConfig\mutants\pseudodog\sounds\pseudodog_idle_2",0.25},{"StalkerFWConfig\mutants\pseudodog\sounds\pseudodog_idle_3",0.25},{"StalkerFWConfig\mutants\pseudodog\sounds\pseudodog_idle_4",0.25}};
		volume = 1;
		range = 60;
	};
	class SFW_pseudodog_pseudodog_threaten_Shader
	{
		samples[] = {{"StalkerFWConfig\mutants\pseudodog\sounds\pseudodog_threaten_0",0.25},{"StalkerFWConfig\mutants\pseudodog\sounds\pseudodog_threaten_1",0.25},{"StalkerFWConfig\mutants\pseudodog\sounds\pseudodog_threaten_2",0.25},{"StalkerFWConfig\mutants\pseudodog\sounds\pseudodog_threaten_3",0.25}};
		volume = 1;
		range = 60;
	};
	class SFW_pseudodog_psy_affect_Shader
	{
		samples[] = {{"StalkerFWConfig\mutants\pseudodog\sounds\psy_affect_0",0.25}};
		volume = 1;
		range = 60;
	};
	class SFW_pseudodog_psy_clone_kill_Shader
	{
		samples[] = {{"StalkerFWConfig\mutants\pseudodog\sounds\psy_clone_kill",0.25}};
		volume = 1;
		range = 5;
	};
};
