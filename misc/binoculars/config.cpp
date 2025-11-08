class CfgPatches
{
	class SFW_Misc
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Gear_Optics"};
	};
};
class CfgVehicles
{
	class Binoculars;
	class SFW_Misc_Binoculars: Binoculars
	{
		scope = 2;
		displayName = "Binoculars";
		descriptionShort = "";
		model = "StalkerFWConfig\misc\binoculars\Binoculars.p3d";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1,{"StalkerFWConfig\misc\binoculars\data\Bin.rvmat"}},{0.7,{"StalkerFWConfig\misc\binoculars\data\Bin.rvmat"}},{0.5,{"StalkerFWConfig\misc\binoculars\data\Bin_damage.rvmat"}},{0.3,{"StalkerFWConfig\misc\binoculars\data\Bin_damage.rvmat"}},{0,{"StalkerFWConfig\misc\binoculars\data\Bin_destruct.rvmat"}}};
				};
			};
		};
	};
};
