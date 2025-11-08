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
	class SFW_Medical_Vinca: Edible_Base
	{
		scope = 2;
		displayName = "Vinca";
		descriptionShort = "Ukrainian Vikasolum - an artificial equivalent of vitamin K. The main purpose of this drug is to increase blood coagulation speed. In great demand among stalkers who want slow-healing wounds and lacerations inflicted by mutants to close up faster. The effects of the drug are long-lasting.";
		model = "\StalkerFWConfig\medical\vinca\vinca.p3d";
		itemSize[] = {1,1};
		rotationFlags = 16;
		varQuantityInit = 10;
		varQuantityMin = 0;
		varQuantityMax = 10;
		varQuantityDestroyOnMin = 1;
		weight = 100;
		stackedUnit = "pills";
		quantityBar = 0;
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"StalkerFWConfig\medical\data\MedItems_CO.paa"};
		hiddenSelectionsMaterials[] = {"StalkerFWConfig\medical\data\MedItems.rvmat"};
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
