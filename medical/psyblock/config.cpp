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

	class SFW_PsyBlock: Edible_Base
	{
		scope = 2;
		model = "\StalkerFWConfig\medical\psyblock\psyblock.p3d";
		displayName = "Psy-block";
		descriptionShort = "A drug that blocks avalanche-like nerve impulses. Consumption induces short-term loss of all emotion. Used exclusively in the Zone to counteract the effects of anomalous psy-fields.";
		varQuantityInit = 10;
		varQuantityMin = 0;
		varQuantityMax = 10;
		varQuantityDestroyOnMin = 1;
		itemSize[] = {1,1};
		weight = 20;
		stackedUnit = "pills";
		quantityBar = 0;
		absorbency = 0.9;
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
