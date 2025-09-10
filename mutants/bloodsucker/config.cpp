class CfgPatches
{
	class SFW_Mutant_Bloodsucker
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
	class ZombieMaleBase;
	class SFW_Mutant_Bloodsucker: ZombieMaleBase
	{
		scope = 2;
		displayName = "Bloodsucker";
		model = "StalkerFWConfig\mutants\bloodsucker\bloodsucker.p3d";
		descriptionShort = "Mutant";
		hiddenSelections[] = {"mutant"};
		hiddenSelectionsTextures[] = {};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 2500;
					healthLevels[] = {{1,{"StalkerFWConfig\mutants\bloodsucker\data\bloodsucker1.rvmat"}},{0.7,{"StalkerFWConfig\mutants\bloodsucker\data\bloodsucker1.rvmat"}},{0.5,{"StalkerFWConfig\mutants\bloodsucker\data\bloodsucker_damage.rvmat"}},{0.3,{"StalkerFWConfig\mutants\bloodsucker\data\bloodsucker_damage.rvmat"}},{0,{"StalkerFWConfig\mutants\bloodsucker\data\bloodsucker_destruct.rvmat"}}};
				};
			};
			class DamageZones
			{
				class Head
				{
					class Health
					{
						hitpoints = 2500;
						transferToGlobalCoef = 1;
					};
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage = 0.1;
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
						hitpoints = 2500;
						transferToGlobalCoef = 1;
					};
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage = 0.1;
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
						hitpoints = 2500;
						transferToGlobalCoef = 0.33;
					};
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage = 0.1;
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
						hitpoints = 2500;
						transferToGlobalCoef = 0.33;
					};
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage = 2;
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
						hitpoints = 2500;
						transferToGlobalCoef = 0.33;
					};
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage = 0.1;
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
						hitpoints = 2500;
						transferToGlobalCoef = 0.33;
					};
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage = 2;
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
						hitpoints = 2500;
						transferToGlobalCoef = 0.1;
					};
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage = 2;
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
						hitpoints = 2500;
						transferToGlobalCoef = 0.1;
					};
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage = 2;
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
		aiAgentTemplate="BloodSucker";
		class enfanimsys
		{
			meshObject="StalkerFWConfig\mutants\bloodsucker\bloodsucker.xob";
			graphname="StalkerFWConfig\mutants\bloodsucker\anims\animgraph\bloodsucker.agr";
			defaultinstance="StalkerFWConfig\mutants\bloodsucker\anims\animgraph\bloodsucker.asi";
			startnode="AlignToTerrain_XRot";
			skeletonName="bloodsucker.xob";
		};
		class AnimEvents
		{
			class Steps
			{
				
			};
			class Sounds
			{
				class Attack_Light1
				{
					soundSet = "BloodSuckerHitHand_SoundSet";
					id = 10;
				};
				class Attack_Light2
				{
					soundSet = "BloodSuckerHitHand_SoundSet";
					id = 11;
				};
				class Attack_Heavy1
				{
					soundSet = "BloodSuckerHitHand_SoundSet";
					id = 12;
				};
				class Attack_Heavy2
				{
					soundSet = "BloodSuckerHitHand_SoundSet";
					id = 13;
				};
				class TwoHands
				{
					soundSet = "BloodSuckerHitHand_SoundSet";
					id = 14;
				};
			};
			class SoundVoice
			{
				class Idle
				{
					soundSet = "BloodSuckerIdle_SoundSet";
					id = 0;
				};
				class LightHit
				{
					soundSet = "BloodSuckerHit_SoundSet";
					id = 1;
				};
				class HeavyHit
				{
					soundSet = "BloodSuckerHit_SoundSet";
					id = 2;
				};
				class Attack
				{
					soundSet = "BloodSuckerAttack_SoundSet";
					id = 3;
				};
				class Jump
				{
					soundSet = "ZmbF_Normal_Jump_Soundset";
					id = 4;
				};
				class Land
				{
					soundSet = "ZmbF_Normal_Land_Soundset";
					id = 5;
				};
				class CallToArmsShort
				{
					soundSet = "BloodSuckerGrowl_SoundSet";
					id = 6;
				};
			};
		};
	};
};
