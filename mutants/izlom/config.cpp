class CfgPatches
{
	class SFW_Mutant_Izlom
	{
		units[] = {""};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Characters"};
	};
};
class CfgVehicles
{
	class ZombieMaleBase;
	class SFW_Mutant_Izlom: ZombieMaleBase
	{
		scope = 2;
		displayName = "Izlom";
		hiddenSelections[] = {"mutant"};
		model = "StalkerFWConfig\mutants\izlom\izlom.p3d";
		hiddenSelectionsTextures[] = {"StalkerFWConfig\mutants\izlom\data\izlom_co.paa"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 600;
					healthLevels[] = {{1,{"StalkerFWConfig\mutants\izlom\data\izlom.rvmat"}},{0.7,{"StalkerFWConfig\mutants\izlom\data\damage.rvmat"}},{0.5,{"StalkerFWConfig\mutants\izlom\data\damage2.rvmat"}},{0.3,{"StalkerFWConfig\mutants\izlom\data\damage2.rvmat"}},{0,{"StalkerFWConfig\mutants\izlom\data\damage3.rvmat"}}};
				};
			};
			class DamageZones
			{
				class Head
				{
					class Health
					{
						hitpoints = 500;
						transferToGlobalCoef = 1;
					};
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage = 1;
							};
						};
					};
					componentNames[] = {"Head"};
					fatalInjuryCoef = 0.1;
					inventorySlots[] = {"Headgear","Mask"};
				};
				class Torso
				{
					class Health
					{
						hitpoints = 1000;
						transferToGlobalCoef = 1;
					};
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage = 1;
							};
						};
					};
					componentNames[] = {"Spine1","Spine3"};
					fatalInjuryCoef = -1;
					inventorySlots[] = {"Vest","Body","Back"};
				};
				class LeftArm
				{
					class Health
					{
						hitpoints = 2600;
						transferToGlobalCoef = 0.33;
					};
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage = 1;
							};
						};
					};
					componentNames[] = {"LeftArm","LeftForeArm"};
					fatalInjuryCoef = -1;
				};
				class RightArm
				{
					class Health
					{
						hitpoints = 2600;
						transferToGlobalCoef = 0.33;
					};
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage = 1;
							};
						};
					};
					componentNames[] = {"RightArm","RightForeArm"};
					fatalInjuryCoef = -1;
				};
				class LeftLeg
				{
					class Health
					{
						hitpoints = 2600;
						transferToGlobalCoef = 0.33;
					};
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage = 1;
							};
						};
					};
					componentNames[] = {"LeftLeg","LeftUpLeg"};
					fatalInjuryCoef = -1;
					inventorySlots[] = {"Legs"};
				};
				class RightLeg
				{
					class Health
					{
						hitpoints = 2600;
						transferToGlobalCoef = 0.33;
					};
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage = 1;
							};
						};
					};
					componentNames[] = {"RightLeg","RightUpLeg"};
					fatalInjuryCoef = -1;
					inventorySlots[] = {"Legs"};
				};
				class LeftFoot
				{
					class Health
					{
						hitpoints = 2600;
						transferToGlobalCoef = 0.1;
					};
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage = 1;
							};
						};
					};
					transferToZonesNames[] = {"LeftLeg"};
					transferToZonesCoefs[] = {0.1};
					componentNames[] = {"LeftFoot"};
					fatalInjuryCoef = -1;
					inventorySlots[] = {"Feet"};
				};
				class RightFoot
				{
					class Health
					{
						hitpoints = 2600;
						transferToGlobalCoef = 0.1;
					};
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage = 12;
							};
						};
					};
					transferToZonesNames[] = {"RightLeg"};
					transferToZonesCoefs[] = {0.1};
					componentNames[] = {"RightFoot"};
					fatalInjuryCoef = -1;
					inventorySlots[] = {"Feet"};
				};
			};
		};
		class AnimEvents
		{
			class Steps
			{
				class Walk1
				{
					soundLookupTable = "walkErc_Boots_Zmb_LookupTable";
					noise = "ZombieStepNoise";
					id = 1;
				};
				class Walk2
				{
					soundLookupTable = "walkErc_Boots_Zmb_LookupTable";
					noise = "ZombieStepNoise";
					id = 2;
				};
				class Walk3
				{
					soundLookupTable = "walkErc_Boots_Zmb_LookupTable";
					noise = "ZombieStepNoise";
					id = 3;
				};
				class Walk4
				{
					soundLookupTable = "walkErc_Boots_Zmb_LookupTable";
					noise = "ZombieStepNoise";
					id = 4;
				};
				class Run1
				{
					soundLookupTable = "runErc_Boots_Zmb_LookupTable";
					noise = "ZombieStepNoise";
					id = 5;
				};
				class Run2
				{
					soundLookupTable = "runErc_Boots_Zmb_LookupTable";
					noise = "ZombieStepNoise";
					id = 6;
				};
				class Run3
				{
					soundLookupTable = "runErc_Boots_Zmb_LookupTable";
					noise = "ZombieStepNoise";
					id = 7;
				};
				class Run4
				{
					soundLookupTable = "runErc_Boots_Zmb_LookupTable";
					noise = "ZombieStepNoise";
					id = 8;
				};
				class Sprint1
				{
					soundLookupTable = "sprintErc_Boots_Zmb_LookupTable";
					noise = "ZombieStepNoise";
					id = 9;
				};
				class Sprint2
				{
					soundLookupTable = "sprintErc_Boots_Zmb_LookupTable";
					noise = "ZombieStepNoise";
					id = 10;
				};
				class Sprint3
				{
					soundLookupTable = "sprintErc_Boots_Zmb_LookupTable";
					noise = "ZombieStepNoise";
					id = 11;
				};
				class Sprint4
				{
					soundLookupTable = "sprintErc_Boots_Zmb_LookupTable";
					noise = "ZombieStepNoise";
					id = 12;
				};
				class Scuff1
				{
					soundLookupTable = "scuffErc_Boots_Zmb_LookupTable";
					noise = "ZombieStepNoise";
					id = 17;
				};
				class Scuff2
				{
					soundLookupTable = "scuffErc_Boots_Zmb_LookupTable";
					noise = "ZombieStepNoise";
					id = 18;
				};
				class Sccuff3
				{
					soundLookupTable = "scuffErc_Boots_Zmb_LookupTable";
					noise = "ZombieStepNoise";
					id = 19;
				};
				class Scuff4
				{
					soundLookupTable = "scuffErc_Boots_Zmb_LookupTable";
					noise = "ZombieStepNoise";
					id = 20;
				};
				class landFeetErc
				{
					soundLookupTable = "landFeetErc_Boots_Zmb_LookupTable";
					noise = "ZombieStepNoise";
					id = 21;
				};
				class landFootErc
				{
					soundLookupTable = "landFootErc_Boots_Zmb_LookupTable";
					noise = "ZombieStepNoise";
					id = 22;
				};
				class Bodyfall
				{
					soundLookupTable = "FS_2_Izlom_Dead_Soundset";
					noise = "ZombieStepNoise";
					id = 23;
				};
				class Bodyfall_Hand
				{
					soundLookupTable = "bodyfall_hand_Zmb_LookupTable";
					noise = "ZombieStepNoise";
					id = 24;
				};
				class Bodyfall_Slide
				{
					soundLookupTable = "bodyfall_slide_Zmb_LookupTable";
					noise = "ZombieStepNoise";
					id = 25;
				};
				class Prone_Walk_L
				{
					soundLookupTable = "walkProne_Zmb_LookupTable";
					noise = "ZombieStepNoise";
					id = 27;
				};
				class Prone_Walk_R
				{
					soundLookupTable = "walkProne_Zmb_LookupTable";
					noise = "ZombieStepNoise";
					id = 28;
				};
				class Prone_Run_L
				{
					soundLookupTable = "runProne_Zmb_LookupTable";
					noise = "ZombieStepNoise";
					id = 29;
				};
				class Prone_Run_R
				{
					soundLookupTable = "runProne_Zmb_LookupTable";
					noise = "ZombieStepNoise";
					id = 30;
				};
			};
			class Sounds
			{
				class Attack_Light1
				{
					soundSet = "Zmb_Attack_Light1_SoundSet";
					id = 1;
				};
				class Attack_Light2
				{
					soundSet = "Zmb_Attack_Light2_SoundSet";
					id = 2;
				};
				class Attack_Heavy1
				{
					soundSet = "Zmb_Attack_Heavy1_SoundSet";
					id = 3;
				};
				class Attack_Heavy2
				{
					soundSet = "Zmb_Attack_Heavy2_SoundSet";
					id = 4;
				};
				class TwoHands
				{
					soundSet = "Zmb_Attack_TwoHands_SoundSet";
					id = 5;
				};
			};
			class SoundVoice
			{
				class LightHit
				{
					soundSet = "SFW_Izlom_Hit_Soundset";
					id = 1;
				};
				class HeavyHit
				{
					soundSet = "SFW_Izlom_Hit_Soundset";
					id = 2;
				};
				class Attack
				{
					soundSet = "SFW_Izlom_Attack_Soundset";
					id = 5;
				};
				class Jump
				{
					soundSet = "ZmbM_Skinny_Old_Jump_Soundset";
					id = 10;
				};
				class Land
				{
					soundSet = "SFW_Izlom_Dead_Soundset";
					id = 11;
				};
				class CallToArmsShort
				{
					soundSet = "SFW_Izlom_Agro_Soundset";
					id = 20;
				};
			};
		};
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0;
			bleedThreshold = 1;
			class Health
			{
				damage = 90;
			};
			class Blood
			{
				damage = 2000;
			};
			class Shock
			{
				damage = 100;
			};
		};
		class AttackActions
		{
			class AttackLong
			{
				attackName = "attackLong";
				ammoType = "MeleeZombieMale";
				stanceName = "erect";
				moveAnimNames[] = {"run","sprint"};
				minDistance = 0;
				distance = 100.75;
				time = 0.001;
				yawAngle = 90;
				pitchAngle = 30;
				attackWidth = 5.2;
				repeatable = 0;
				cooldown = 100.75;
			};
			class AttackRun
			{
				attackName = "attackRun";
				ammoType = "MeleeZombieMale";
				stanceName = "erect";
				moveAnimNames[] = {"run","sprint"};
				minDistance = 0;
				distance = 100.75;
				time = 0.001;
				yawAngle = 90;
				pitchAngle = 30;
				attackWidth = 5.2;
				repeatable = 0;
				cooldown = 100.75;
			};
			class AttackShort
			{
				attackName = "attackShort";
				ammoType = "MeleeZombieMale";
				stanceName = "erect";
				moveAnimNames[] = {"idle","walk"};
				minDistance = 0;
				distance = 100.75;
				time = 0.001;
				yawAngle = 90;
				pitchAngle = 30;
				attackWidth = 5.2;
				repeatable = 0;
				cooldown = 100.75;
			};
			class AttackShortLow
			{
				attackName = "attackShortLow";
				ammoType = "MeleeZombieMale";
				stanceName = "erect";
				moveAnimNames[] = {"idle","walk","run"};
				minDistance = 0;
				distance = 100.75;
				time = 0.001;
				yawAngle = 90;
				pitchAngle = 30;
				attackWidth = 5.2;
				repeatable = 0;
				cooldown = 100.75;
			};
			class CrawlAttackMove
			{
				attackName = "crawlAttackMove";
				ammoType = "MeleeZombieMale";
				stanceName = "crawl";
				moveAnimNames[] = {"walk"};
				minDistance = 0;
				distance = 100.75;
				time = 0.001;
				yawAngle = 90;
				pitchAngle = 30;
				attackWidth = 5.2;
				repeatable = 0;
				cooldown = 100.75;
			};
			class CrawlAttackStill
			{
				attackName = "crawlAttackStill";
				ammoType = "MeleeZombieMale";
				stanceName = "crawl";
				moveAnimNames[] = {"idle"};
				minDistance = 0;
				distance = 100.75;
				time = 0.001;
				yawAngle = 90;
				pitchAngle = 30;
				attackWidth = 5.2;
				repeatable = 0;
				cooldown = 100.75;
			};
		};
	};
};
class CfgNonAIVehicles
{
	class ProxyHands;
	class ProxyAK_47_v58_Proxy: ProxyHands
	{
		model = "\dz\Characters\Proxies\ak_47_v58_proxy.p3d";
	};
	class ProxyBack;
	class ProxyBackpack_DZ: ProxyBack
	{
		model = "\dz\Characters\Proxies\Backpack_DZ.p3d";
	};
	class ProxyEyewear;
	class ProxyEyewear_DZ: ProxyEyewear
	{
		model = "\dz\Characters\Proxies\Eyewear_DZ.p3d";
	};
	class ProxyHeadgear;
	class ProxyHeadgear_DZ: ProxyHeadgear
	{
		model = "\dz\Characters\Proxies\Headgear_DZ.p3d";
	};
	class ProxyMask;
	class ProxyMask_DZ: ProxyMask
	{
		model = "\dz\Characters\Proxies\Mask_DZ.p3d";
	};
	class ProxyVest;
	class ProxyVest_DZ: ProxyVest
	{
		model = "\dz\Characters\Proxies\Vest_DZ.p3d";
	};
	class ProxyMelee;
	class ProxyMelee_DZ: ProxyMelee
	{
		model = "\dz\Characters\Proxies\Melee_DZ.p3d";
	};
};
