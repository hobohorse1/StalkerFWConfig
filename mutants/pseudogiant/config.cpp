class CfgPatches
{
	class SFW_Pseudogiant
	{
		units[] = {""};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Characters_Zombies","DZ_Data","DZ_AI","DZ_Weapons_Melee","DZ_data_aiconfigs"};
		ammo[] = {"MeleePseudoGiant","PseudoGiant_SpecialAttack_Ammo"};
	};
};

class PathGraphFilters
{
	class PseudoGiant
	{
		class Flags
		{
			include[] = {"walk","door","inside"};
			exclude[] = {"disabled","swim","swimsea","jump","climb","crawl","crouch"};
		};
	};
};
class CfgAIBehaviours
{
	class Infected
	{
		class BehaviourHLZombie
		{
			class MovementWalk;
			class MovementRun;
			class MovementSprint;
			class SlotCalm
			{
				class BehaviourZombieCalm;
			};
			class SlotAlerted
			{
				class BehaviourZombieAlerted;
			};
			class AlertSystem
			{
				class Calm;
				class Alerted;
			};
		};
		class TargetSystemDZBase;
		class NoiseSystemParams;
	};
	class PseudoGiant: Infected
	{
		name = "PseudoGiant";
		HeadLookBoneName = "pin_lookat";
		teamName = "Zombies";
		class BehaviourHLZombie: BehaviourHLZombie
		{
			class MovementWalk: MovementRun
			{
				pathFilter = "PseudoGiant";
			};
			class MovementRun: MovementRun
			{
				pathFilter = "PseudoGiant";
			};
			class MovementSprint: MovementSprint
			{
				pathFilter = "PseudoGiant";
			};
			class SlotCalm: SlotCalm
			{
				class BehaviourZombieCalm: BehaviourZombieCalm
				{
					StandingDurationMin = 10;
					StandingDurationMax = 12;
					WalkingDurationMin = 10;
					WalkingDurationMax = 15;
				};
			};
			class AlertSystem: AlertSystem
			{
				visionToAlertMultiplier = 30;
				noiseToAlertMultiplier = 30;
				damageToAlertMultiplier = 10000;
				noiseShotToAlertMultiplier = 2.0;
			};
			staminaDepletionSpeed = 0;
		};
		class TargetSystemDZBase: TargetSystemDZBase
		{
			visionRangeMin = 20;
			visionRangeMax = 40;
			visionFov = 6.28;
			visionPeripheralRangeMin = 2.5;
			visionPeripheralRangeMax = 20;
			visionPeripheralFov = 6.28;
			visionNightMinMult = 1;
			visionNightMaxMult = 1;
			visionRainMinMult = 1;
			visionRainMaxMult = 1;
			visionFogMinMult = 1;
			visionFogMaxMult = 1;
		};
		class NoiseSystemParams: NoiseSystemParams
		{
			rangeMin = 0;
			rangeMax = 35;
			rangeShotMin = 0;
			rangeShotMax = 200;
			radiusMin = 5;
			radiusMax = 20;
			radiusShotMin = 25;
			radiusShotMax = 50;
		};
	};
};
class CfgAmmo
{
	class MeleeZombie;
	class DefaultAmmo;
	class MeleePseudoGiant: MeleeZombie
	{
		hitAnimation = 1;
		class DamageApplied
		{
			type = "Infected";
			bleedThreshold = 1.0;
			class Health
			{
				damage = 40;
				armorDamage = 0.0;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 30;
			};
		};
	};
	class PseudoGiant_SpecialAttack_Ammo: DefaultAmmo
	{
		indirectHit = 1;
		indirectHitRange = 26;
		explosive = 1;
		typicalSpeed = 3;
		initSpeed = 3;
		simulation = "shotShell";
		simulationStep = 0.05;
		soundSetExplosion[] = {};
		class DamageApplied
		{
			type = "FragGrenade";
			bleedThreshold = 0.4;
			class Health
			{
				damage = 7;
			};
			class Blood
			{
				damage = 0;
			};
			class Shock
			{
				damage = 6;
			};
		};
		class NoiseExplosion
		{
			strength = 0;
			type = "shot";
		};
	};
};
class CfgVehicles
{
	class ZombieMaleBase;
	class Inventory_Base;
	class SFW_Mutant_Pseudogiant: ZombieMaleBase
	{
		scope = 2;
		displayName = "Pseudogiant";
		descriptionShort = "";
		model = "StalkerFWConfig\mutants\pseudogiant\PseudoGiant.p3d";
		attachments = 0;
		class InventoryEquipment
		{
			playerSlots = 0;
		};
		class Cargo
		{
			itemsCargoSize[] = {0,0};
			allowOwnedCargoManipulation = 1;
			openable = 0;
		};
		class AttackActions
		{
			class AttackLong
			{
				attackName = "attackLong";
				ammoType = "MeleePseudoGiant";
				stanceName = "erect";
				moveAnimNames[] = {"run","sprint"};
				minDistance = 0.0;
				distance = 1.75;
				time = 2.5;
				yawAngle = 0;
				pitchAngle = 0;
				attackWidth = 2.2;
				repeatable = 0;
				cooldown = 2.75;
			};
			class AttackRun
			{
				attackName = "attackRun";
				ammoType = "MeleePseudoGiant";
				stanceName = "erect";
				moveAnimNames[] = {"run","sprint"};
				minDistance = 0.0;
				distance = 1.3;
				time = 1;
				yawAngle = 0;
				pitchAngle = 0;
				attackWidth = 1.5;
				repeatable = 1;
				cooldown = 1.25;
			};
			class AttackShort
			{
				attackName = "attackShort";
				ammoType = "MeleePseudoGiant";
				stanceName = "erect";
				moveAnimNames[] = {"idle","walk"};
				minDistance = 0.0;
				distance = 1.3;
				time = 1;
				yawAngle = 0;
				pitchAngle = 0;
				attackWidth = 1.5;
				repeatable = 1;
				cooldown = 1.25;
			};
			class AttackShortLow
			{
				attackName = "attackShortLow";
				ammoType = "MeleePseudoGiant";
				stanceName = "erect";
				moveAnimNames[] = {"idle","walk","run"};
				minDistance = 0;
				distance = 2;
				time = 1;
				yawAngle = 0;
				pitchAngle = -45;
				attackWidth = 2;
				repeatable = 1;
				cooldown = 1.25;
			};
			class CrawlAttackMove
			{
				attackName = "crawlAttackMove";
				ammoType = "MeleePseudoGiant";
				stanceName = "crawl";
				moveAnimNames[] = {"walk"};
				distance = 2;
				time = 1.5;
				yawAngle = 0;
				pitchAngle = 45;
				attackWidth = 2;
				cooldown = 1.25;
			};
			class CrawlAttackStill
			{
				attackName = "crawlAttackStill";
				ammoType = "MeleePseudoGiant";
				stanceName = "crawl";
				moveAnimNames[] = {"idle"};
				distance = 2;
				time = 1.1;
				yawAngle = 0;
				pitchAngle = 45;
				attackWidth = 2;
				cooldown = 1.25;
			};
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 3500;
					healthLevels[] = {{1.0,{"StalkerFWConfig\mutants\pseudogiant\data\pseudogiant.rvmat"}},{0.7,{"StalkerFWConfig\mutants\pseudogiant\data\pseudogiant.rvmat"}},{0.5,{"StalkerFWConfig\mutants\pseudogiant\data\pseudogiant.rvmat"}},{0.3,{"StalkerFWConfig\mutants\pseudogiant\data\pseudogiant.rvmat"}},{0.0,{"StalkerFWConfig\mutants\pseudogiant\data\pseudogiant.rvmat"}}};
				};
			};
			class DamageZones
			{
				class Zone_Head
				{
					componentNames[] = {"Zone_Head"};
					fatalInjuryCoef = 0.1;
					transferToZonesNames[] = {};
					transferToZonesCoefs[] = {};
					canBleed = 0;
					class Health
					{
						hitpoints = 3500;
						transferToGlobalCoef = 1;
					};
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage = 0.31;
							};
						};
						class Melee
						{
							class Health
							{
								damage = 0.0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage = 3;
							};
						};
					};
				};
				class Zone_Torso: Zone_Head
				{
					componentNames[] = {"Zone_Torso"};
					fatalInjuryCoef = 0.01;
					class Health
					{
						hitpoints = 3500;
						transferToGlobalCoef = 1;
					};
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage = 0.31;
							};
						};
						class Melee
						{
							class Health
							{
								damage = 0.0;
							};
						};
					};
				};
				class Zone_Upperlimbs: Zone_Head
				{
					componentNames[] = {"Zone_Upperlimbs"};
					fatalInjuryCoef = 0.1;
					class Health
					{
						hitpoints = 3500;
						transferToGlobalCoef = 1;
					};
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage = 0.81;
							};
						};
						class Melee
						{
							class Health
							{
								damage = 0.0;
							};
						};
					};
				};
				class Zone_Lowerlimbs: Zone_Head
				{
					componentNames[] = {"Zone_Lowerlimbs"};
					fatalInjuryCoef = 0.01;
					class Health
					{
						hitpoints = 3500;
						transferToGlobalCoef = 0.0;
					};
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage = 0.31;
							};
						};
						class Melee
						{
							class Health
							{
								damage = 0.0;
							};
						};
					};
				};
			};
		};
		aiAgentTemplate = "PseudoGiant";
		class enfanimsys
		{
			meshObject = "StalkerFWConfig\mutants\pseudogiant\PseudoGiantPreview.xob";
			graphname = "StalkerFWConfig\mutants\pseudogiant\anims\animgraph\Pseudogiant.agr";
			defaultinstance = "StalkerFWConfig\mutants\pseudogiant\anims\animgraph\Pseudogiant.asi";
			startnode = "ControlSTM";
			skeletonName = "PseudoGiantSkeleton.xob";
		};
		class AnimEvents
		{
			class Steps
			{
				class Step
				{
					soundLookupTable = "SFW_Pseudogiant_Step_LookupTable";
					noise = "ZombieStepNoise";
					id = 1;
				};
			};
			class Sounds
			{
				class Attack_Slash
				{
					soundSet = "SFW_Pseudogiant_Attack_Slash_Soundset";
					id = 1;
				};
				class Attack_Bite
				{
					soundSet = "SFW_Pseudogiant_Attack_Bite_Soundset";
					id = 2;
				};
				class Attack_Special_Hit
				{
					soundSet = "SFW_Pseudogiant_Attack_Special_Hit_Soundset";
					id = 4;
				};
			};
			class SoundVoice
			{
				class Attack_Special
				{
					soundSet = "SFW_Pseudogiant_Attack_Special_Soundset";
					id = 3;
				};
				class Death
				{
					soundSet = "SFW_Pseudogiant_Death_Soundset";
					id = 8;
				};
				class Aggressive
				{
					soundSet = "SFW_Pseudogiant_Aggressive_Soundset";
					id = 9;
				};
				class Roar
				{
					soundSet = "SFW_Pseudogiant_Roar_Soundset";
					id = 20;
				};
			};
		};
	};
};

