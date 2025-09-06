class CfgPatches
{
	class SFW_Mutant_Tark
	{
		units[] = {"Animal_UrsusArctos"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Animals","DZ_Data_Bliss","DZ_AI_Bliss","DZ_Weapons_Melee"};
	};
};
class CfgVehicles
{
	class Animal_UrsusArctos;
	class SFW_Mutant_Tark: Animal_UrsusArctos
	{
		simulation = "dayzanimal";
		scope = 2;
		model = "StalkerFWConfig\mutants\tark\tark.p3d";
		armor = 1.2;
		displayName = "Tark";
		descriptionShort = "";
		aiAgentTemplate = "Predator_UrsusArctos";
		injuryLevels[] = {1,0.5,0.2,0};
		DamageSphereAmmos[] = {"MeleeBear","MeleeBearShock","MeleeWolf"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 1200;
					healthLabels[] = {1,0.7,0.5,0.3,0};
				};
				class Blood
				{
					hitpoints = 2000;
				};
				class Shock
				{
					hitpoints = 5000s;
				};
			};
			class DamageZones
			{
				class Zone_Head
				{
					componentNames[] = {"Zone_Head"};
					transferToZonesNames[] = {};
					transferToZonesCoefs[] = {};
					fatalInjuryCoef = 0.1;
					canBleed = 0;
					class Health
					{
						hitpoints = 250;
						transferToGlobalCoef = 1;
					};
					class Blood: Health
					{
						hitpoints = 5000;
					};
					class Shock: Health
					{
						hitpoints = 5000;
					};
					class ArmorType
					{
						class Melee
						{
							class Health
							{
								damage = 0.51;
							};
						};
						class Projectile: Melee
						{
							class Health: Health
							{
								damage = 0.56;
							};
						};
						class FragGrenade: Melee{};
					};
				};
				class Zone_Neck: Zone_Head
				{
					componentNames[] = {"Zone_Neck"};
					transferToZonesNames[] = {};
					transferToZonesCoefs[] = {};
					fatalInjuryCoef = 0.1;
					class Health
					{
						hitpoints = 300;
						transferToGlobalCoef = 1;
					};
					class ArmorType: ArmorType
					{
						class Melee: Melee
						{
							class Health: Health
							{
								damage = 0.15;
							};
						};
						class Projectile: Projectile
						{
							class Health: Health
							{
								damage = 0.78;
							};
						};
					};
				};
				class Zone_Belly: Zone_Head
				{
					componentNames[] = {"Zone_Belly"};
					transferToZonesNames[] = {};
					transferToZonesCoefs[] = {};
					fatalInjuryCoef = 0.01;
					class Health: Health
					{
						hitpoints = 400;
					};
					class ArmorType: ArmorType
					{
						class Melee: Melee
						{
							class Health: Health
							{
								damage = 0.3;
							};
						};
					};
				};
				class Zone_Pelvis: Zone_Head
				{
					componentNames[] = {"Zone_Pelvis"};
					transferToZonesNames[] = {};
					transferToZonesCoefs[] = {};
					fatalInjuryCoef = 0.01;
					class Health: Health
					{
						hitpoints = 500;
					};
					class ArmorType: ArmorType
					{
						class Melee: Melee
						{
							class Health: Health
							{
								damage = 0.3;
							};
						};
					};
				};
				class Zone_Legs: Zone_Head
				{
					componentNames[] = {"Zone_Legs"};
					transferToZonesNames[] = {};
					transferToZonesCoefs[] = {};
					fatalInjuryCoef = 0.01;
					class Health: Health
					{
						hitpoints = 200;
						transferToGlobalCoef = 0;
					};
				};
			};
		};
		class enfanimsys
		{
			meshObject = "DZ\animals_bliss\ursus_arctos\data\ursus_arctos_skeleton.xob";
			graphname = "DZ\animals_bliss\animations\!graph_files\bear\Bear_Graph.agr";
			defaultinstance = "DZ\animals_bliss\animations\!graph_files\bear\BearSkeleton_AnimInstance.asi";
			startnode = "MasterBear_SM";
			skeletonName = "ursus_arctos_skeleton.xob";
		};
		class AnimEvents
		{
			class Steps
			{
				class Walk1
				{
					soundLookupTable = "PawBigWalk_LookupTable";
					noise = "WolfStepNoise";
					effectSet[] = {"WolfStepEffect1","WolfStepEffect2"};
					id = 1;
				};
				class Walk2
				{
					soundLookupTable = "PawBigWalk_LookupTable";
					noise = "WolfStepNoise";
					effectSet[] = {"WolfStepEffect1","WolfStepEffect2"};
					id = 2;
				};
				class Walk3
				{
					soundLookupTable = "PawBigWalk_LookupTable";
					noise = "WolfStepNoise";
					effectSet[] = {"WolfStepEffect1","WolfStepEffect2"};
					id = 3;
				};
				class Walk4
				{
					soundLookupTable = "PawBigWalk_LookupTable";
					noise = "WolfStepNoise";
					effectSet[] = {"WolfStepEffect1","WolfStepEffect2"};
					id = 4;
				};
				class Run1
				{
					soundLookupTable = "PawBigRun_LookupTable";
					noise = "WolfStepNoise";
					effectSet[] = {"WolfStepEffect1","WolfStepEffect2"};
					id = 5;
				};
				class Run2
				{
					soundLookupTable = "PawBigRun_LookupTable";
					noise = "WolfStepNoise";
					effectSet[] = {"WolfStepEffect1","WolfStepEffect2"};
					id = 6;
				};
				class Run3
				{
					soundLookupTable = "PawBigRun_LookupTable";
					noise = "WolfStepNoise";
					effectSet[] = {"WolfStepEffect1","WolfStepEffect2"};
					id = 7;
				};
				class Run4
				{
					soundLookupTable = "PawBigRun_LookupTable";
					noise = "WolfStepNoise";
					effectSet[] = {"WolfStepEffect1","WolfStepEffect2"};
					id = 8;
				};
				class Bodyfall
				{
					soundLookupTable = "PawBigBodyfall_LookupTable";
					noise = "WolfStepNoise";
					effectSet[] = {"WolfStepEffect1","WolfStepEffect2"};
					id = 11;
				};
				class Settle
				{
					soundLookupTable = "PawBigSettle_LookupTable";
					noise = "WolfStepNoise";
					effectSet[] = {"WolfStepEffect1","WolfStepEffect2"};
					id = 12;
				};
				class Rest2standA
				{
					soundLookupTable = "PawBigRest2standA_LookupTable";
					noise = "WolfStepNoise";
					effectSet[] = {"WolfStepEffect1","WolfStepEffect2"};
					id = 13;
				};
				class Rest2standB
				{
					soundLookupTable = "PawBigRest2standB_LookupTable";
					noise = "WolfStepNoise";
					effectSet[] = {"WolfStepEffect1","WolfStepEffect2"};
					id = 14;
				};
				class Stand2restA
				{
					soundLookupTable = "PawBigStand2restA_LookupTable";
					noise = "WolfStepNoise";
					effectSet[] = {"WolfStepEffect1","WolfStepEffect2"};
					id = 15;
				};
				class Stand2restB
				{
					soundLookupTable = "PawBigStand2restB_LookupTable";
					noise = "WolfStepNoise";
					effectSet[] = {"WolfStepEffect1","WolfStepEffect2"};
					id = 16;
				};
				class Stand2restC
				{
					soundLookupTable = "PawBigStand2restC_LookupTable";
					noise = "WolfStepNoise";
					effectSet[] = {"WolfStepEffect1","WolfStepEffect2"};
					id = 17;
				};
				class Jump
				{
					soundLookupTable = "PawBigJump_LookupTable";
					noise = "WolfStepNoise";
					effectSet[] = {"WolfStepEffect1","WolfStepEffect2"};
					id = 18;
				};
				class Impact
				{
					soundLookupTable = "PawBigImpact_LookupTable";
					noise = "WolfStepNoise";
					effectSet[] = {"WolfStepEffect1","WolfStepEffect2"};
					id = 19;
				};
			};
			class Sounds
			{
				class WolfBark
				{
					soundSet = "SFW_Tark_Aggr_Soundset";
					noise = "WolfRoarNoise";
					id = 1;
				};
				class WolfBark_1
				{
					soundSet = "SFW_Tark_Aggr_Soundset";
					noise = "WolfRoarNoise";
					id = 61;
				};
				class WolfBark_2
				{
					soundSet = "SFW_Tark_Aggr_Soundset";
					noise = "WolfRoarNoise";
					id = 71;
				};
				class WolfBark2
				{
					soundSet = "SFW_Tark_Aggr_Soundset";
					noise = "WolfRoarNoise";
					id = 2;
				};
				class WolfBark3
				{
					soundSet = "SFW_Tark_Aggr_Soundset";
					noise = "WolfRoarNoise";
					id = 3;
				};
				class WolfBreath
				{
					soundSet = "WolfBreath_SoundSet";
					noise = "WolfRoarNoise";
					id = 4;
				};
				class WolfGroans
				{
					soundSet = "SFW_Tark_Attack_Soundset";
					noise = "WolfRoarNoise";
					id = 5;
				};
				class WolfGrowl_A
				{
					soundSet = "SFW_Tark_Attack_Soundset";
					noise = "WolfRoarNoise";
					id = 6;
				};
				class WolfGrowl_B
				{
					soundSet = "SFW_Tark_Attack_Soundset";
					noise = "WolfRoarNoise";
					id = 7;
				};
				class WolfGrowl
				{
					soundSet = "SFW_Tark_Aggr_Soundset";
					noise = "WolfRoarNoise";
					id = 8;
				};
				class WolfPant
				{
					soundSet = "SFW_Tark_Aggr_Soundset";
					noise = "WolfRoarNoise";
					id = 9;
				};
				class WolfPantShort
				{
					soundSet = "SFW_Tark_Aggr_Soundset";
					noise = "WolfRoarNoise";
					id = 10;
				};
				class WolfPantLong
				{
					soundSet = "SFW_Tark_Attack_Soundset";
					noise = "WolfRoarNoise";
					id = 18;
				};
				class WolfSnarl
				{
					soundSet = "SFW_Tark_Attack_Soundset";
					noise = "WolfRoarNoise";
					id = 11;
				};
				class WolfSnarlShort
				{
					soundSet = "SFW_Tark_Attack_Soundset";
					noise = "WolfRoarNoise";
					id = 12;
				};
				class WolfWhimper
				{
					soundSet = "SFW_Tark_Pain_Soundset";
					noise = "WolfRoarNoise";
					id = 13;
				};
				class WolfYelp
				{
					soundSet = "SFW_Tark_Pain_Soundset";
					noise = "WolfRoarNoise";
					id = 14;
				};
				class WolfYawn
				{
					soundSet = "SFW_Tark_Pain_Soundset";
					noise = "WolfRoarNoise";
					id = 15;
				};
				class WolfDeath
				{
					soundSet = "SFW_Tark_Death_Soundset";
					noise = "WolfRoarNoise";
					id = 20;
				};
				class WolfHowl
				{
					soundSet = "SFW_Tark_Attack_Soundset";
					noise = "WolfRoarNoise";
					id = 16;
				};
				class WolfHowls
				{
					soundSet = "SFW_Tark_Attack_Soundset";
					noise = "WolfRoarNoise";
					id = 17;
				};
			};
			class Damages
			{
				class BearBiteDamage
				{
					damage = "BearBiteDamage";
					id = 1;
				};
				class BearLeftPawDamage
				{
					damage = "BearLeftPawDamage";
					id = 2;
				};
				class BearRightPawDamage
				{
					damage = "BearRightPawDamage";
					id = 3;
				};
				class BearBiteDamageIntimidate
				{
					damage = "BearBiteDamageIntimidate";
					id = 11;
				};
				class BearLeftPawDamageIntimidate
				{
					damage = "BearLeftPawDamageIntimidate";
					id = 12;
				};
				class BearRightPawDamageIntimidate
				{
					damage = "BearRightPawDamageIntimidate";
					id = 13;
				};
			};
		};
		class CommandMoveSettings
		{
			useSpeedMapping = 1;
			movementSpeedMapping[] = {0,0.24,0.55,1.72,3.5,8};
		};
		class CommandLookAtSettings
		{
			lookAtFilterTimeout = 0.5;
			lookAtFilterSpeed = 1.57;
		};
	};
};
