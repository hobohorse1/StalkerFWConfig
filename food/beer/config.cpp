class CfgPatches
{
	class SFW_Food_Beer
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
	class GlassBottle;
	class SFW_Food: GlassBottle
	{
		scope = 2;
		displayName = "Beer";
		descriptionShort = "";
		model = "StalkerFWConfig\food\beer\Beer.p3d";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1,{}},{0.7,{}},{0.5,{}},{0.3,{}},{0,{}}};
				};
			};
		};
	};
};
