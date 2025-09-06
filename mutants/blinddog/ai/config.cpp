// Cleaned & Corrected DayZ AI behaviour config for a custom predator (Blind Dog)
// Boolean values fixed to use 1/0 instead of quoted strings.

class CfgPatches
{
	class SFW_AI_BlindDog
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_AI", "DZ_data_aiconfigs"};
	};
};

class CfgAIBehaviours
{
	//inheritance
	class Predators_Wolf
	{
		HeadLookBoneName="pin_lookat";
		teamName="Predator";
		defaultGroupTemplateName="DZWolfGroupBeh";
		class PathAgent
		{
			radius=0.30000001;
			height=1;
			lengthRadius=0.69999999;
		};
		class BehaviourHLPredator
		{
			instantAlertRangeMin=0;
			instantAlertRangeMax=0;
			instantAlertStrength=0;
			proximityAttackRange=2.5;
			attackCooldown=3;
			class SlotCalmGrazing
			{
				class BehaviourCalm
				{
					travelingMode="true";
					grazeOnSpotWeight=20;
					grazeWalkingWeight=20;
					restWeight=0;
					travelWeight=0;
					grazeOnSpotDurationMin=5;
					grazeOnSpotDurationMax=10;
					grazeWalkingDurationMin=500;
					grazeWalkingDurationMax=500;
					restingDurationMin=5;
					restingDurationMax=10;
					travelingDurationMin=15;
					travelingDurationMax=30;
					grazeWalkingSpeed=0.2;
					travelingWalkingSpeed=1.36;
					safetyDurationMin=10;
					safetyDurationMax=10;
					safetyLookAngleMin=0.30000001;
					safetyLookAngleMax=0.69999999;
					safetyLookAngleChangeInterval=3;
					class GrazeMovement
					{
						maxSpeed=0.25;
						minSpeed=0.25;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=2;
						stopRadius=1;
						pathFilter="WolfOnHunt";
					};
					class TravelingMovement
					{
						maxSpeed=2.8499999;
						minSpeed=0.77999997;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=2;
						stopRadius=1;
						pathFilter="WolfOnHunt";
						slowToTurn="true";
						smoothAcceleration="true";
					};
					class CatchUpMovement
					{
						maxSpeed=6.3800001;
						minSpeed=0.77999997;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=2;
						stopRadius=1;
						pathFilter="WolfOnHunt";
						slowToTurn="true";
						smoothAcceleration="true";
					};
				};
			};
			class SlotSiege
			{
				class BehaviourSiege
				{
					class SoundsEntering
					{
						class Sound1
						{
							sounds[]=
							{
								"WolfPantShort_SoundSet"
							};
						};
						probability=1;
					};
					class SoundsDuring
					{
						class Sound1
						{
							sounds[]=
							{
								"WolfPant_SoundSet"
							};
						};
						class Sound2
						{
							sounds[]=
							{
								"WolfGrowl_SoundSet"
							};
						};
						probability=0.40000001;
						RepeatTimeMin=5;
						RepeatTimeMax=15;
						RepeatEnabled="true";
					};
					innerRadius=7;
					innerRadiusMin=4.5;
					innerRadiusMax=10;
					outerRadius=16;
					directionChangeTimeMin=7;
					directionChangeTimeMax=25;
					PlayerFOV=1.4;
					preferPlayerFOVCooldown=1;
					attackDistance=3.5;
					class InnerCircleMovement
					{
						maxSpeed=6.3000002;
						optimalSpeed=6.3000002;
						optimalSpeedRange=1;
						minSpeed=1;
						acceleration=7;
						maxAngleSpeed=90;
						slowRadius=0;
						stopRadius=2;
						maxSpeedRange=2;
						pathFilter="WolfOnHunt";
						startAnimationMaxSpeed=0.54000002;
					};
					class Movement
					{
						maxSpeed=9;
						optimalSpeed=6.3000002;
						optimalSpeedRange=15;
						minSpeed=1;
						acceleration=10;
						maxAngleSpeed=180;
						slowRadius=0;
						stopRadius=2;
						maxSpeedRange=20;
						pathFilter="WolfOnOuterCircle";
						startAnimationMaxSpeed=0.54000002;
					};
					class AttackMovement
					{
						maxSpeed=12.175;
						optimalSpeed=12;
						optimalSpeedRange=6;
						minSpeed=0.80000001;
						acceleration=10;
						maxAngleSpeed=180;
						slowRadius=2;
						stopRadius=3;
						maxSpeedRange=30;
						pathFilter="WolfOnHunt";
					};
				};
			};
			class SlotEating
			{
				class BehaviourCalm
				{
					grazeOnSpotWeight=20;
					grazeWalkingWeight=20;
					restWeight=0;
					travelWeight=20;
					eatingWeight=20;
					grazeOnSpotDurationMin=5;
					grazeOnSpotDurationMax=10;
					grazeWalkingDurationMin=10;
					grazeWalkingDurationMax=15;
					restingDurationMin=15;
					restingDurationMax=25;
					travelingDurationMin=15;
					travelingDurationMax=30;
					eatingDurationMin=15;
					eatingDurationMax=25;
					safetyDurationMin=10;
					safetyDurationMax=20;
					safetyLookAngleMin=0.1;
					safetyLookAngleMax=1.5;
					safetyLookAngleChangeInterval=7;
					class GrazeMovement
					{
						maxSpeed=0.25;
						minSpeed=0.25;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=2;
						stopRadius=1;
						pathFilter="WolfOnHunt";
					};
					class TravelingMovement
					{
						maxSpeed=2.8499999;
						minSpeed=0.77999997;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=2;
						stopRadius=1;
						pathFilter="WolfOnHunt";
						slowToTurn="true";
						smoothAcceleration="true";
					};
					class CatchUpMovement
					{
						maxSpeed=6.3800001;
						minSpeed=0.77999997;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=2;
						stopRadius=1;
						pathFilter="WolfOnHunt";
						slowToTurn="true";
						smoothAcceleration="true";
					};
				};
			};
			class SlotHunting
			{
				class BehaviourHunt
				{
					attackRange=3.5;
					followingRadius=15;
					followingRadiusReqroupCooldownMin=5;
					followingRadiusReqroupCooldownMax=15;
					followingRadiusRegroupMinSpeed=1.5;
					predictFollowingMinDistance=10;
					minDistanceToTargetRatio=0.30000001;
					class SoundsEntering
					{
						class Sound1
						{
							sounds[]=
							{
								"WolfBark_SoundSet"
							};
						};
						probability=0.30000001;
					};
					class SoundsDuring
					{
						class Sound1
						{
							sounds[]=
							{
								"WolfBark2_SoundSet"
							};
						};
						class Sound2
						{
							sounds[]=
							{
								"WolfBark3_SoundSet"
							};
						};
						class Sound3
						{
							sounds[]=
							{
								"WolfBark_SoundSet"
							};
						};
						probability=1;
						RepeatTimeMin=10;
						RepeatTimeMax=30;
						RepeatEnabled="true";
					};
					class Movement
					{
						maxSpeed=10;
						optimalSpeed=9.5;
						minSpeed=1;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=2;
						stopRadius=1;
						maxSpeedRange=15;
						optimalSpeedRange=5;
						pathFilter="WolfOnHunt";
					};
					class MovementAttack
					{
						maxSpeed=12.175;
						optimalSpeed=12.175;
						minSpeed=6;
						acceleration=20;
						maxAngleSpeed=360;
						slowRadius=0;
						stopRadius=0;
						maxSpeedRange=3;
						optimalSpeedRange=1;
						pathFilter="WolfOnHunt";
					};
				};
			};
			class SlotCalmResting
			{
				class BehaviourCalm
				{
					travelingMode="true";
					grazeOnSpotWeight=50;
					grazeWalkingWeight=50;
					restWeight=50;
					travelWeight=0;
					grazeOnSpotDurationMin=5;
					grazeOnSpotDurationMax=10;
					grazeWalkingDurationMin=15;
					grazeWalkingDurationMax=25;
					restingDurationMin=25;
					restingDurationMax=35;
					travelingDurationMin=15;
					travelingDurationMax=30;
					safetyDurationMin=10;
					safetyDurationMax=10;
					safetyLookAngleMin=0.1;
					safetyLookAngleMax=1.5;
					safetyLookAngleChangeInterval=7;
					class GrazeMovement
					{
						maxSpeed=0.25;
						minSpeed=0.25;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=2;
						stopRadius=1;
						pathFilter="WolfOnHunt";
					};
					class TravelingMovement
					{
						maxSpeed=2.8499999;
						minSpeed=0.77999997;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=2;
						stopRadius=1;
						pathFilter="WolfOnHunt";
						slowToTurn="true";
						smoothAcceleration="true";
					};
					class CatchUpMovement
					{
						maxSpeed=6.3800001;
						minSpeed=0.77999997;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=2;
						stopRadius=1;
						pathFilter="WolfOnHunt";
						slowToTurn="true";
						smoothAcceleration="true";
					};
				};
			};
			class SlotCalmTravelling
			{
				class BehaviourCalm
				{
					travelingMode="true";
					grazeOnSpotWeight=20;
					grazeWalkingWeight=20;
					restWeight=0;
					travelWeight=50;
					grazeOnSpotDurationMin=10;
					grazeOnSpotDurationMax=20;
					grazeWalkingDurationMin=25;
					grazeWalkingDurationMax=35;
					restingDurationMin=5;
					restingDurationMax=10;
					travelingDurationMin=10;
					travelingDurationMax=50;
					safetyDurationMin=10;
					safetyDurationMax=10;
					safetyLookAngleMin=0.30000001;
					safetyLookAngleMax=0.69999999;
					safetyLookAngleChangeInterval=3;
					class TravelingMovement
					{
						maxSpeed=2.8499999;
						minSpeed=0.77999997;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=4;
						stopRadius=2;
						slowToTurn="true";
						smoothAcceleration="true";
					};
					class CatchUpMovement
					{
						maxSpeed=6.3800001;
						minSpeed=0.77999997;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=2;
						stopRadius=1;
						pathFilter="WolfOnHunt";
						slowToTurn="true";
						smoothAcceleration="true";
					};
					class GrazeMovement
					{
						maxSpeed=0.25;
						minSpeed=0.25;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=2;
						stopRadius=1;
						pathFilter="WolfOnHunt";
					};
				};
			};
			class SlotAttracted
			{
				class BehaviourCalm
				{
					class SoundsEntering
					{
						class Sound1
						{
							sounds[]=
							{
								"WolfHowls1_SoundSet",
								"WolfHowls1_tailDistant_SoundSet"
							};
						};
						class Sound2
						{
							sounds[]=
							{
								"WolfHowls2_SoundSet",
								"WolfHowls2_tailDistant_SoundSet"
							};
						};
						class Sound3
						{
							sounds[]=
							{
								"WolfHowls3_SoundSet",
								"WolfHowls3_tailDistant_SoundSet"
							};
						};
						class Sound4
						{
							sounds[]=
							{
								"WolfHowls4_SoundSet",
								"WolfHowls4_tailDistant_SoundSet"
							};
						};
						class Sound5
						{
							sounds[]=
							{
								"WolfHowls5_SoundSet",
								"WolfHowls5_tailDistant_SoundSet"
							};
						};
						class Sound6
						{
							sounds[]=
							{
								"WolfHowls6_SoundSet",
								"WolfHowls6_tailDistant_SoundSet"
							};
						};
						class Sound7
						{
							sounds[]=
							{
								"WolfHowls7_SoundSet",
								"WolfHowls7_tailDistant_SoundSet"
							};
						};
						class Sound8
						{
							sounds[]=
							{
								"WolfHowls8_SoundSet",
								"WolfHowls8_tailDistant_SoundSet"
							};
						};
						probability=0.69999999;
					};
					class SoundsDuring
					{
						class Sound1
						{
							sounds[]=
							{
								"WolfHowl1_SoundSet",
								"WolfHowl1_tailDistant_SoundSet"
							};
						};
						class Sound2
						{
							sounds[]=
							{
								"WolfHowl2_SoundSet",
								"WolfHowl2_tailDistant_SoundSet"
							};
						};
						class Sound3
						{
							sounds[]=
							{
								"WolfHowl3_SoundSet",
								"WolfHowl3_tailDistant_SoundSet"
							};
						};
						class Sound4
						{
							sounds[]=
							{
								"WolfHowl4_SoundSet",
								"WolfHowl4_tailDistant_SoundSet"
							};
						};
						class Sound5
						{
							sounds[]=
							{
								"WolfHowl5_SoundSet",
								"WolfHowl5_tailDistant_SoundSet"
							};
						};
						class Sound6
						{
							sounds[]=
							{
								"WolfHowl6_SoundSet",
								"WolfHowl6_tailDistant_SoundSet"
							};
						};
						class Sound7
						{
							sounds[]=
							{
								"WolfHowl7_SoundSet",
								"WolfHowl7_tailDistant_SoundSet"
							};
						};
						class Sound8
						{
							sounds[]=
							{
								"WolfHowl8_SoundSet",
								"WolfHowl8_tailDistant_SoundSet"
							};
						};
						probability=0.40000001;
						RepeatTimeMin=25;
						RepeatTimeMax=35;
						RepeatEnabled="true";
					};
					grazeOnSpotWeight=20;
					grazeWalkingWeight=20;
					restWeight=0;
					travelWeight=50;
					grazeOnSpotDurationMin=5;
					grazeOnSpotDurationMax=10;
					grazeWalkingDurationMin=5;
					grazeWalkingDurationMax=10;
					restingDurationMin=5;
					restingDurationMax=10;
					travelingDurationMin=50;
					travelingDurationMax=100;
					grazeWalkingSpeed=0.54400003;
					travelingWalkingSpeed=0.78200001;
					safetyDurationMin=10;
					safetyDurationMax=10;
					safetyLookAngleMin=0.30000001;
					safetyLookAngleMax=0.69999999;
					safetyLookAngleChangeInterval=3;
					class TravelingMovement
					{
						maxSpeed=2.8499999;
						minSpeed=0.77999997;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=5;
						stopRadius=3;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="WolfOnHunt";
					};
					class CatchUpMovement
					{
						maxSpeed=6.3800001;
						minSpeed=0.77999997;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=0;
						stopRadius=0.5;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="WolfOnHunt";
					};
					class GrazeMovement
					{
						maxSpeed=0.25;
						minSpeed=0.25;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=0;
						stopRadius=0.5;
					};
				};
			};
			class SlotFireplace
			{
				class BehaviourCalm
				{
					grazeOnSpotWeight=20;
					grazeWalkingWeight=20;
					restWeight=20;
					travelWeight=0;
					grazeOnSpotDurationMin=50;
					grazeOnSpotDurationMax=100;
					grazeWalkingDurationMin=50;
					grazeWalkingDurationMax=100;
					restingDurationMin=50;
					restingDurationMax=150;
					travelingDurationMin=0;
					travelingDurationMax=0;
					grazeWalkingSpeed=0.2;
					travelingWalkingSpeed=1.36;
					safetyIntervalMin=30;
					safetyIntervalMax=40;
					safetyDurationMin=5;
					safetyDurationMax=10;
					safetyLookAngleMin=0.30000001;
					safetyLookAngleMax=0.69999999;
					safetyLookAngleChangeInterval=3;
					class GrazeMovement
					{
						maxSpeed=0.25;
						minSpeed=0.25;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=0;
						stopRadius=0.5;
					};
					class TravelingMovement
					{
						maxSpeed=2.8499999;
						minSpeed=0.77999997;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=0;
						stopRadius=0.5;
						slowToTurn="true";
						smoothAcceleration="true";
					};
				};
			};
			class SlotScared
			{
				class BehaviourFleeFromTargets
				{
					class SoundsEntering
					{
						class Sound1
						{
							sounds[]=
							{
								"WolfGroans1_SoundSet"
							};
						};
						class Sound2
						{
							sounds[]=
							{
								"WolfGroans2_SoundSet"
							};
						};
						class Sound3
						{
							sounds[]=
							{
								"WolfGroans3_SoundSet"
							};
						};
						probability=1;
					};
					class SoundsDuring
					{
						class Sound1
						{
							sounds[]=
							{
								"WolfGroans_SoundSet"
							};
						};
						probability=0.30000001;
						RepeatTimeMin=5;
						RepeatTimeMax=25;
						RepeatEnabled="true";
					};
					class RunMovement
					{
						maxSpeed=12.175;
						optimalSpeed=6.3899999;
						minSpeed=1;
						acceleration=2;
						maxAngleSpeed=360;
						slowRadius=4;
						stopRadius=0;
						maxSpeedRange=15;
						optimalSpeedRange=10;
						pathFilter="DeerOnRun";
					};
				};
			};
			class AlertSystem
			{
				visionToAlertMultiplier=20;
				noiseToAlertMultiplier=1.5;
				damageToAlertMultiplier=200;
				class Calm
				{
					dropSpeed=3;
					dropDelay=2;
					maxAlertValue=30;
				};
				class Alerted
				{
					dropSpeed=11;
					dropDelay=0;
					maxAlertValue=100;
				};
				class AlertedExtra
				{
					dropSpeed=25;
					dropDelay=10;
					maxAlertValue=500;
				};
			};
		};
		class NoiseSystemParams
		{
			rangeMin=25;
			rangeMax=100;
			rangeShotMin=0;
			rangeShotMax=50;
			class NoiseStrengthTeamMultipliers
			{
				BigGame=0.40000001;
				Zombies=0.60000002;
				Player=1;
			};
		};
		class TargetSystemDZBase
		{
			class VisionTeamMultipliers
			{
				BigGame=0.60000002;
				Zombies=1;
				Player=1;
			};
			visionManSizeStand=1;
			visionManSizeCrouch=0.80000001;
			visionManSizeProne=0.60000002;
			visionAngularSpeedMin=0.1;
			visionAngularSpeedMax=0.5;
			visionAngularSpeedMaxMult=1.5;
			visionRangeMin=100;
			visionRangeMax=200;
			visionFov=1.8;
			visionPeripheralRangeMin=1;
			visionPeripheralRangeMax=16;
			visionPeripheralFov=6.1999998;
			visionNightMinMult=1;
			visionNightMaxMult=0.75;
			visionRainMinMult=1;
			visionRainMaxMult=0.89999998;
			visionFogMinMult=1;
			visionFogMaxMult=0.69999999;
		};
	};

