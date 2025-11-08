class CfgPatches
{
	class SFW_Medical
	{
		units[] = {""};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Gear_Medical"};
	};
};
class CfgVehicles
{
	class BandageDressing;
	class SFW_Medical_Bandage: BandageDressing
	{
		scope = 2;
		displayName = "Bandage";
		descriptionShort = "";
		model = "StalkerFWConfig\medical\bandage\Bandage.p3d";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 50;
					healthLevels[] = {{1,{"StalkerFWConfig\medical\bandage\data\Bandage.rvmat"}},{0.7,{"StalkerFWConfig\medical\bandage\data\Bandage.rvmat"}},{0.5,{"StalkerFWConfig\medical\bandage\data\Bandage_damage.rvmat"}},{0.3,{"StalkerFWConfig\medical\bandage\data\Bandage_damage.rvmat"}},{0,{"StalkerFWConfig\medical\bandage\data\Bandage_destruct.rvmat"}}};
				};
			};
		};
	};
};
