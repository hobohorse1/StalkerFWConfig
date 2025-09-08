
class CfgPatches
{
	class DZ_Gear_Food
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data"};
	};
};
class CfgVehicles
{
	class Inventory_Base;
	class SFW_Barter_ChimeraPaw: Inventory_Base
	{
		scope = 2;
		displayName = "Chimera Paw";
		descriptionShort = "";
		model = "StalkerFWConfig\mutants\chimera\parts\chimerapaw.p3d";
		weight = 3300;
		itemSize[] = {3,8};
		rotationFlags = 63;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1,{"DZ\gear\food\data\rice.rvmat"}},{0.7,{}},{0.5,{"DZ\gear\food\data\rice_damage.rvmat"}},{0.3,{}},{0,{"DZ\gear\food\data\rice_destruct.rvmat"}}};
				};
			};
		};
	};
	class SFW_Barter_ChimeraHead: Inventory_Base
	{
		scope = 2;
		displayName = "Chimera Head";
		descriptionShort = "";
		model = "StalkerFWConfig\mutants\chimera\parts\chimerahead.p3d";
		weight = 4700;
		itemSize[] = {5,5};
		rotationFlags = 63;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1,{"DZ\gear\food\data\rice.rvmat"}},{0.7,{}},{0.5,{"DZ\gear\food\data\rice_damage.rvmat"}},{0.3,{}},{0,{"DZ\gear\food\data\rice_destruct.rvmat"}}};
				};
			};
		};
	};
};