	class SFW_Predators_BlindDog: Predators_Wolf
	{
		HeadLookBoneName = "LookAt";
		defaultGroupTemplateName = "SFW_BlindDogGroupBeh";

		class BehaviourHLPredator: BehaviourHLPredator
		{
			class SlotCalmGrazing: SlotCalmGrazing
			{
				class BehaviourCalm: BehaviourCalm
				{
					class SoundsDuring
					{
						class Sound1 { sounds[] = {"SFW_BlindDog_Grazing_SoundSet"}; };
						probability = 0.25;
						RepeatTimeMin = 20;
						RepeatTimeMax = 60;
						RepeatEnabled = 1;
					};

					grazeOnSpotWeight = 20;
					grazeWalkingWeight = 20;
					restWeight = 20;
					restingDurationMin = 15;
					restingDurationMax = 60;
				};
			};

			class SlotAttracted: SlotAttracted
			{
				class BehaviourCalm: BehaviourCalm
				{
					class SoundsEntering
					{
						class Sound1 { sounds[] = {"SFW_BlindDog_Attracted0_SoundSet", "SFW_BlindDog_Attracted0_tailDistant_SoundSet"}; };
						class Sound2 { sounds[] = {"SFW_BlindDog_Attracted1_SoundSet", "SFW_BlindDog_Attracted1_tailDistant_SoundSet"}; };
						class Sound3 { sounds[] = {"SFW_BlindDog_Attracted2_SoundSet", "SFW_BlindDog_Attracted2_tailDistant_SoundSet"}; };
						class Sound4 { sounds[] = {"SFW_BlindDog_Attracted3_SoundSet", "SFW_BlindDog_Attracted3_tailDistant_SoundSet"}; };
						class Sound5 { sounds[] = {"SFW_BlindDog_Attracted4_SoundSet", "SFW_BlindDog_Attracted4_tailDistant_SoundSet"}; };
						class Sound6 { sounds[] = {"SFW_BlindDog_Attracted5_SoundSet", "SFW_BlindDog_Attracted5_tailDistant_SoundSet"}; };
						probability = 0.65;
					};

