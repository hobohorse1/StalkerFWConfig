class CfgPatches
{
	class SFW_Food_Tourist
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
	class Lunchmeat;
	class Lunchmeat_Opened;

	class SFW_Food_Tourist: Lunchmeat
	{
		scope=2;
		displayName="Tourist's Delight";
		descriptionShort="A legendary canned stew of questionable origin. Meat, beans, and mystery ingredients blended into a meal that’s stood the test of time.";
		varTemperatureFreezePoint=0;
		varTemperatureThawPoint=0;
		weight=250;
		hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[]=
		{
			"StalkerFWConfig\food\tourists\data\tourist.paa"
		};
	};
	class SFW_Food_Tourist_Opened: Lunchmeat_Opened
	{
		scope=2;
		displayName="Tourist's Delight";
		descriptionShort="A legendary canned stew of questionable origin. Meat, beans, and mystery ingredients blended into a meal that’s stood the test of time.";
		varTemperatureFreezePoint=0;
		varTemperatureThawPoint=0;
		weight=250;
		hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[]=
		{
			"StalkerFWConfig\food\tourists\data\tourist.paa"
		};
		class Nutrition
		{
			fullnessIndex=2;
			energy=500;
			water=0;
			nutritionalIndex=1;
			toxicity=0;
		};
	};
};
