class CfgPatches
{
	class SFW_Mutant_Pseudodog
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {
			"DZ_Characters_Zombies",
			"DZ_Data",
			"DZ_AI",
			"DZ_Weapons_Melee",
			"DZ_data_aiconfigs",
			"DZ_Characters"
		};
	};
};
class CfgVehicles
{
	class AnimalBase;
	class SFW_PseudoDog: AnimalBase
	{
		simulation = "dayzanimal";
		scope = 2;
		model = "StalkerFWConfig\mutants\pseudodog\pseudodog.p3d";
		displayName = "Pseudodog";
		descriptionShort = "";
		DamageSphereAmmos[] = {"MeleeWolf"};
		aiAgentTemplate = "Predators_Wolf";
		injuryLevels[] = {1,0.5,0.2,0};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 400;
					healthLevels[] = {{1,{}},{0.7,{}},{0.5,{}},{0.3,{}},{0,{}}};
				};
				class Blood
				{
					hitpoints = 5000;
				};
				class Shock
				{
					hitpoints = 100;
				};
			};
			class DamageZones
			{
				class Zone_Head
				{
					componentNames[] = {"Zone_Head"};
					transferToZonesNames[] = {};
					transferToZonesCoefs[] = {};
					fatalInjuryCoef = 0.0226;
					canBleed = 0;
					class Health
					{
						hitpoints = 240;
						transferToGlobalCoef = 1;
					};
					class Blood: Health
					{
						hitpoints = 0;
					};
					class Shock: Health
					{
						hitpoints = 0;
					};
					class ArmorType
					{
						class Melee
						{
							class Health
							{
								damage = 0.005;
							};
						};
						class Projectile: Melee
						{
							class Health: Health
							{
								damage = 0.4000001;
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
					fatalInjuryCoef = 0.09;
					class Health: Health
					{
						hitpoints = 100;
					};
				};
				class Zone_Chest: Zone_Head
				{
					componentNames[] = {"Zone_Chest"};
					transferToZonesNames[] = {};
					transferToZonesCoefs[] = {};
					fatalInjuryCoef = 0.030000001;
					class Health: Health
					{
						hitpoints = 150;
					};
					class ArmorType
					{
						class Melee
						{
							class Health
							{
								damage = 0.1;
							};
						};
						class Projectile: Melee
						{
							class Health: Health
							{
								damage = 0.2;
							};
						};
						class FragGrenade: Melee{};
					};
				};
				class Zone_Belly: Zone_Head
				{
					componentNames[] = {"Zone_Belly"};
					transferToZonesNames[] = {};
					transferToZonesCoefs[] = {};
					fatalInjuryCoef = 0.05;
					class Health: Health
					{
						hitpoints = 150;
					};
					class ArmorType
					{
						class Melee
						{
							class Health
							{
								damage = 0.1;
							};
						};
						class Projectile: Melee
						{
							class Health: Health
							{
								damage = 0.15;
							};
						};
						class FragGrenade: Melee{};
					};
				};
				class Zone_Spine: Zone_Head
				{
					componentNames[] = {"Zone_Spine_Front","Zone_Spine_Back"};
					transferToZonesNames[] = {};
					transferToZonesCoefs[] = {};
					fatalInjuryCoef = 0.05;
					class Health: Health
					{
						hitpoints = 150;
					};
					class ArmorType
					{
						class Melee
						{
							class Health
							{
								damage = 0.0001;
							};
						};
						class Projectile: Melee
						{
							class Health: Health
							{
								damage = 0.10001;
							};
						};
						class FragGrenade: Melee{};
					};
				};
				class Zone_Pelvis: Zone_Head
				{
					componentNames[] = {"Zone_Pelvis"};
					transferToZonesNames[] = {"Zone_Spine"};
					transferToZonesCoefs[] = {0.5};
					fatalInjuryCoef = 0.05;
					class Health: Health
					{
						hitpoints = 180;
					};
					class ArmorType
					{
						class Melee
						{
							class Health
							{
								damage = 0.0001;
							};
						};
						class Projectile: Melee
						{
							class Health: Health
							{
								damage = 0.1;
							};
						};
						class FragGrenade: Melee{};
					};
				};
				class Zone_Legs: Zone_Head
				{
					componentNames[] = {"Zone_Legs_Front","Zone_Legs_Back"};
					transferToZonesNames[] = {};
					transferToZonesCoefs[] = {};
					fatalInjuryCoef = 0;
					class Health: Health
					{
						hitpoints = 100;
						transferToGlobalCoef = 0;
					};
				};
			};
		};
		class enfanimsys
		{
			meshObject = "dz\animals\canis_lupus\Data\canis_lupus_skeleton.xob";
			graphname = "dz\animals\animations\!graph_files\Wolf\Wolf_Graph.agr";
			defaultinstance = "dz\animals\animations\!graph_files\Wolf\Wolf_AnimInstance.asi";
			startnode = "AlignToTerrain_Rot";
			skeletonName = "canis_lupus_skeleton.xob";
		};
		class AnimEvents
		{
			class Steps
			{
				class Walk1
				{
					soundLookupTable = "PawMediumWalk_LookupTable";
					noise = "WolfStepNoise";
					effectSet[] = {"WolfStepEffect1","WolfStepEffect2"};
					id = 1;
				};
				class Walk2
				{
					soundLookupTable = "PawMediumWalk_LookupTable";
					noise = "WolfStepNoise";
					effectSet[] = {"WolfStepEffect1","WolfStepEffect2"};
					id = 2;
				};
				class Walk3
				{
					soundLookupTable = "PawMediumWalk_LookupTable";
					noise = "WolfStepNoise";
					effectSet[] = {"WolfStepEffect1","WolfStepEffect2"};
					id = 3;
				};
				class Walk4
				{
					soundLookupTable = "PawMediumWalk_LookupTable";
					noise = "WolfStepNoise";
					effectSet[] = {"WolfStepEffect1","WolfStepEffect2"};
					id = 4;
				};
				class Run1
				{
					soundLookupTable = "PawMediumRun_LookupTable";
					noise = "WolfStepNoise";
					effectSet[] = {"WolfStepEffect1","WolfStepEffect2"};
					id = 5;
				};
				class Run2
				{
					soundLookupTable = "PawMediumRun_LookupTable";
					noise = "WolfStepNoise";
					effectSet[] = {"WolfStepEffect1","WolfStepEffect2"};
					id = 6;
				};
				class Run3
				{
					soundLookupTable = "PawMediumRun_LookupTable";
					noise = "WolfStepNoise";
					effectSet[] = {"WolfStepEffect1","WolfStepEffect2"};
					id = 7;
				};
				class Run4
				{
					soundLookupTable = "PawMediumRun_LookupTable";
					noise = "WolfStepNoise";
					effectSet[] = {"WolfStepEffect1","WolfStepEffect2"};
					id = 8;
				};
				class Bodyfall
				{
					soundLookupTable = "PawMediumBodyfall_LookupTable";
					noise = "WolfStepNoise";
					effectSet[] = {"WolfStepEffect1","WolfStepEffect2"};
					id = 11;
				};
				class Settle
				{
					soundLookupTable = "PawMediumSettle_LookupTable";
					noise = "WolfStepNoise";
					effectSet[] = {"WolfStepEffect1","WolfStepEffect2"};
					id = 12;
				};
				class Rest2standA
				{
					soundLookupTable = "PawMediumRest2standA_LookupTable";
					noise = "WolfStepNoise";
					effectSet[] = {"WolfStepEffect1","WolfStepEffect2"};
					id = 13;
				};
				class Rest2standB
				{
					soundLookupTable = "PawMediumRest2standB_LookupTable";
					noise = "WolfStepNoise";
					effectSet[] = {"WolfStepEffect1","WolfStepEffect2"};
					id = 14;
				};
				class Stand2restA
				{
					soundLookupTable = "PawMediumStand2restA_LookupTable";
					noise = "WolfStepNoise";
					effectSet[] = {"WolfStepEffect1","WolfStepEffect2"};
					id = 15;
				};
				class Stand2restB
				{
					soundLookupTable = "PawMediumStand2restB_LookupTable";
					noise = "WolfStepNoise";
					effectSet[] = {"WolfStepEffect1","WolfStepEffect2"};
					id = 16;
				};
				class Stand2restC
				{
					soundLookupTable = "PawMediumStand2restC_LookupTable";
					noise = "WolfStepNoise";
					effectSet[] = {"WolfStepEffect1","WolfStepEffect2"};
					id = 17;
				};
				class Jump
				{
					soundLookupTable = "PawMediumJump_LookupTable";
					noise = "WolfStepNoise";
					effectSet[] = {"WolfStepEffect1","WolfStepEffect2"};
					id = 18;
				};
				class Impact
				{
					soundLookupTable = "PawMediumImpact_LookupTable";
					noise = "WolfStepNoise";
					effectSet[] = {"WolfStepEffect1","WolfStepEffect2"};
					id = 19;
				};
			};
			class Sounds
			{
				class WolfBark
				{
					soundSet = "SFW_pseudodog_idle_soundset";
					noise = "WolfRoarNoise";
					id = 1;
				};
				class WolfBark_1
				{
					soundSet = "SFW_pseudodog_idle_soundset";
					noise = "WolfRoarNoise";
					id = 61;
				};
				class WolfBark_2
				{
					soundSet = "SFW_pseudodog_idle_soundset";
					noise = "WolfRoarNoise";
					id = 71;
				};
				class WolfBark2
				{
					soundSet = "SFW_pseudodog_idle_soundset";
					noise = "WolfRoarNoise";
					id = 2;
				};
				class WolfBark3
				{
					soundSet = "SFW_pseudodog_idle_soundset";
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
					soundSet = "SFW_pseudodog_hurt_soundset";
					noise = "WolfRoarNoise";
					id = 5;
				};
				class WolfGrowl_A
				{
					soundSet = "SFW_pseudodog_threaten_soundset";
					noise = "WolfRoarNoise";
					id = 6;
				};
				class WolfGrowl_B
				{
					soundSet = "SFW_pseudodog_threaten_soundset";
					noise = "WolfRoarNoise";
					id = 7;
				};
				class WolfGrowl
				{
					soundSet = "SFW_pseudodog_threaten_soundset";
					noise = "WolfRoarNoise";
					id = 8;
				};
				class WolfPant
				{
					soundSet = "WolfPant_SoundSet";
					noise = "WolfRoarNoise";
					id = 9;
				};
				class WolfPantShort
				{
					soundSet = "WolfPantShort_SoundSet";
					noise = "WolfRoarNoise";
					id = 10;
				};
				class WolfPantLong
				{
					soundSet = "WolfPantShort_SoundSet";
					noise = "WolfRoarNoise";
					id = 18;
				};
				class WolfSnarl
				{
					soundSet = "SFW_pseudodog_threaten_soundset";
					noise = "WolfRoarNoise";
					id = 11;
				};
				class WolfSnarlShort
				{
					soundSet = "SFW_pseudodog_threaten_soundset";
					noise = "WolfRoarNoise";
					id = 12;
				};
				class WolfWhimper
				{
					soundSet = "SFW_pseudodog_hurt_soundset";
					noise = "WolfRoarNoise";
					id = 13;
				};
				class WolfYelp
				{
					soundSet = "WolfYelp_SoundSet";
					noise = "WolfRoarNoise";
					id = 14;
				};
				class WolfYawn
				{
					soundSet = "WolfYelp_SoundSet";
					noise = "WolfRoarNoise";
					id = 15;
				};
				class WolfDeath
				{
					soundSet = "SFW_pseudodog_death_soundset";
					noise = "WolfRoarNoise";
					id = 20;
				};
				class WolfHowl
				{
					soundSet = "SFW_pseudodog_howl_soundset";
					noise = "WolfRoarNoise";
					id = 16;
				};
				class WolfHowls
				{
					soundSet = "SFW_pseudodog_howl_soundset";
					noise = "WolfRoarNoise";
					id = 17;
				};
			};
			class Damages
			{
				class Bite
				{
					damage = "WolfBiteDamage";
					id = 1;
				};
				class BiteLow
				{
					damage = "WolfLowBiteDamage";
					id = 2;
				};
			};
		};
		class CommandMoveSettings
		{
			useSpeedMapping = 1;
			movementSpeedMapping[] = {0,0.25,0.5,1.2,4.5,12.2};
		};
		class CommandLookAtSettings
		{
			lookAtFilterTimeout = 0.5;
			lookAtFilterSpeed = 1.57;
		};
	};
};