					class SoundsDuring
					{
						class Sound1 { sounds[] = {"SFW_BlindDog_Attracted0_SoundSet", "SFW_BlindDog_Attracted0_tailDistant_SoundSet"}; };
						class Sound2 { sounds[] = {"SFW_BlindDog_Attracted1_SoundSet", "SFW_BlindDog_Attracted1_tailDistant_SoundSet"}; };
						class Sound3 { sounds[] = {"SFW_BlindDog_Attracted2_SoundSet", "SFW_BlindDog_Attracted2_tailDistant_SoundSet"}; };
						class Sound4 { sounds[] = {"SFW_BlindDog_Attracted3_SoundSet", "SFW_BlindDog_Attracted3_tailDistant_SoundSet"}; };
						class Sound5 { sounds[] = {"SFW_BlindDog_Attracted4_SoundSet", "SFW_BlindDog_Attracted4_tailDistant_SoundSet"}; };
						class Sound6 { sounds[] = {"SFW_BlindDog_Attracted5_SoundSet", "SFW_BlindDog_Attracted5_tailDistant_SoundSet"}; };
						probability = 0.25;
						RepeatTimeMin = 5;
						RepeatTimeMax = 30;
						RepeatEnabled = 1;
					};

					class TravelingMovement
					{
						maxSpeed = 1.85;
						minSpeed = 0.78;
						acceleration = 5;
						maxAngleSpeed = 90;
						slowRadius = 5;
						stopRadius = 3;
						slowToTurn = 1;
						smoothAcceleration = 1;
						pathFilter = "WolfOnHunt";
					};
				};
			};
		};

