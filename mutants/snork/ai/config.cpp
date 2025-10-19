class CfgPatches
{
	class SFW_Mutant_Snork_AI
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
class PathGraphFilters
{
	class SFW_MutantSnork
	{
		class Flags
		{
			include[]=
			{
				"walk",
				"door",
				"inside",
				"Jump",
				"climb"
			};
			exclude[]=
			{
				"disabled",
				"swim",
				"swimsea",				
				"crawl",
				"crouch"				
			};
		};
	};
};
class CfgDamages
{
	class SnorkAttackDamage
	{
		bone="righthandindex1";
		ammo="SnorkhMelee";
		radius=0.3;
		duration=0.3;
	};
};
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
class CfgAIBehaviours
{
	class SFW_MutantSnork: Infected
	{
		HeadLookBoneName="lookat";
		//teamName="SFW_MutantSnork";
		class BehaviourHLZombie
		{
			class MovementWalk
			{
				maxSpeed=1.0;
				minSpeed=0;
				acceleration=5;
				maxAngleSpeed=180;
				slowRadius=0;
				stopRadius=0.5;
				pathFilter="ZombieCalm";
			};
			class MovementRun
			{
				maxSpeed=2;
				minSpeed=1.1;
				acceleration=15;
				maxAngleSpeed=120;
				slowRadius=0;
				goalRadius=1.5;
				stopRadius=1.7;
				useStartAnimation="false";
				pathFilter="ZombieAlerted";
			};
			class MovementSprint
			{
				maxSpeed=2;
				minSpeed=1.1;
				acceleration=27;
				maxAngleSpeed=180;
				maxSpeedRange=9;
				slowRadius=3.2;
				goalRadius=1.5;
				goalSpeed=7.1999998;
				stopRadius=1.7;
				waypointRadius=1.5;
				useStartAnimation="false";
				startAnimationMaxSpeed=0;
				slowToTurn="false";
				smoothAcceleration="true";
				pathFilter="ZombieAlerted";
			};
			class SlotCalm
			{
				class BehaviourZombieCalm
				{
					StandingDurationMin=4;
					StandingDurationMax=8;
					WalkingDurationMin=4;
					WalkingDurationMax=12;
					MinLookTime=1;
					MaxLookTime=2;
					IsAttractMode="false";
					class SoundsDuring
					{
						class Sound1
						{
							sounds[]=
							{
								""
							};
						};
						probability=0.80000001;
						RepeatTimeMin=6;
						RepeatTimeMax=22;
						RepeatEnabled="true";
					};
				};
			};
			class SlotAlerted
			{
				class BehaviourZombieAlerted
				{
					maxTimeInDisturbedState=5;
					alertToAttract=0.80000001;
					fightStateEnterDistance=2;
					fightStateExitDistance=3;
					fightStateEnterOrientAngleDiff=160;
					fightStateExitOrientAngleDiff=160;
					disturbedTargetHistoryLength=10;
					disturbedVisionUtilityWeight=1;
					disturbedNoiseUtilityWeight=1;
					disturbedDamageUtilityWeight=1;
					attractedTargetHistoryLength=10;
					attractedVisionUtilityWeight=1;
					attractedNoiseUtilityWeight=1;
					attractedDamageUtilityWeight=1;
					chaseTargetHistoryLength=10;
					chaseVisionUtilityWeight=1;
					chaseNoiseUtilityWeight=1;
					chaseDamageUtilityWeight=1;
					class SoundsEntering
					{
						class Sound1
						{
							sounds[]=
							{
								""
							};
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
						RepeatEnabled="true";
					};
					noiseMakeAlertPeriod=3;
					class NoiseMakeAlert
					{
						strength=40;
						type="sound";
					};
				};
			};
			class AlertSystem
			{
				visionToAlertMultiplier=20;
				noiseToAlertMultiplier=1;
				damageToAlertMultiplier=10000;
				noiseShotToAlertMultiplier=1.7;
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
			staminaDepletionSpeed=5;
			staminaRechargeSpeed=10;
		};
		class TargetSystemDZBase
		{
			visionProximityRange=2.5;
			visionProximityStrengthMult=2;
			visionCloseRange=10;
			visionCloseHeight=1.8;
			visionCloseStrengthMult=1.5;
			visionRangeMin=20;
			visionRangeMax=40;
			visionFov=1;
			visionPeripheralRangeMin=2.5;
			visionPeripheralRangeMax=20;
			visionPeripheralFov=2.3;
			visionAngularSpeedMin=0.1;
			visionAngularSpeedMax=0.5;
			visionAngularSpeedMaxMult=1;
			visionNightMinMult=1;
			visionNightMaxMult=0.30000001;
			visionRainMinMult=1;
			visionRainMaxMult=1;
			visionFogMinMult=1;
			visionFogMaxMult=1;
		};
		class NoiseSystemParams
		{
			rangeMin=0;
			rangeMax=35;
			rangeShotMin=0;
			rangeShotMax=200;
			radiusMin=5;
			radiusMax=20;
			radiusShotMin=25;
			radiusShotMax=50;
			class NoiseStrengthTeamMultipliers
			{
				BigGame=1;
				Zombies=1;
				Player=1;
			};
		};
	};
};
