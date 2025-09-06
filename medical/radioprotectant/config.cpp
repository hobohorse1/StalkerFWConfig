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
	class SFW_RadioProtectant: Edible_Base
	{
		scope = 2;
		displayName = "B-190 Radioprotectant";
		descriptionShort = "B-190 Indraline radioprotectant, included in medkits, issued to nuclear power plant personnel. Used in the Zone instead of the excessively toxic PC1 cystamine hydrochloride, repeated use of which often caused death. Reduces the effects of gamma radiation on live tissue. Best consumed before exposure, as effects are not instant. The effects of the drug are long-lasting.";
		model = "\StalkerFWConfig\medical\radioprotectant\radioprotectant.p3d";
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
