class CfgPatches
{
	class BloodSucker_AI_Scripts
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Characters_Zombies",
			"DZ_Data",
			"DZ_AI",
			"DZ_Weapons_Melee",
			"DZ_data_aiconfigs"
		};
	};
};
class PathGraphFilters
{
	class BloodSucker
	{
		class Flags
		{
			include[]=
			{
				"walk",
				"door",
				"inside",
				"jump",
				"climb"
			};
			exclude[]=
			{
				"disabled",
				"swim",
				"crawl",
				"swimsea"
			};
			class Costs
			{
				jump0=5;
				jump1=5;
				jump2=5;
				jump3=5;
				jump4=5;
				water=5;
			};
		};
	};
};
class CfgDamages
{
	class LeftHandLightDamage
	{
		bone="mixamorig_lefthand";
		ammo="WendigoMeleeLight";
		radius=0.2;
		duration=0.2;
	};
	class LeftHandHeavyDamage
	{
		bone="mixamorig_lefthand";
		ammo="WendigoMeleeHeavy";
		radius=0.4;
		duration=0.5;
	};
	class RightHandLightDamage
	{
		bone="mixamorig_righthand";
		ammo="WendigoMeleeLight";
		radius=0.2;
		duration=0.2;
	};
	class RightHandHeavyDamage
	{
		bone="mixamorig_righthand";
		ammo="WendigoMeleeHeavy";
		radius=0.4;
		duration=0.5;
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
	class BloodSucker: Infected
	{
		name="BloodSucker";
		HeadLookBoneName="pin_lookat";
		class BehaviourHLZombie
		{
			class MovementWalk
			{
				maxSpeed=2.5;
				minSpeed=0.5;
				acceleration=2.8;
				maxAngleSpeed=60;
				slowRadius=0;
				stopRadius=0.5;
				slowToTurn="true";
				pathFilter="BloodSucker";
			};
			class MovementRun
			{
				maxSpeed=2.5;
				minSpeed=2.1;
				acceleration=12;
				maxAngleSpeed=80;
				slowRadius=0;
				goalRadius=1.5;
				stopRadius=1.7;
				useStartAnimation="false";
				slowToTurn="true";
				pathFilter="BloodSucker";
			};
			class MovementSprint
			{
				maxSpeed=9;
				minSpeed=3.1;
				acceleration=27;
				maxAngleSpeed=90;
				maxSpeedRange=9;
				slowRadius=3.2;
				goalRadius=1.5;
				goalSpeed=7.1999998;
				stopRadius=1.7;
				waypointRadius=2.6;
				useStartAnimation="false";
				startAnimationMaxSpeed=0;
				slowToTurn="true";
				smoothAcceleration="true";
				pathFilter="BloodSucker";
			};
			class SlotCalm
			{
				class BehaviourZombieCalm
				{
					StandingDurationMin=20;
					StandingDurationMax=30;
					WalkingDurationMin=5;
					WalkingDurationMax=20;
					MinLookTime=30;
					MaxLookTime=50;
					IsAttractMode="false";
					class SoundsDuring
					{
						class Sound1
						{
							moveWithEntity="true";
						};
						probability=0.25;
						RepeatTimeMin=8;
						RepeatTimeMax=15;
						RepeatEnabled="true";
					};
				};
			};
			class SlotAlerted
			{
				class BehaviourZombieAlerted
				{
					maxTimeInDisturbedState=10;
					alertToAttract=0.80000001;
					fightStateEnterDistance=3;
					fightStateExitDistance=7;
					fightStateEnterOrientAngleDiff=200;
					fightStateExitOrientAngleDiff=160;
					disturbedTargetHistoryLength=20;
					disturbedVisionUtilityWeight=1;
					disturbedNoiseUtilityWeight=1;
					disturbedDamageUtilityWeight=1;
					attractedTargetHistoryLength=10;
					attractedVisionUtilityWeight=1.4;
					attractedNoiseUtilityWeight=1;
					attractedDamageUtilityWeight=1;
					attractedSearchDistance=15;
					chaseTargetHistoryLength=10;
					chaseVisionUtilityWeight=1;
					chaseNoiseUtilityWeight=1;
					chaseDamageUtilityWeight=1;
					class SoundsEntering
					{
						class Sound1
						{
						};
						probability=1;
					};
					class SoundsDuring
					{
						class Sound1
						{
						};
						probability=1;
						RepeatTimeMin=3.9000001;
						RepeatTimeMax=4.0999999;
						RepeatEnabled="false";
					};
					noiseMakeAlertPeriod=15;
					class NoiseMakeAlert
					{
						strength=60;
						type="sound";
					};
				};
			};
			class AlertSystem
			{
				visionToAlertMultiplier=32;
				noiseToAlertMultiplier=2.2;
				damageToAlertMultiplier=500;
				noiseShotToAlertMultiplier=3.1;
				class Calm
				{
					DropSpeed=1;
					DropDelay=0;
					MaxAlertValue=20;
				};
				class Alerted
				{
					DropSpeed=3;
					DropDelay=1;
					MaxAlertValue=100;
				};
			};
			staminaDepletionSpeed=4;
			staminaRechargeSpeed=8;
		};
		class TargetSystemDZBase
		{
			visionProximityRange=1.8;
			visionProximityStrengthMult=2.1;
			visionCloseRange=10;
			visionCloseHeight=2.2;
			visionCloseStrengthMult=1.5;
			visionRangeMin=15;
			visionRangeMax=30;
			visionFov=1.5;
			visionPeripheralRangeMin=5.5;
			visionPeripheralRangeMax=25;
			visionPeripheralFov=2.8;
			visionAngularSpeedMin=0.1;
			visionAngularSpeedMax=0.5;
			visionAngularSpeedMaxMult=1;
			visionNightMinMult=1;
			visionNightMaxMult=0.30000001;
			visionRainMinMult=12;
			visionRainMaxMult=22;
			visionFogMinMult=8;
			visionFogMaxMult=12;
		};
		class NoiseSystemParams
		{
			rangeMin=0;
			rangeMax=35;
			rangeShotMin=0;
			rangeShotMax=180;
			radiusMin=20;
			radiusMax=40;
			radiusShotMin=50;
			radiusShotMax=100;
			class NoiseStrengthTeamMultipliers
			{
				BigGame=1;
				Zombies=1;
				Player=1;
			};
		};
	};
};
class GroupBehaviourTemplates
{
	class DZWendigoGroupBeh
	{
		type="Predators";
		alertDistributionSpeed=80;
		catchUpTestDelay=4;
		catchUpStartRadius=90;
		catchUpTargetRadius=5;
		groupRadius=8;
		spawnMinDistanceBetweenAgents=1;
		agentPathLength=100;
		atNeedMinDuration=60;
		atNeedMaxDuration=120;
		singleAgentSafeKeeperDelayMin=100;
		singleAgentSafeKeeperDelayMax=100;
		preyAttractionRange=350;
		innerOuterCircleRatio=0.60000002;
		endAttractionRange=8;
		attractionCooldown=25;
		endAttractionTime=200;
		targetEscapingSpeed=1.8;
		killAddFear=30;
		eatingTime=10;
		huntingCooldown=12;
		maxHuntingTime=60;
		safeKeeperIntervalMin=20;
		safeKeeperIntervalMax=40;
		siegeAttackCountdownMin=2;
		siegeAttackCountdownMax=15;
		huntAttackCountdownMin=2;
		huntAttackCountdownMax=12;
		changeTargetCooldown=12;
		changeTargetAlertRatio=0.5;
		changeTargetEffectRadius=5.2;
		subgroupSpacingMax=460;
		class LifeCycleDayTime
		{
			class Activity1
			{
				endTimeMin=10.5;
				endTimeMax=12.5;
				zoneType="Rest";
			};
			class Activity2
			{
				endTimeMin=16;
				endTimeMax=22;
				zoneType="HuntingGround";
				stayInZone="false";
			};
			class Activity3
			{
				endTimeMin=18.5;
				endTimeMax=19.5;
				zoneType="Rest";
			};
			class Activity4
			{
				endTimeMin=22.5;
				endTimeMax=23.5;
				zoneType="HuntingGround";
				stayInZone="false";
			};
		};
	};
};
