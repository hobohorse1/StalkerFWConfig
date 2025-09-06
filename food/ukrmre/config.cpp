class CfgPatches
{
	class SFW_Food_UKMRE
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
	class BakedBeansCan_Opened;

	class SFW_Food_UKMRE : BakedBeansCan_Opened 
	{
		scope = 2;
		displayName = "Ukrainian MRE";
		descriptionShort = " ";
		model = "StalkerFWConfig\food\ukrmre\ukrmre.p3d";
		weight = 940;
		itemSize[] = {3, 3};
		varQuantityInit = 1315;
		varQuantityMin = 0;
		varQuantityMax = 1315;
		
		class DamageSystem {
			class GlobalHealth {
				class Health {
					hitpoints = 100;
					healthLevels[] = {{1, {"DZ\gear\food\data\food_can.rvmat"}}, {0.7, {"DZ\gear\food\data\food_can.rvmat"}}, {0.5, {"DZ\gear\food\data\food_can_damage.rvmat"}}, {0.3, {"DZ\gear\food\data\food_can_damage.rvmat"}}, {0, {"DZ\gear\food\data\food_can_destruct.rvmat"}}};
				};
			};
		};
		
		class Nutrition {
			fullnessIndex = 1.5;
			energy = 223;
			water = 80;
			nutritionalIndex = 1;
			toxicity = 0;
		};
		
		class MeleeModes {
			class Default {
				ammo = "MeleeBlunt";
				range = 1;
			};
			
			class Heavy {
				ammo = "MeleeBlunt_Heavy";
				range = 1;
			};
			
			class Sprint {
				ammo = "MeleeBlunt_Heavy";
				range = 2.8;
			};
		};
		
		class AnimEvents {
			class SoundWeapon {
				class openTunaCan {
					soundSet = "openTunaCan_SoundSet";
					id = 204;
				};
				
				class Eating_TakeFood {
					soundSet = "Eating_TakeFood_Soundset";
					id = 889;
				};
				
				class Eating_BoxOpen {
					soundSet = "Eating_BoxOpen_Soundset";
					id = 893;
				};
				
				class Eating_BoxShake {
					soundSet = "Eating_BoxShake_Soundset";
					id = 894;
				};
				
				class Eating_BoxEnd {
					soundSet = "Eating_BoxEnd_Soundset";
					id = 895;
				};
			};
		};
	};
};
