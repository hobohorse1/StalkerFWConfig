class CfgPatches
{
	class SFW_AI2
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data"
		};
	};
};

class CfgVehicles
{
	class Inventory_Base;
	class SFW_AI2_Base: Inventory_Base
	{
		scope = 1;
		displayName = "AI2 First-aid kit";	
		itemSize[] = {2,2};
		weight = 1000;	
	};
	class SFW_Medical_Orange_AI2: SFW_AI2_Base
	{
		scope = 2;
		displayName = "AI2 medkit";
		descriptionShort = "";
		model = "StalkerFWConfig\medical\ai2\AI2.p3d";
		hiddenSelections[]=
		{
			"color"
		};
		hiddenSelectionsTextures[]=
		{
			"StalkerFWConfig\medical\ai2\data\AI2_Orange.paa"
		};		
	};
	class SFW_Medical_Blue_AI2: SFW_AI2_Base
	{
		scope = 2;
		displayName = "AI2 Army medkit";
		descriptionShort = "";
		model = "StalkerFWConfig\medical\ai2\AI2.p3d";
		hiddenSelections[]=
		{
			"color"
		};
		hiddenSelectionsTextures[]=
		{
			"StalkerFWConfig\medical\ai2\data\AI2_Blue.paa"
		};		
	};
	class SFW_Medical_Yellow_AI2: SFW_AI2_Base
	{
		scope = 2;
		displayName = "AI2 Scientific medkit";
		descriptionShort = "";
		model = "StalkerFWConfig\medical\ai2\AI2.p3d";
		hiddenSelections[]=
		{
			"color"
		};
		hiddenSelectionsTextures[]=
		{
			"StalkerFWConfig\medical\ai2\data\AI2_Yellow.paa"
		};		
	};
};