		class TargetSystemDZBase: TargetSystemDZBase
		{
			visionManSizeStand = 0.6;
			visionManSizeCrouch = 0.4;
			visionManSizeProne = 0.2;
		};

		class NoiseSystemParams
		{
			rangeMin = 25;
			rangeMax = 250;
			rangeShotMin = 0;
			rangeShotMax = 500;
			class NoiseStrengthTeamMultipliers
			{
				Player = 1.5;
			};
		};
	};
};

class GroupBehaviourTemplates
{
	class DZWolfGroupBeh;

	class SFW_BlindDogGroupBeh: DZWolfGroupBeh
	{
		alertDistributionSpeed = 200;
		catchUpTestDelay = 8;
		catchUpStartRadius = 100;
		catchUpTargetRadius = 5;
		groupRadius = 15;
		spawnMinDistanceBetweenAgents = 1;
		agentPathLength = 100;
		atNeedMinDuration = 60;
		atNeedMaxDuration = 120;
		singleAgentSafeKeeperDelayMin = 100;
		singleAgentSafeKeeperDelayMax = 100;
		preyAttractionRange = 150;
		innerOuterCircleRatio = 0.3;
		endAttractionRange = 10;
		attractionCooldown = 130;
		endAttractionTime = 500;
		targetEscapingSpeed = 1.5;
		killAddFear = 0;
		eatingTime = 800;
		huntingCooldown = 120;
		maxHuntingTime = 60;
		safeKeeperIntervalMin = 60;
		safeKeeperIntervalMax = 90;
		siegeAttackCountdownMin = 1;
		siegeAttackCountdownMax = 6;
		huntAttackCountdownMin = 1;
		huntAttackCountdownMax = 10;
		changeTargetCooldown = 5;
		changeTargetAlertRatio = 3;
		changeTargetEffectRadius = 6;
		subgroupSpacingMax = 500;
	};
};
