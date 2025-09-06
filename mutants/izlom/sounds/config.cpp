class CfgPatches
{
	class DZ_Sounds_Effects
	{
		units[] = {"Sound_Owl","Sound_Stream","Sound_Frog","Sound_Frogs","Sound_Alarm","Sound_Alarm2","Sound_Fire","Sound_BirdSinging","Sound_Crickets1","Sound_Crickets2","Sound_Crickets3","Sound_Crickets4","Sound_Chicken","Sound_Cock","Sound_Cow","Sound_Crow","Sound_Wolf","Sound_Dog","Sound_BadDog","Sound_SorrowDog","Sound_LittleDog","Sound_Music","Sound_Factory01","Sound_Factory02","Sound_Factory03","Sound_Factory04","Sound_Factory05","Sound_Factory06","Sound_Factory07","Sound_Factory08","Sound_Factory09","Sound_Factory10","Sound_Factory11","Sound_Factory12","Sound_Factory13","Sound_Factory14","Sound_Factory15","Sound_Factory16","Sound_Factory17","Sound_Factory18","Sound_Flies"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Vehicles_Wheeled"};
	};
};
class CfgSoundSets
{
	class SFW_Izlom_Attack_Soundset
	{
		soundShaders[] = {"SFW_Izlom_Attack"};
		sound3DProcessingType = "infected3DProcessingType";
		volumeCurve = "infectedAttenuationCurve";
		spatial = 1;
		doppler = 0;
		loop = 0;
	};
	class SFW_Izlom_Hit_Soundset
	{
		soundShaders[] = {"SFW_Izlom_Hit"};
		sound3DProcessingType = "infected3DProcessingType";
		volumeCurve = "infectedAttenuationCurve";
		spatial = 1;
		doppler = 0;
		loop = 0;
	};
	class SFW_Izlom_Agro_Soundset
	{
		soundShaders[] = {"SFW_Izlom_Agro"};
		sound3DProcessingType = "infected3DProcessingType";
		volumeCurve = "infectedAttenuationCurve";
		spatial = 1;
		doppler = 0;
		loop = 0;
	};
	class SFW_Izlom_Dead_Soundset
	{
		soundShaders[] = {"SFW_Izlom_Dead"};
		sound3DProcessingType = "infected3DProcessingType";
		volumeCurve = "infectedAttenuationCurve";
		spatial = 1;
		doppler = 0;
		loop = 0;
	};
	class SFW_Izlom_Idle_Soundset
	{
		soundShaders[] = {"SFW_Izlom_Idle"};
		sound3DProcessingType = "infected3DProcessingType";
		volumeCurve = "infectedAttenuationCurve";
		spatial = 1;
		doppler = 0;
		loop = 0;
	};
};
class CfgSoundShaders
{
	class SFW_Izlom_Attack
	{
		samples[] = {{"StalkerFWConfig\mutants\izlom\sounds\izlom_attack1",0.125},{"StalkerFWConfig\mutants\izlom\sounds\izlom_attack2",0.125},{"StalkerFWConfig\mutants\izlom\sounds\izlom_attack3",0.125},{"StalkerFWConfig\mutants\izlom\sounds\izlom_attack4",0.125},{"StalkerFWConfig\mutants\izlom\sounds\izlom_attack5",0.125},{"StalkerFWConfig\mutants\izlom\sounds\izlom_attack6",0.125},{"StalkerFWConfig\mutants\izlom\sounds\izlom_attack7",0.125}};
		volume = 0.4;
		range = 45;
	};
	class SFW_Izlom_Hit
	{
		samples[] = {{"StalkerFWConfig\mutants\izlom\sounds\izlom_hit1",0.125},{"StalkerFWConfig\mutants\izlom\sounds\izlom_hit2",0.125},{"StalkerFWConfig\mutants\izlom\sounds\izlom_hit3",0.125},{"StalkerFWConfig\mutants\izlom\sounds\izlom_hit4",0.125}};
		volume = 0.5;
		range = 44;
	};
	class SFW_Izlom_Agro
	{
		samples[] = {{"StalkerFWConfig\mutants\izlom\sounds\izlom_agro1",0.125},{"StalkerFWConfig\mutants\izlom\sounds\izlom_agro2",0.125},{"StalkerFWConfig\mutants\izlom\sounds\izlom_agro3",0.125},{"StalkerFWConfig\mutants\izlom\sounds\izlom_agro4",0.125},{"StalkerFWConfig\mutants\izlom\sounds\izlom_agro5",0.125}};
		volume = 0.5;
		range = 55;
	};
	class SFW_Izlom_Dead
	{
		samples[] = {{"StalkerFWConfig\mutants\izlom\sounds\izlom_death1",0.125},{"StalkerFWConfig\mutants\izlom\sounds\izlom_death2",0.125},{"StalkerFWConfig\mutants\izlom\sounds\izlom_death3",0.125},{"StalkerFWConfig\mutants\izlom\sounds\izlom_death4",0.125},{"StalkerFWConfig\mutants\izlom\sounds\izlom_death5",0.125},{"StalkerFWConfig\mutants\izlom\sounds\izlom_death6",0.125}};
		volume = 0.6;
		range = 55;
	};
	class SFW_Izlom_Idle
	{
		samples[] = {{"StalkerFWConfig\mutants\izlom\sounds\izlom_idle1",0.125},{"StalkerFWConfig\mutants\izlom\sounds\izlom_idle2",0.125},{"StalkerFWConfig\mutants\izlom\sounds\izlom_idle3",0.125},{"StalkerFWConfig\mutants\izlom\sounds\izlom_idle4",0.125},{"StalkerFWConfig\mutants\izlom\sounds\izlom_idle5",0.125},{"StalkerFWConfig\mutants\izlom\sounds\izlom_idle6",0.125},{"StalkerFWConfig\mutants\izlom\sounds\izlom_idle7",0.125},{"StalkerFWConfig\mutants\izlom\sounds\izlom_idle8",0.125},{"StalkerFWConfig\mutants\izlom\sounds\izlom_idle9",0.125},{"StalkerFWConfig\mutants\izlom\sounds\izlom_idle10",0.125},{"StalkerFWConfig\mutants\izlom\sounds\izlom_idle11",0.125},{"StalkerFWConfig\mutants\izlom\sounds\izlom_idle12",0.125}};
		volume = 0.4;
		range = 30;
	};
};
