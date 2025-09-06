class CfgPatches
{
	class SFW_Food_Shi
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Gear_Food",
			"DZ_Gear_Drinks"
		};
	};
};

class CfgVehicles
{
	class Inventory_Base;
	class Edible_Base;
	class BakedBeansCan;
	class BakedBeansCan_Opened;


	class SFW_Food_Shi: BakedBeansCan
	{
		displayName="Canned Cabbage Soup";
		descriptionShort="A simple, hearty meal sealed in a tin. Faintly sour, vaguely familiar, and just enough to remind you of home.";
		scope=2;
		hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[]=
		{
			"StalkerFWConfig\food\shi\data\shi.paa"
		};
	};
	class SFW_Food_Shi_Opened: BakedBeansCan_Opened
	{
		displayName="Canned Cabbage Soup";
		descriptionShort="A simple, hearty meal sealed in a tin. Faintly sour, vaguely familiar, and just enough to remind you of home.";
		scope=2;
		hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[]=
		{
			"StalkerFWConfig\food\shi\data\shi.paa"
		};
		class Nutrition
		{
			fullnessIndex=1.5;
			energy=200;
			water=400;
			nutritionalIndex=1;
			toxicity=0;
		};
	};
};
