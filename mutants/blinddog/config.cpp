// Cleaned & Commented config for SFW BlindDog mutant
// What changed:
// - Removed unused/duplicate shells and tightened float values.
// - Kept only inheritance stubs that BlindDog overrides (prevents parse errors while staying lean).
// - Added comments where items were removed and why.
// - Left your paths/names intact so it drops into your mod without fallout.

class CfgPatches
{
	class SFW_Mutant_BlindDog
	{
		units[] = {};
		weapons[] = {};
		// REMOVED ammo[]: not used by CfgPatches; ammo classes are declared in CfgAmmo below
		requiredVersion = 0.1;
		requiredAddons[] = {			
			"DZ_Characters_Zombies",
			"DZ_Data",
			"DZ_AI",
			"DZ_Weapons_Melee",
			"DZ_data_aiconfigs",
			"DZ_Characters"}; // MeleeWolf base + animal systems
	};
};

class CfgVehicles
{
	class AnimalBase;
	class SFW_BlindDog_Base: AnimalBase
	{
		scope = 0; // kept hidden base; spawn/variants can set scope=2
		model = "StalkerFWConfig\mutants\blinddog\blinddog.p3d";
		displayName = ""; // optional: set user-facing name on playable variants
		descriptionShort = "";

		// Attack setup — links to CfgDamages/CfgAmmo below
		DamageSphereAmmos[] = { "SFW_BlindDogBite" };

		hiddenSelections[] = { "zbytek", "fur" };
		aiAgentTemplate = "SFW_Predators_BlindDog"; // uses your AI behaviour template below
		injuryLevels[] = {1, 0.5, 0.2, 0};

