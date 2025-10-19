class CfgPatches
{
	class SFW_Mutants_Snork
	{
		units[]=
		{
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Characters_Zombies",
			"DZ_Data",
			"DZ_AI",
			"DZ_Weapons_Melee",
			"DZ_data_aiconfigs",
			"DZ_Characters"
		};
	};
};
class CfgAmmo
{
	class MeleeDamage;
	
	class SnorkMelee: MeleeDamage
	{
		hitAnimation=1;
		class DamageApplied
		{
			type="Melee";
			bleedThreshold=1;
			class Health
			{
				damage=5;
				armorDamage=0.5;
			};
			class Blood
			{
				damage=2.5;
			};
			class Shock
			{
				damage=3;
			};
		};
	};
};
class CfgVehicles
{
	class ZombieMaleBase;
	class SFW_Snork_Base: ZombieMaleBase
	{
		scope=0;
		meleeAmmo="MeleeZombieMale";
		displayName="Snork";
		descriptionShort="";
		model="StalkerFWConfig\mutants\snork\snork.p3d";
		DamageSphereAmmos[]=
		{
			"SnorkMelee"
		};
		hiddenSelections[]=
		{
			"Snork_Sel"
		};
		hiddenSelectionsTextures[]=
		{
			"StalkerFWConfig\mutants\snork\data\snork_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"StalkerFWConfig\mutants\snork\data\snork.rvmat"
		};
		class InventoryEquipment
		{
			playerSlots=0;
		};
		class Cargo
		{
			itemsCargoSize[]={2,3};
			allowOwnedCargoManipulation=1;
			openable=1;
		};
		class AttackActions
		{
			class AttackLong
			{							
				minDistance=0.2;
				distance=3.1;
				time=1;
				attackWidth=2.2;
				repeatable=1;
				cooldown=2.28;
			};
			class AttackRun
			{			
				minDistance=0.2;
				distance=1.3;
				time=1;
				attackWidth=1.5;
				repeatable=1;
				cooldown=2.28;
			};
			class AttackShort
			{										
				minDistance=0.2;
				distance=2.5;
				time=1;
				attackWidth=1.5;
				repeatable=1;
				cooldown=2.25;
			};
			class AttackShortLow
			{											
				minDistance=0.2;
				distance=3;
				time=1;
				attackWidth=2;
				repeatable=1;
				cooldown=2.25;
			};
			class CrawlAttackMove
			{
				minDistance=2.2;
				distance=3;
				time=1;
				attackWidth=2;
				repeatable=1;
				cooldown=2.25;
			};
			class CrawlAttackStill
			{				
				minDistance=0.2;
				distance=3;
				time=1;
				attackWidth=2;
				repeatable=1;
				cooldown=2.25;
			};
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=400;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"StalkerFWConfig\mutants\snork\data\snork.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"StalkerFWConfig\mutants\snork\data\snork.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"StalkerFWConfig\mutants\snork\data\snork.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"StalkerFWConfig\mutants\snork\data\snork.rvmat"
							}
						},
						
						{
							0,
							
							{
								"StalkerFWConfig\mutants\snork\data\snork.rvmat"
							}
						}
					};
				};
			};
			class DamageZones
			{
				class Head
				{
					componentNames[]=
					{
						"Component12"
					};
					fatalInjuryCoef=1;
					transferToZonesNames[]={};
					transferToZonesCoefs[]={};
					canBleed=1;
					class Health
					{
						hitpoints=800;
						transferToGlobalCoef=0.5;
					};
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=0.6;
							};
						};
						class Melee
						{
							class Health
							{
								damage=0.12;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage=1;
							};
						};
					};
				};
				class Torso: Head
				{
					componentNames[]=
					{
						"Component03"
					};
					fatalInjuryCoef=0.5;
					class Health
					{
						hitpoints=800;
						transferToGlobalCoef=1;
					};
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=0.6;
							};
						};
						class Melee
						{
							class Health
							{
								damage=0.12;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage=1;
							};
						};
					};
				};
				class Arms: Torso
				{
					componentNames[]=
					{
						"Component08",
						"Component09",
						"Component10",
						"Component11"
					};
					fatalInjuryCoef=0.5;
					class Health
					{
						hitpoints=800;
						transferToGlobalCoef=1;
					};
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=0.6;
							};
						};
						class Melee
						{
							class Health
							{
								damage=0.12;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage=1;
							};
						};
					};
				};
				class Legs: Torso
				{
					componentNames[]=
					{
						"Component01",
						"Component02",
						"Component04",
						"Component05",
						"Component06",
						"Component07"

					};
					fatalInjuryCoef=0.5;
					class Health
					{
						hitpoints=800;
						transferToGlobalCoef=1;
					};
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=0.6;
							};
						};
						class Melee
						{
							class Health
							{
								damage=0.12;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage=1;
							};
						};
					};
				};
			};
		};
		aiAgentTemplate="SFW_MutantSnork";
		class enfanimsys
		{
			meshObject="StalkerFWConfig\mutants\snork\snork.xob";
			graphname="StalkerFWConfig\mutants\snork\anims\animgraph\snork.agr";
			defaultinstance="StalkerFWConfig\mutants\snork\anims\animgraph\snork.asi";
			skeletonName="snork.xob";
			startnode="MasterSnork_SM";
		};
		class AnimEvents
		{
			class Steps
			{
				class Run1
				{
					soundLookupTable="runErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=5;
				};
			};
			class SoundVoice
			{
				class Attack1
				{
					soundSet="LeftAttack_Soundset";
					id=12100;
				};
				class Attack2
				{
					soundSet="RightAttack_Soundset";
					id=12200;
				};
			};
			class Damages
			{
				class SnorkAttack
				{
					damage="SnorkAttackDamage";
					id=12000;
				};
			};
		};
	};
	class SFW_Snork: SFW_Snork_Base
	{
		scope = 2;
	};
};
