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
	class SFW_Tark_Attack_Soundset
	{
		soundShaders[] = {"SFW_Tark_Attack"};
		sound3DProcessingType = "infected3DProcessingType";
		volumeCurve = "infectedAttenuationCurve";
		spatial = 1;
		doppler = 0;
		loop = 0;
	};
	class SFW_Tark_Pain_Soundset
	{
		soundShaders[] = {"SFW_Tark_Pain"};
		sound3DProcessingType = "infected3DProcessingType";
		volumeCurve = "infectedAttenuationCurve";
		spatial = 1;
		doppler = 0;
		loop = 0;
	};
	class SFW_Tark_Aggr_Soundset
	{
		soundShaders[] = {"SFW_Tark_Aggr"};
		sound3DProcessingType = "infected3DProcessingType";
		volumeCurve = "infectedAttenuationCurve";
		spatial = 1;
		doppler = 0;
		loop = 0;
	};
	class SFW_Tark_Death_Soundset
	{
		soundShaders[] = {"SFW_Tark_Death"};
		sound3DProcessingType = "infected3DProcessingType";
		volumeCurve = "infectedAttenuationCurve";
		spatial = 1;
		doppler = 0;
		loop = 0;
	};
};
class CfgSoundShaders
{
	class SFW_Tark_Attack
	{
		samples[] = {{"StalkerFWConfig\mutants\tark\sound\attack1",0.125},{"StalkerFWConfig\mutants\tark\sound\attack2",0.125},{"StalkerFWConfig\mutants\tark\sound\attack3",0.125}};
		volume = 0.9;
		range = 100;
	};
	class SFW_Tark_Pain
	{
		samples[] = {{"StalkerFWConfig\mutants\tark\sound\pain1",0.125},{"StalkerFWConfig\mutants\tark\sound\pain2",0.125},{"StalkerFWConfig\mutants\tark\sound\pain3",0.125},{"StalkerFWConfig\mutants\tark\sound\pain4",0.125}};
		volume = 0.9;
		range = 54;
	};
	class SFW_Tark_Aggr
	{
		samples[] = {{"StalkerFWConfig\mutants\tark\sound\aggr1",0.125},{"StalkerFWConfig\mutants\tark\sound\aggr2",0.125},{"StalkerFWConfig\mutants\tark\sound\aggr3",0.125},{"StalkerFWConfig\mutants\tark\sound\aggr4",0.125}};
		volume = 1.2;
		range = 260;
	};
	class SFW_Tark_Death
	{
		samples[] = {{"StalkerFWConfig\mutants\tark\sound\death1",0.125},{"StalkerFWConfig\mutants\tark\sound\death2",0.125},{"StalkerFWConfig\mutants\tark\sound\death3",0.125},{"StalkerFWConfig\mutants\tark\sound\death4",0.125}};
		volume = 0.9;
		range = 54;
	};
};