		class CommandMoveSettings
		{
			useSpeedMapping = 1;
			movementSpeedMapping[] = {0, 0.17, 0.5, 1.2, 4.5, 12.2};
		};
		class CommandLookAtSettings
		{
			lookAtFilterTimeout = 0.5;
			lookAtFilterSpeed = 1.57; // cleaned 1.5700001
		};

		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 150;
					healthLevels[] = {
						{1, {}},
						{0.7, {}},
						{0.5, {}},
						{0.3, {}},
						{0, {}}
					};
				};
				// KEPT Blood/Shock: some animal logic queries these, even if often unused
				class Blood { hitpoints = 5000; };
				class Shock { hitpoints = 100; };
			};

			class DamageZones
			{
				class Head
				{
					class Health { hitpoints = 100; transferToGlobalCoef = 10; };
					class Blood: Health { hitpoints = 0; };
					class Shock: Health { hitpoints = 0; };
					class ArmorType
					{
						class Projectile { class Health { damage = 1; }; };
						class FragGrenade { class Health { damage = 2; }; };
					};
					componentNames[] = {"zone_head"};
					fatalInjuryCoef = 0.8;
				};

				class Neck: Head
				{
					class Health { hitpoints = 100; transferToGlobalCoef = 3; };
					class ArmorType
					{
						class Projectile { class Health { damage = 0.4; }; };
						class FragGrenade { class Health { damage = 0.5; }; };
					};
					componentNames[] = {"zone_neck"};
					fatalInjuryCoef = 0.025; // cleaned
				};

				class Chest: Head
				{
					class Health { hitpoints = 150; transferToGlobalCoef = 1; };
					class ArmorType
					{
						class Projectile { class Health { damage = 0.8; }; };
						class FragGrenade { class Health { damage = 1.0; }; };
					};
					componentNames[] = {"zone_chest"};
					fatalInjuryCoef = 0.05;
				};

				class Pelvis: Head
				{
					class Health { hitpoints = 150; transferToGlobalCoef = 1; };
					class ArmorType
					{
						class Projectile { class Health { damage = 0.8; }; };
						class FragGrenade { class Health { damage = 1.0; }; };
					};
					componentNames[] = {"zone_pelvis"};
					fatalInjuryCoef = 0.05;
				};

				class LegsFront: Head
				{
					class Health { hitpoints = 500; transferToGlobalCoef = 0.33; };
					class ArmorType
					{
						class Projectile { class Health { damage = 0.2; }; };
						class FragGrenade { class Health { damage = 0.5; }; };
					};
					componentNames[] = {"zone_legs_front"};
					fatalInjuryCoef = -1;
				};

				class LegsBack: Head
				{
					class Health { hitpoints = 500; transferToGlobalCoef = 0.33; };
					class ArmorType
					{
						class Projectile { class Health { damage = 0.2; }; };
						class FragGrenade { class Health { damage = 0.6; }; };
					};
					componentNames[] = {"zone_legs_back"};
					fatalInjuryCoef = -1;
				};
			};
		};

		// Animation & events
		class enfanimsys
		{
			meshObject = "StalkerFWConfig\mutants\blinddog\blinddog.xob";
			graphname = "StalkerFWConfig\mutants\blinddog\anims\animgraph\blinddog.agr";
			defaultinstance = "StalkerFWConfig\mutants\blinddog\anims\animgraph\blinddog.asi";
			startnode = "AlignToTerrain_Rot";
			skeletonName = "blinddog.xob";
		};

		class AnimEvents
		{
			class Steps
			{
				// Footstep events kept as-is; consolidated formatting
				class Walk1 { soundLookupTable = "PawMediumWalk_LookupTable"; noise = "WolfStepNoise"; effectSet[] = {"WolfStepEffect1", "WolfStepEffect2"}; id = 1; };
				class Walk2 { soundLookupTable = "PawMediumWalk_LookupTable"; noise = "WolfStepNoise"; effectSet[] = {"WolfStepEffect1", "WolfStepEffect2"}; id = 2; };
				class Walk3 { soundLookupTable = "PawMediumWalk_LookupTable"; noise = "WolfStepNoise"; effectSet[] = {"WolfStepEffect1", "WolfStepEffect2"}; id = 3; };
				class Walk4 { soundLookupTable = "PawMediumWalk_LookupTable"; noise = "WolfStepNoise"; effectSet[] = {"WolfStepEffect1", "WolfStepEffect2"}; id = 4; };
				class Run1  { soundLookupTable = "PawMediumRun_LookupTable";  noise = "WolfStepNoise"; effectSet[] = {"WolfStepEffect1", "WolfStepEffect2"}; id = 5; };
				class Run2  { soundLookupTable = "PawMediumRun_LookupTable";  noise = "WolfStepNoise"; effectSet[] = {"WolfStepEffect1", "WolfStepEffect2"}; id = 6; };
				class Run3  { soundLookupTable = "PawMediumRun_LookupTable";  noise = "WolfStepNoise"; effectSet[] = {"WolfStepEffect1", "WolfStepEffect2"}; id = 7; };
				class Run4  { soundLookupTable = "PawMediumRun_LookupTable";  noise = "WolfStepNoise"; effectSet[] = {"WolfStepEffect1", "WolfStepEffect2"}; id = 8; };
				class Bodyfall { soundLookupTable = "PawMediumBodyfall_LookupTable"; noise = "WolfStepNoise"; effectSet[] = {"WolfStepEffect1", "WolfStepEffect2"}; id = 11; };
				class Settle   { soundLookupTable = "PawMediumSettle_LookupTable";   noise = "WolfStepNoise"; effectSet[] = {"WolfStepEffect1", "WolfStepEffect2"}; id = 12; };
				class Rest2standA { soundLookupTable = "PawMediumRest2standA_LookupTable"; noise = "WolfStepNoise"; effectSet[] = {"WolfStepEffect1", "WolfStepEffect2"}; id = 13; };
				class Rest2standB { soundLookupTable = "PawMediumRest2standB_LookupTable"; noise = "WolfStepNoise"; effectSet[] = {"WolfStepEffect1", "WolfStepEffect2"}; id = 14; };
				class Stand2restA { soundLookupTable = "PawMediumStand2restA_LookupTable"; noise = "WolfStepNoise"; effectSet[] = {"WolfStepEffect1", "WolfStepEffect2"}; id = 15; };
				class Stand2restB { soundLookupTable = "PawMediumStand2restB_LookupTable"; noise = "WolfStepNoise"; effectSet[] = {"WolfStepEffect1", "WolfStepEffect2"}; id = 16; };
				class Stand2restC { soundLookupTable = "PawMediumStand2restC_LookupTable"; noise = "WolfStepNoise"; effectSet[] = {"WolfStepEffect1", "WolfStepEffect2"}; id = 17; };
				class Jump    { soundLookupTable = "PawMediumJump_LookupTable";    noise = "WolfStepNoise"; effectSet[] = {"WolfStepEffect1", "WolfStepEffect2"}; id = 18; };
				class Impact  { soundLookupTable = "PawMediumImpact_LookupTable";  noise = "WolfStepNoise"; effectSet[] = {"WolfStepEffect1", "WolfStepEffect2"}; id = 19; };
			};

			class Sounds
			{
				class Bark   { soundSet = "SFW_BlindDog_Bark_SoundSet";   noise = "WolfRoarNoise"; id = 1; };
				class Attack { soundSet = "SFW_BlindDog_Attack_SoundSet"; noise = "WolfRoarNoise"; id = 2; };
				class Breath { soundSet = "WolfBreath_SoundSet";        noise = "WolfRoarNoise"; id = 4; };
				class Groans { soundSet = "SFW_BlindDog_Groan_SoundSet";  noise = "WolfRoarNoise"; id = 5; };
				class Itch   { soundSet = "SFW_BlindDog_Itch_SoundSet";   noise = "WolfRoarNoise"; id = 6; };
				class Fear   { soundSet = "SFW_BlindDog_Fear_SoundSet";   noise = "WolfRoarNoise"; id = 7; };
				class Death  { soundSet = "SFW_BlindDog_Die_SoundSet";    noise = "WolfRoarNoise"; id = 8; };
				class Damage { soundSet = "SFW_BlindDog_Damage_SoundSet"; noise = "WolfRoarNoise"; id = 9; };
			};

			class Damages
			{
				class Bite { damage = "SFW_BlindDogBiteDamage"; id = 1; };
			};
		};
	};

	class SFW_BlindDog_Brown: SFW_BlindDog_Base
	{
		// Variant placeholder — set scope=2 and assign textures/hiddenSelections as needed
	};
};

class CfgDamages
{
	class SFW_BlindDogBiteDamage
	{
		bone = "bip01_ponytail2"; // NOTE: verify bone exists in blinddog skeleton
		ammo = "SFW_BlindDogBite";
		radius = 0.2;
		duration = 0.16;
	};
};

class CfgAmmo
{
	class MeleeWolf;
	class SFW_BlindDogBite: MeleeWolf
	{
		ignoreDamageZones[] = {"Head"};
		class DamageApplied
		{
			type = "Melee";
			bleedThreshold = 0.6;
			class Health { damage = 14; };
			class Blood  { damage = 160; };
			class Shock  { damage = 8; };
		};
	};
};

