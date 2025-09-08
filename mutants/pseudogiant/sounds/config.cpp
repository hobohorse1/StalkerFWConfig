class CfgPatches
{
	class SFW_Mutants_Pseudogiant_Sounds
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_data_aiconfigs",
			"DZ_AI"
		};
	};
};

class CfgSoundShaders
{
	class SFW_Pseudogiant_Roar_SoundShader
	{
		samples[] = {{"StalkerFWConfig\mutants\pseudogiant\sounds\giant_underground_0",1.0}};
		volume = 2;
		range = 200;
	};
	class SFW_Pseudogiant_Attack_Special_Hit_SoundShader
	{
		samples[] = {{"StalkerFWConfig\mutants\pseudogiant\sounds\giant_hit",1.0}};
		volume = 1.5;
		range = 200;
	};
	class SFW_Pseudogiant_Attack_Special_SoundShader
	{
		samples[] = {{"StalkerFWConfig\mutants\pseudogiant\sounds\giant_threaten_0",0.5},{"StalkerFWConfig\mutants\pseudogiant\sounds\giant_threaten_0",0.5}};
		volume = 1.0;
		range = 100;
	};
	class SFW_Pseudogiant_Attack_Slash_SoundShader
	{
		samples[] = {{"StalkerFWConfig\mutants\pseudogiant\sounds\giant_attack_0",1.0}};
		volume = 1;
		range = 60;
	};
	class SFW_Pseudogiant_Attack_Bite_SoundShader
	{
		samples[] = {{"StalkerFWConfig\mutants\pseudogiant\sounds\giant_attack_1",1.0}};
		volume = 1;
		range = 60;
	};
	class SFW_Pseudogiant_Death_SoundShader
	{
		samples[] = {{"StalkerFWConfig\mutants\pseudogiant\sounds\giant_death_0",0.5},{"StalkerFWConfig\mutants\pseudogiant\sounds\giant_death_1",0.5}};
		volume = 1.4;
		range = 100;
	};
	class SFW_Pseudogiant_Idle_SoundShader
	{
		samples[] = {{"StalkerFWConfig\mutants\pseudogiant\sounds\giant_idle_0",0.5},{"StalkerFWConfig\mutants\pseudogiant\sounds\giant_idle_1",0.5}};
		volume = 1;
		range = 100;
	};
	class SFW_Pseudogiant_Aggressive_SoundShader
	{
		samples[] = {{"StalkerFWConfig\mutants\pseudogiant\sounds\giant_aggressive_0",0.5},{"StalkerFWConfig\mutants\pseudogiant\sounds\giant_aggressive_1",0.5}};
		volume = 1;
		range = 100;
	};
	class SFW_Pseudogiant_Breath_SoundShader
	{
		samples[] = {{"StalkerFWConfig\mutants\pseudogiant\sounds\giant_breath_0",0.33},{"StalkerFWConfig\mutants\pseudogiant\sounds\giant_breath_1",0.33},{"StalkerFWConfig\mutants\pseudogiant\sounds\giant_breath_2",0.33}};
		volume = 1;
		range = 100;
	};
	class SFW_Pseudogiant_Step_SoundShader
	{
		samples[] = {{"StalkerFWConfig\mutants\pseudogiant\sounds\giant_step_0",0.65},{"StalkerFWConfig\mutants\pseudogiant\sounds\giant_step_1",0.35}};
		volume = 0.3;
		range = 70;
	};
};
class CfgSoundSets
{
	class Zmb_VoiceFX_Base_SoundSet;
	class baseFootstepsZmb_SoundSet;
	class SFW_Pseudogiant_Roar_Soundset: Zmb_VoiceFX_Base_SoundSet
	{
		soundShaders[] = {"SFW_Pseudogiant_Roar_SoundShader"};
		frequencyFactor = 0.92;
	};
	class SFW_Pseudogiant_Attack_Slash_Soundset: Zmb_VoiceFX_Base_SoundSet
	{
		soundShaders[] = {"SFW_Pseudogiant_Attack_Slash_SoundShader"};
		frequencyFactor = 0.92;
	};
	class SFW_Pseudogiant_Attack_Bite_Soundset: Zmb_VoiceFX_Base_SoundSet
	{
		soundShaders[] = {"SFW_Pseudogiant_Attack_Bite_SoundShader"};
		frequencyFactor = 0.92;
	};
	class SFW_Pseudogiant_Death_Soundset: Zmb_VoiceFX_Base_SoundSet
	{
		soundShaders[] = {"SFW_Pseudogiant_Death_SoundShader"};
		frequencyFactor = 0.92;
	};
	class SFW_Pseudogiant_Breath_Soundset: Zmb_VoiceFX_Base_SoundSet
	{
		soundShaders[] = {"SFW_Pseudogiant_Breath_SoundShader"};
		frequencyFactor = 0.92;
	};
	class SFW_Pseudogiant_Aggressive_Soundset: Zmb_VoiceFX_Base_SoundSet
	{
		soundShaders[] = {"SFW_Pseudogiant_Aggressive_SoundShader"};
		frequencyFactor = 0.92;
	};
	class SFW_Pseudogiant_Idle_Soundset: Zmb_VoiceFX_Base_SoundSet
	{
		soundShaders[] = {"SFW_Pseudogiant_Idle_SoundShader"};
		frequencyFactor = 0.92;
	};
	class SFW_Pseudogiant_Attack_Special_Soundset: Zmb_VoiceFX_Base_SoundSet
	{
		soundShaders[] = {"SFW_Pseudogiant_Attack_Special_SoundShader"};
		frequencyFactor = 0.92;
	};
	class SFW_Pseudogiant_Attack_Special_Hit_Soundset: Zmb_VoiceFX_Base_SoundSet
	{
		soundShaders[] = {"SFW_Pseudogiant_Attack_Special_Hit_SoundShader"};
		frequencyFactor = 0.92;
	};
	class SFW_Pseudogiant_Step_Soundset: baseFootstepsZmb_SoundSet
	{
		soundShaders[] = {"SFW_Pseudogiant_Step_SoundShader"};
		frequencyFactor = 0.92;
	};
	class SFW_Pseudogiant_Base_CalmIdle_SoundSet: SFW_Pseudogiant_Breath_Soundset{};
	class SFW_Pseudogiant_Base_CalmMove_SoundSet: SFW_Pseudogiant_Breath_Soundset
	{
		delay = 2;
		delayRandomizer = 1;
		startDelay = 3;
		startDelayRandomizer = 1;
		frequencyFactor = 0.92;
	};
	class SFW_Pseudogiant_Base_DisturbedIdle_SoundSet: SFW_Pseudogiant_Aggressive_Soundset{};
	class SFW_Pseudogiant_Base_ChaseMove_SoundSet: SFW_Pseudogiant_Aggressive_Soundset
	{
		delay = 2;
		delayRandomizer = 1;
		startDelay = 3;
		startDelayRandomizer = 1;
		frequencyFactor = 0.92;
	};
	class SFW_Pseudogiant_Base_AlertedIdle_SoundSet: SFW_Pseudogiant_Aggressive_Soundset{};
	class SFW_Pseudogiant_Base_AlertedMove_SoundSet: SFW_Pseudogiant_Aggressive_Soundset
	{
		delay = 2;
		delayRandomizer = 1;
	};
};

