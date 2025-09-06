class CfgPatches
{
	class SFW_Food_Ikra
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

	class SFW_Food_Ikra: Lunchmeat
	{
		scope=2;
		displayName="Canned Salmon Roe";
		descriptionShort="A rare delicacy in the Zone, this tin holds briny, nutrient-rich fish eggs. A luxury for some, a curiosity for others.";
		varTemperatureFreezePoint=0;
		varTemperatureThawPoint=0;
		weight=250;
		hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[]=
		{
			"StalkerFWConfig\food\ikra\data\ikra.paa"
		};
	};
	class SFW_Food_Ikra_Opened: Lunchmeat_Opened
	{
		scope=2;
		displayName="Canned Salmon Roe";
		descriptionShort="A rare delicacy in the Zone, this tin holds briny, nutrient-rich fish eggs. A luxury for some, a curiosity for others.";
		varTemperatureFreezePoint=0;
		varTemperatureThawPoint=0;
		weight=250;
		hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[]=
		{
			"StalkerFWConfig\food\ikra\data\ikra.paa"
		};
		class Nutrition
		{
			fullnessIndex=2;
			energy=400;
			water=50;
			nutritionalIndex=1;
			toxicity=0;
		};
	};
};
