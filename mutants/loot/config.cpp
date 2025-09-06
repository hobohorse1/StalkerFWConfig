class CfgPatches
{
	class SFW_Mutant_Loot
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Characters","SFW_Mutant_Zombified_Military","SFW_Mutant_Zombified_Loner","SFW_Mutant_Zombified_Eco"};
	};
};
class CfgVehicles
{
	class ZombieMaleBase;
	class AnimalBase;
	class SFW_Mutant_Zombified_Loner: ZombieMaleBase
	{	
	    class Cargo
        {
            itemsCargoSize[] = {6,5};
            allowOwnedCargoManipulation = 0;
            openable = 0;
        };
        class MutantParts
        {
            parts[] = {"MoneyRuble5000","MoneyRuble1000", "AmmoBox_00buck_10rnd","AmmoBox_00buck_10rnd","SFW_Food_Tourist"};
            chances[] = {5, 25, 30, 30, 30, 30, 5};
        };
	};
	
	class SFW_Mutant_Zombified_Military: ZombieMaleBase
	{	
	    class Cargo
        {
            itemsCargoSize[] = {5,8};
            allowOwnedCargoManipulation = 0;
            openable = 0;
        };
        class MutantParts
        {
            parts[] = {"RGD5Grenade","AmmoBox_762x39_20Rnd", "AmmoBox_545x39_20Rnd","SFW_Patch_Military_2"};
            chances[] = {5, 30, 30, 5};
        };
	};
	
	class SFW_Mutant_Zombified_Eco: ZombieMaleBase
	{	
	    class Cargo
        {
            itemsCargoSize[] = {5,8};
            allowOwnedCargoManipulation = 0;
            openable = 0;
        };
        class MutantParts
        {
            parts[] = {};
            chances[] = {5, 5};
        };
	};


};
