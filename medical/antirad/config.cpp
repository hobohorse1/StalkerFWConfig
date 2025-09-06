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
	class SFW_Antirad: Edible_Base
	{
		scope = 2;
		displayName = "Anti-radiation drugs";
		descriptionShort = "Mexaminum radiation protection drugs are common in the Zone. When used, this drug induces contraction of peripheral blood vessels and oxygen deprivation, which serves to treat and prevent radiation exposure. The drug does not have severe side effects, although isolated cases of mild nausea, dizziness, cramps and stomach pain have been reported.";
		model = "\StalkerFWConfig\medical\antirad\antirad.p3d";
		varQuantityInit = 2;
		varQuantityMin = 0;
		varQuantityMax = 2;
		varQuantityDestroyOnMin = 1;
		stackedUnit = "pills";
		quantityBar = 0;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 50;
					healthLevels[] = {{1.0,{"StalkerFWConfig\medical\data\MedItems.rvmat","StalkerFWConfig\medical\data\MedItemsPaper.rvmat"}},{0.7,{"StalkerFWConfig\medical\data\MedItems.rvmat","StalkerFWConfig\medical\data\MedItemsPaper.rvmat"}},{0.5,{"StalkerFWConfig\medical\data\MedItems.rvmat","StalkerFWConfig\medical\data\MedItemsPaper.rvmat"}},{0.3,{"StalkerFWConfig\medical\data\MedItems.rvmat","StalkerFWConfig\medical\data\MedItemsPaper.rvmat"}},{0.0,{"StalkerFWConfig\medical\data\MedItems.rvmat","StalkerFWConfig\medical\data\MedItemsPaper.rvmat"}}};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class Tablets_open
				{
					soundSet = "Tablets_open_SoundSet";
					id = 201;
				};
				class Tablets_catch
				{
					soundSet = "Tablets_catch_SoundSet";
					id = 202;
				};
				class Tablets_close
				{
					soundSet = "Tablets_close_SoundSet";
					id = 203;
				};
				class pickup
				{
					soundSet = "purificationtablets_pickup_SoundSet";
					id = 797;
				};
				class drop
				{
					soundset = "purificationtablets_drop_SoundSet";
					id = 898;
				};
			};
		};
	};
};