class CfgSoundTables
{
	class CfgStepSoundTables
	{
		class SFW_Pseudogiant_Step_LookupTable
		{
			class walkErc_asphalt_ext
			{
				surface = "asphalt_ext";
				soundSets[] = {"SFW_Pseudogiant_Step_Soundset"};
			};
			class walkErc_asphalt_destroyed_ext
			{
				surface = "asphalt_destroyed_ext";
				soundSets[] = {"SFW_Pseudogiant_Step_Soundset"};
			};
			class walkErc_asphalt_int
			{
				surface = "asphalt_int";
				soundSets[] = {"SFW_Pseudogiant_Step_Soundset"};
			};
			class walkErc_asphalt_destroyed_int
			{
				surface = "asphalt_destroyed_int";
				soundSets[] = {"SFW_Pseudogiant_Step_Soundset"};
			};
			class walkErc_asphalt_felt_ext
			{
				surface = "asphalt_felt_ext";
				soundSets[] = {"SFW_Pseudogiant_Step_Soundset"};
			};
			class walkErc_asphalt_felt_int
			{
				surface = "asphalt_felt_int";
				soundSets[] = {"SFW_Pseudogiant_Step_Soundset"};
			};
			class walkErc_cp_broadleaf_dense1
			{
				surface = "cp_broadleaf_dense1";
				soundSets[] = {"SFW_Pseudogiant_Step_Soundset"};
			};
			class walkErc_cp_broadleaf_dense2
			{
				surface = "cp_broadleaf_dense2";
				soundSets[] = {"SFW_Pseudogiant_Step_Soundset"};
			};
			class walkErc_cp_broadleaf_sparse1
			{
				surface = "cp_broadleaf_sparse1";
				soundSets[] = {"SFW_Pseudogiant_Step_Soundset"};
			};
			class walkErc_cp_broadleaf_sparse2
			{
				surface = "cp_broadleaf_sparse2";
				soundSets[] = {"SFW_Pseudogiant_Step_Soundset"};
			};
			class walkErc_cp_conifer_common1
			{
				surface = "cp_conifer_common1";
				soundSets[] = {"SFW_Pseudogiant_Step_Soundset"};
			};
			class walkErc_cp_conifer_common2
			{
				surface = "cp_conifer_common2";
				soundSets[] = {"SFW_Pseudogiant_Step_Soundset"};
			};
			class walkErc_cp_conifer_moss1
			{
				surface = "cp_conifer_moss1";
				soundSets[] = {"SFW_Pseudogiant_Step_Soundset"};
			};
			class walkErc_cp_conifer_moss2
			{
				surface = "cp_conifer_moss2";
				soundSets[] = {"SFW_Pseudogiant_Step_Soundset"};
			};
			class walkErc_cp_concrete1
			{
				surface = "cp_concrete1";
				soundSets[] = {"SFW_Pseudogiant_Step_Soundset"};
			};
			class walkErc_cp_concrete2
			{
				surface = "cp_concrete2";
				soundSets[] = {"SFW_Pseudogiant_Step_Soundset"};
			};
			class walkErc_concrete_ext
			{
				surface = "concrete_ext";
				soundSets[] = {"SFW_Pseudogiant_Step_Soundset"};
			};
			class walkErc_concrete_stairs_ext
			{
				surface = "concrete_stairs_ext";
				soundSets[] = {"SFW_Pseudogiant_Step_Soundset"};
			};
			class walkErc_concrete_int
			{
				surface = "concrete_int";
				soundSets[] = {"SFW_Pseudogiant_Step_Soundset"};
			};
			class walkErc_concrete_stairs_int
			{
				surface = "concrete_stairs_int";
				soundSets[] = {"SFW_Pseudogiant_Step_Soundset"};
			};
			class walkErc_ceramic_tiles_ext
			{
				surface = "ceramic_tiles_ext";
				soundSets[] = {"SFW_Pseudogiant_Step_Soundset"};
			};
			class walkErc_ceramic_tiles_int
			{
				surface = "ceramic_tiles_int";
				soundSets[] = {"SFW_Pseudogiant_Step_Soundset"};
			};
			class walkErc_ceramic_tiles_roof_ext
			{
				surface = "ceramic_tiles_roof_ext";
				soundSets[] = {"SFW_Pseudogiant_Step_Soundset"};
			};
			class walkErc_ceramic_tiles_roof_int
			{
				surface = "ceramic_tiles_roof_int";
				soundSets[] = {"SFW_Pseudogiant_Step_Soundset"};
			};
			class walkErc_cp_dirt
			{
				surface = "cp_dirt";
				soundSets[] = {"SFW_Pseudogiant_Step_Soundset"};
			};
			class walkErc_dirt_ext
			{
				surface = "dirt_ext";
				soundSets[] = {"SFW_Pseudogiant_Step_Soundset"};
			};
			class walkErc_dirt_int
			{
				surface = "dirt_int";
				soundSets[] = {"SFW_Pseudogiant_Step_Soundset"};
			};
			class walkErc_cp_grass
			{
				surface = "cp_grass";
				soundSets[] = {"SFW_Pseudogiant_Step_Soundset"};
			};
			class walkErc_grass_dry_ext
			{
				surface = "grass_dry_ext";
				soundSets[] = {"SFW_Pseudogiant_Step_Soundset"};
			};
			class walkErc_grass_dry_int
			{
				surface = "grass_dry_int";
				soundSets[] = {"SFW_Pseudogiant_Step_Soundset"};
			};
			class walkErc_cp_grass_tall
			{
				surface = "cp_grass_tall";
				soundSets[] = {"SFW_Pseudogiant_Step_Soundset"};
			};
			class walkErc_cp_gravel
			{
				surface = "cp_gravel";
				soundSets[] = {"SFW_Pseudogiant_Step_Soundset"};
			};
			class walkErc_gravel_small_ext
			{
				surface = "gravel_small_ext";
				soundSets[] = {"SFW_Pseudogiant_Step_Soundset"};
			};
			class walkErc_gravel_small_int
			{
				surface = "gravel_small_int";
				soundSets[] = {"SFW_Pseudogiant_Step_Soundset"};
			};
			class walkErc_gravel_large_ext
			{
				surface = "gravel_large_ext";
				soundSets[] = {"SFW_Pseudogiant_Step_Soundset"};
			};
			class walkErc_gravel_large_int
			{
				surface = "gravel_large_int";
				soundSets[] = {"SFW_Pseudogiant_Step_Soundset"};
			};
			class walkErc_lino_ext
			{
				surface = "lino_ext";
				soundSets[] = {"SFW_Pseudogiant_Step_Soundset"};
			};
			class walkErc_lino_int
			{
				surface = "lino_int";
				soundSets[] = {"SFW_Pseudogiant_Step_Soundset"};
			};
			class walkErc_metal_thick_ext
			{
				surface = "metal_thick_ext";
				soundSets[] = {"SFW_Pseudogiant_Step_Soundset"};
			};
			class walkErc_metal_stairs_ext
			{
				surface = "metal_stairs_ext";
				soundSets[] = {"SFW_Pseudogiant_Step_Soundset"};
			};
			class walkErc_metal_thick_int
			{
				surface = "metal_thick_int";
				soundSets[] = {"SFW_Pseudogiant_Step_Soundset"};
			};
			class walkErc_metal_stairs_int
			{
				surface = "metal_stairs_int";
				soundSets[] = {"SFW_Pseudogiant_Step_Soundset"};
			};
			class walkErc_metal_thin_ext
			{
				surface = "metal_thin_ext";
				soundSets[] = {"SFW_Pseudogiant_Step_Soundset"};
			};
			class walkErc_metal_thin_int
			{
				surface = "metal_thin_int";
				soundSets[] = {"SFW_Pseudogiant_Step_Soundset"};
			};
			class walkErc_metal_thin_mesh_ext
			{
				surface = "metal_thin_mesh_ext";
				soundSets[] = {"SFW_Pseudogiant_Step_Soundset"};
			};
			class walkErc_metal_thin_mesh_int
			{
				surface = "metal_thin_mesh_int";
				soundSets[] = {"SFW_Pseudogiant_Step_Soundset"};
			};
			class walkErc_cp_rock
			{
				surface = "cp_rock";
				soundSets[] = {"SFW_Pseudogiant_Step_Soundset"};
			};
			class walkErc_rubble_large_ext
			{
				surface = "rubble_large_ext";
				soundSets[] = {"SFW_Pseudogiant_Step_Soundset"};
			};
			class walkErc_rubble_large_int
			{
				surface = "rubble_large_int";
				soundSets[] = {"SFW_Pseudogiant_Step_Soundset"};
			};
			class walkErc_rubble_small_ext
			{
				surface = "rubble_small_ext";
				soundSets[] = {"SFW_Pseudogiant_Step_Soundset"};
			};
			class walkErc_rubble_small_int
			{
				surface = "rubble_small_int";
				soundSets[] = {"SFW_Pseudogiant_Step_Soundset"};
			};
			class walkErc_sand_ext
			{
				surface = "sand_ext";
				soundSets[] = {"SFW_Pseudogiant_Step_Soundset"};
			};
			class walkErc_sand_int
			{
				surface = "sand_int";
				soundSets[] = {"SFW_Pseudogiant_Step_Soundset"};
			};
			class walkErc_stone_ext
			{
				surface = "stone_ext";
				soundSets[] = {"SFW_Pseudogiant_Step_Soundset"};
			};
			class walkErc_stone_int
			{
				surface = "stone_int";
				soundSets[] = {"SFW_Pseudogiant_Step_Soundset"};
			};
			class walkErc_textile_carpet_ext
			{
				surface = "textile_carpet_ext";
				soundSets[] = {"SFW_Pseudogiant_Step_Soundset"};
			};
			class walkErc_textile_carpet_int
			{
				surface = "textile_carpet_int";
				soundSets[] = {"SFW_Pseudogiant_Step_Soundset"};
			};
			class walkErc_trash_ext
			{
				surface = "trash_ext";
				soundSets[] = {"SFW_Pseudogiant_Step_Soundset"};
			};
			class walkErc_trash_int
			{
				surface = "trash_int";
				soundSets[] = {"SFW_Pseudogiant_Step_Soundset"};
			};
			class walkErc_wood_parquet_ext
			{
				surface = "wood_parquet_ext";
				soundSets[] = {"SFW_Pseudogiant_Step_Soundset"};
			};
			class walkErc_wood_parquet_int
			{
				surface = "wood_parquet_int";
				soundSets[] = {"SFW_Pseudogiant_Step_Soundset"};
			};
			class walkErc_wood_planks_ext
			{
				surface = "wood_planks_ext";
				soundSets[] = {"SFW_Pseudogiant_Step_Soundset"};
			};
			class walkErc_wood_planks_stairs_ext
			{
				surface = "wood_planks_stairs_ext";
				soundSets[] = {"SFW_Pseudogiant_Step_Soundset"};
			};
			class walkErc_wood_planks_int
			{
				surface = "wood_planks_int";
				soundSets[] = {"SFW_Pseudogiant_Step_Soundset"};
			};
			class walkErc_wood_planks_stairs_int
			{
				surface = "wood_planks_stairs_int";
				soundSets[] = {"SFW_Pseudogiant_Step_Soundset"};
			};
			class walkErc_fresh_water_ext
			{
				surface = "fresh_water_ext";
				soundSets[] = {"SFW_Pseudogiant_Step_Soundset"};
			};
			class walkErc_fresh_water_int
			{
				surface = "fresh_water_int";
				soundSets[] = {"SFW_Pseudogiant_Step_Soundset"};
			};
			class walkErc_water
			{
				surface = "water";
				soundSets[] = {"SFW_Pseudogiant_Step_Soundset"};
			};
		};
	};
};