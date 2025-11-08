class CfgPatches
{
	class SFW_Medical
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.3;
		requiredAddons[] = {"DZ_Data"};
	};
};
class CfgVehicles
{
	class Inventory_Base;
	class Edible_Base;
	class SFW_Medical_Anabiotic: Edible_Base
	{
		scope = 2;
		model = "\StalkerFWConfig\medical\anabiotic\anabiotic.p3d";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 50;
					healthLevels[] = {{1.0,{"StalkerFWConfig\medical\data\MedItems.rvmat"}},{0.7,{"StalkerFWConfig\medical\data\MedItems.rvmat"}},{0.5,{"StalkerFWConfig\medical\data\MedItems.rvmat"}},{0.3,{"StalkerFWConfig\medical\data\MedItems.rvmat"}},{0.0,{"StalkerFWConfig\medical\data\MedItems.rvmat"}}};
				};
			};
		};
	};
};
