
class CfgPatches
{
	class SFW_AI_Flesh
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_AI", "DZ_Animals", "DZ_data_aiconfigs"};
	};
};

class CfgAIBehaviours
{
	class Predators_Wolf
	{
		class BehaviourHLPredator
		{
			class MovementWalk;
			class MovementRun;
			class MovementSprint;
			class SlotCalm
			{
				class BehaviourCalm;
			};
			class SlotSiege
			{
				class BehaviourSiege;
			};
		};
		class TargetSystemDZBase;
		class NoiseSystemParams;
	};
	class SFW_Predators_Flesh: Predators_Wolf
	{
		HeadLookBoneName = "pin_lookat";
		teamName = "Predator";
		defaultGroupTemplateName = "SFW_FleshGroupBeh";
		class PathAgent
		{
			radius = 0.3;
			height = 1;
			lengthRadius = 0.7;
		};
		class BehaviourHLPredator
		{
			instantAlertRangeMin = 0;
			instantAlertRangeMax = 0;
			instantAlertStrength = 0;
			proximityAttackRange = 2.5;
			attackCooldown = 3;
			class SlotCalmGrazing
			{
				class BehaviourCalm
				{
					travelingMode = "true";
					grazeOnSpotWeight = 20;
					grazeWalkingWeight = 20;
					restWeight = 0;
					travelWeight = 0;
					grazeOnSpotDurationMin = 5;
					grazeOnSpotDurationMax = 10;
					grazeWalkingDurationMin = 500;
					grazeWalkingDurationMax = 500;
					restingDurationMin = 5;
					restingDurationMax = 10;
					travelingDurationMin = 15;
					travelingDurationMax = 30;
					grazeWalkingSpeed = 0.5;
					travelingWalkingSpeed = 0.9;
					safetyDurationMin = 10;
					safetyDurationMax = 10;
					safetyLookAngleMin = 0.3;
					safetyLookAngleMax = 0.7;
					safetyLookAngleChangeInterval = 3;
					class GrazeMovement
					{
						maxSpeed = 0.25;
						minSpeed = 0.25;
						acceleration = 5;
						maxAngleSpeed = 90;
						slowRadius = 2;
						stopRadius = 1;
						pathFilter = "WolfOnHunt";
					};
					class TravelingMovement
					{
						maxSpeed = 2.85;
						minSpeed = 0.78;
						acceleration = 5;
						maxAngleSpeed = 90;
						slowRadius = 2;
						stopRadius = 1;
						pathFilter = "WolfOnHunt";
						slowToTurn = "true";
						smoothAcceleration = "true";
					};
					class CatchUpMovement
					{
						maxSpeed = 6.38;
						minSpeed = 0.78;
						acceleration = 5;
						maxAngleSpeed = 90;
						slowRadius = 2;
						stopRadius = 1;
						pathFilter = "WolfOnHunt";
						slowToTurn = "true";
						smoothAcceleration = "true";
					};
				};
			};
			class SlotSiege
			{
				class BehaviourSiege
				{
					innerRadius = 7;
					innerRadiusMin = 4.5;
					innerRadiusMax = 10;
					outerRadius = 16;
					directionChangeTimeMin = 7;
					directionChangeTimeMax = 25;
					PlayerFOV = 1.4;
					preferPlayerFOVCooldown = 1;
					attackDistance = 3.5;
					class InnerCircleMovement
					{
						maxSpeed = 6.3;
						optimalSpeed = 6.3;
						optimalSpeedRange = 1;
						minSpeed = 1;
						acceleration = 7;
						maxAngleSpeed = 90;
						slowRadius = 0;
						stopRadius = 2;
						maxSpeedRange = 2;
						pathFilter = "WolfOnHunt";
						startAnimationMaxSpeed = 0.54;
					};
					class Movement
					{
						maxSpeed = 9;
						optimalSpeed = 6.3;
						optimalSpeedRange = 15;
						minSpeed = 1;
						acceleration = 10;
						maxAngleSpeed = 180;
						slowRadius = 0;
						stopRadius = 2;
						maxSpeedRange = 20;
						pathFilter = "WolfOnOuterCircle";
						startAnimationMaxSpeed = 0.54;
					};
					class AttackMovement
					{
						maxSpeed = 12.175;
						optimalSpeed = 12;
						optimalSpeedRange = 6;
						minSpeed = 0.8;
						acceleration = 10;
						maxAngleSpeed = 180;
						slowRadius = 2;
						stopRadius = 3;
						maxSpeedRange = 30;
						pathFilter = "WolfOnHunt";
					};
				};
			};
			class SlotEating
			{
				class BehaviourCalm
				{
					grazeOnSpotWeight = 20;
					grazeWalkingWeight = 20;
					restWeight = 0;
					travelWeight = 20;
					eatingWeight = 20;
					grazeOnSpotDurationMin = 5;
					grazeOnSpotDurationMax = 10;
					grazeWalkingDurationMin = 10;
					grazeWalkingDurationMax = 15;
					restingDurationMin = 15;
					restingDurationMax = 25;
					travelingDurationMin = 15;
					travelingDurationMax = 30;
					eatingDurationMin = 15;
					eatingDurationMax = 25;
					safetyDurationMin = 10;
					safetyDurationMax = 20;
					safetyLookAngleMin = 0.1;
					safetyLookAngleMax = 1.5;
					safetyLookAngleChangeInterval = 7;
					class GrazeMovement
					{
						maxSpeed = 0.25;
						minSpeed = 0.25;
						acceleration = 5;
						maxAngleSpeed = 90;
						slowRadius = 2;
						stopRadius = 1;
						pathFilter = "WolfOnHunt";
					};
					class TravelingMovement
					{
						maxSpeed = 2.85;
						minSpeed = 0.78;
						acceleration = 5;
						maxAngleSpeed = 90;
						slowRadius = 2;
						stopRadius = 1;
						pathFilter = "WolfOnHunt";
						slowToTurn = "true";
						smoothAcceleration = "true";
					};
					class CatchUpMovement
					{
						maxSpeed = 6.38;
						minSpeed = 0.78;
						acceleration = 5;
						maxAngleSpeed = 90;
						slowRadius = 2;
						stopRadius = 1;
						pathFilter = "WolfOnHunt";
						slowToTurn = "true";
						smoothAcceleration = "true";
					};
				};
			};
			class SlotHunting
			{
				class BehaviourHunt
				{
					attackRange = 3.5;
					followingRadius = 15;
					followingRadiusReqroupCooldownMin = 5;
					followingRadiusReqroupCooldownMax = 15;
					followingRadiusRegroupMinSpeed = 1.5;
					predictFollowingMinDistance = 10;
					minDistanceToTargetRatio = 0.3;
					class Movement
					{
						maxSpeed = 10;
						optimalSpeed = 9.5;
						minSpeed = 1;
						acceleration = 5;
						maxAngleSpeed = 90;
						slowRadius = 2;
						stopRadius = 1;
						maxSpeedRange = 15;
						optimalSpeedRange = 5;
						pathFilter = "WolfOnHunt";
					};
					class MovementAttack
					{
						maxSpeed = 12.175;
						optimalSpeed = 12.175;
						minSpeed = 6;
						acceleration = 20;
						maxAngleSpeed = 360;
						slowRadius = 0;
						stopRadius = 0;
						maxSpeedRange = 3;
						optimalSpeedRange = 1;
						pathFilter = "WolfOnHunt";
					};
				};
			};
			class SlotCalmResting
			{
				class BehaviourCalm
				{
					travelingMode = "true";
					grazeOnSpotWeight = 50;
					grazeWalkingWeight = 50;
					restWeight = 50;
					travelWeight = 0;
					grazeOnSpotDurationMin = 5;
					grazeOnSpotDurationMax = 10;
					grazeWalkingDurationMin = 15;
					grazeWalkingDurationMax = 25;
					restingDurationMin = 25;
					restingDurationMax = 35;
					travelingDurationMin = 15;
					travelingDurationMax = 30;
					safetyDurationMin = 10;
					safetyDurationMax = 10;
					safetyLookAngleMin = 0.1;
					safetyLookAngleMax = 1.5;
					safetyLookAngleChangeInterval = 7;
					class GrazeMovement
					{
						maxSpeed = 0.25;
						minSpeed = 0.25;
						acceleration = 5;
						maxAngleSpeed = 90;
						slowRadius = 2;
						stopRadius = 1;
						pathFilter = "WolfOnHunt";
					};
					class TravelingMovement
					{
						maxSpeed = 2.85;
						minSpeed = 0.78;
						acceleration = 5;
						maxAngleSpeed = 90;
						slowRadius = 2;
						stopRadius = 1;
						pathFilter = "WolfOnHunt";
						slowToTurn = "true";
						smoothAcceleration = "true";
					};
					class CatchUpMovement
					{
						maxSpeed = 6.38;
						minSpeed = 0.78;
						acceleration = 5;
						maxAngleSpeed = 90;
						slowRadius = 2;
						stopRadius = 1;
						pathFilter = "WolfOnHunt";
						slowToTurn = "true";
						smoothAcceleration = "true";
					};
				};
			};
			class SlotCalmTravelling
			{
				class BehaviourCalm
				{
					travelingMode = "true";
					grazeOnSpotWeight = 20;
					grazeWalkingWeight = 20;
					restWeight = 0;
					travelWeight = 50;
					grazeOnSpotDurationMin = 10;
					grazeOnSpotDurationMax = 20;
					grazeWalkingDurationMin = 25;
					grazeWalkingDurationMax = 35;
					restingDurationMin = 5;
					restingDurationMax = 10;
					travelingDurationMin = 10;
					travelingDurationMax = 50;
					safetyDurationMin = 10;
					safetyDurationMax = 10;
					safetyLookAngleMin = 0.3;
					safetyLookAngleMax = 0.7;
					safetyLookAngleChangeInterval = 3;
					class TravelingMovement
					{
						maxSpeed = 2.85;
						minSpeed = 0.78;
						acceleration = 5;
						maxAngleSpeed = 90;
						slowRadius = 4;
						stopRadius = 2;
						slowToTurn = "true";
						smoothAcceleration = "true";
					};
					class CatchUpMovement
					{
						maxSpeed = 6.38;
						minSpeed = 0.78;
						acceleration = 5;
						maxAngleSpeed = 90;
						slowRadius = 2;
						stopRadius = 1;
						pathFilter = "WolfOnHunt";
						slowToTurn = "true";
						smoothAcceleration = "true";
					};
					class GrazeMovement
					{
						maxSpeed = 0.25;
						minSpeed = 0.25;
						acceleration = 5;
						maxAngleSpeed = 90;
						slowRadius = 2;
						stopRadius = 1;
						pathFilter = "WolfOnHunt";
					};
				};
			};
			class SlotAttracted
			{
				class BehaviourCalm
				{
					grazeOnSpotWeight = 20;
					grazeWalkingWeight = 20;
					restWeight = 0;
					travelWeight = 50;
					grazeOnSpotDurationMin = 5;
					grazeOnSpotDurationMax = 10;
					grazeWalkingDurationMin = 5;
					grazeWalkingDurationMax = 10;
					restingDurationMin = 5;
					restingDurationMax = 10;
					travelingDurationMin = 50;
					travelingDurationMax = 100;
					grazeWalkingSpeed = 0.544;
					travelingWalkingSpeed = 0.782;
					safetyDurationMin = 10;
					safetyDurationMax = 10;
					safetyLookAngleMin = 0.3;
					safetyLookAngleMax = 0.7;
					safetyLookAngleChangeInterval = 3;
					class TravelingMovement
					{
						maxSpeed = 2.85;
						minSpeed = 0.78;
						acceleration = 5;
						maxAngleSpeed = 90;
						slowRadius = 5;
						stopRadius = 3;
						slowToTurn = "true";
						smoothAcceleration = "true";
						pathFilter = "WolfOnHunt";
					};
					class CatchUpMovement
					{
						maxSpeed = 6.38;
						minSpeed = 0.78;
						acceleration = 5;
						maxAngleSpeed = 90;
						slowRadius = 0;
						stopRadius = 0.5;
						slowToTurn = "true";
						smoothAcceleration = "true";
						pathFilter = "WolfOnHunt";
					};
					class GrazeMovement
					{
						maxSpeed = 0.25;
						minSpeed = 0.25;
						acceleration = 5;
						maxAngleSpeed = 90;
						slowRadius = 0;
						stopRadius = 0.5;
					};
				};
			};
			class SlotFireplace
			{
				class BehaviourCalm
				{
					grazeOnSpotWeight = 20;
					grazeWalkingWeight = 20;
					restWeight = 20;
					travelWeight = 0;
					grazeOnSpotDurationMin = 50;
					grazeOnSpotDurationMax = 100;
					grazeWalkingDurationMin = 50;
					grazeWalkingDurationMax = 100;
					restingDurationMin = 50;
					restingDurationMax = 150;
					travelingDurationMin = 0;
					travelingDurationMax = 0;
					grazeWalkingSpeed = 0.2;
					travelingWalkingSpeed = 1.36;
					safetyIntervalMin = 30;
					safetyIntervalMax = 40;
					safetyDurationMin = 5;
					safetyDurationMax = 10;
					safetyLookAngleMin = 0.3;
					safetyLookAngleMax = 0.7;
					safetyLookAngleChangeInterval = 3;
					class GrazeMovement
					{
						maxSpeed = 0.25;
						minSpeed = 0.25;
						acceleration = 5;
						maxAngleSpeed = 90;
						slowRadius = 0;
						stopRadius = 0.5;
					};
					class TravelingMovement
					{
						maxSpeed = 2.85;
						minSpeed = 0.78;
						acceleration = 5;
						maxAngleSpeed = 90;
						slowRadius = 0;
						stopRadius = 0.5;
						slowToTurn = "true";
						smoothAcceleration = "true";
					};
				};
			};
			class SlotScared
			{
				class BehaviourFleeFromTargets
				{
					class RunMovement
					{
						maxSpeed = 12.175;
						optimalSpeed = 6.39;
						minSpeed = 1;
						acceleration = 2;
						maxAngleSpeed = 360;
						slowRadius = 4;
						stopRadius = 0;
						maxSpeedRange = 15;
						optimalSpeedRange = 10;
						pathFilter = "DeerOnRun";
					};
				};
			};
			class AlertSystem
			{
				visionToAlertMultiplier = 10;
				noiseToAlertMultiplier = 1;
				damageToAlertMultiplier = 200;
				class Calm
				{
					dropSpeed = 3;
					dropDelay = 2;
					maxAlertValue = 30;
				};
				class Alerted
				{
					dropSpeed = 11;
					dropDelay = 0;
					maxAlertValue = 100;
				};
				class AlertedExtra
				{
					dropSpeed = 25;
					dropDelay = 10;
					maxAlertValue = 500;
				};
			};
		};
		class NoiseSystemParams
		{
			rangeMin = 25;
			rangeMax = 100;
			rangeShotMin = 0;
			rangeShotMax = 50;
			class NoiseStrengthTeamMultipliers
			{
				BigGame = 0.4;
				Zombies = 0.6;
				Player = 1;
			};
		};
		class TargetSystemDZBase
		{
			class VisionTeamMultipliers
			{
				BigGame = 0.6;
				Zombies = 1;
				Player = 1;
			};
			visionManSizeStand = 1;
			visionManSizeCrouch = 0.8;
			visionManSizeProne = 0.6;
			visionAngularSpeedMin = 0.1;
			visionAngularSpeedMax = 0.5;
			visionAngularSpeedMaxMult = 1.5;
			visionRangeMin = 100;
			visionRangeMax = 200;
			visionFov = 1.8;
			visionPeripheralRangeMin = 1;
			visionPeripheralRangeMax = 16;
			visionPeripheralFov = 6.2;
			visionNightMinMult = 1;
			visionNightMaxMult = 0.75;
			visionRainMinMult = 1;
			visionRainMaxMult = 0.9;
			visionFogMinMult = 1;
			visionFogMaxMult = 0.7;
		};
	};
};
class DZWolfGroupBeh{};
class GroupBehaviorTemplates
{
	class SFW_FleshGroupBeh: DZWolfGroupBeh{};
};