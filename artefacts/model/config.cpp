class CfgPatches
{
	class SFW_Artefacts
	{
		units[]={};
		weapons[] = {};
		requiredVersion=0.1;
		requiredAddons[] = {"DZ_Data"};
	};
};

class CfgVehicles
{
	class Inventory_Base;
	class SFW_Item_Artefact_Base: Inventory_Base
	{
		scope=0;
		displayName="Artefact (Base)";
		descriptionShort="Base class for SFW artefacts.";
		model="SFW_Artefacts/data/artefact_base.p3d";
		rotationFlags=0;
		itemSize[]={2,2};
		weight=200;
		absorbency=0;
		hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={""};
		hiddenSelectionsMaterials[]={""};
	};

	class SFW_Item_Artefact_Battery: SFW_Item_Artefact_Base 
	{ 
		scope=2; displayName=""; 
		descriptionShort=""; 
		model="StalkerFWConfig/artefacts/model/Battery/Battery.p3d"; 
		rotationFlags=0; 
		weight=200; 
		itemSize[]={2,2}; 
		hiddenSelections[] = {"zbytek"}; 
		hiddenSelectionsTextures[] = {""}; 
		hiddenSelectionsMaterials[] = {""}; 
	};
	
	class SFW_Item_Artefact_Bubble: SFW_Item_Artefact_Base 
	{ 
		scope=2; displayName=""; 
		descriptionShort=""; 
		model="StalkerFWConfig/artefacts/model/Bubble/Bubble.p3d"; 
		rotationFlags=0; 
		weight=200; 
		itemSize[]={2,2}; 
		hiddenSelections[] = {"zbytek"}; 
		hiddenSelectionsTextures[] = {""}; 
		hiddenSelectionsMaterials[] = {""}; 
	};
	
	class SFW_Item_Artefact_Compass: SFW_Item_Artefact_Base 
	{ 
		scope=2; 
		displayName=""; 
		descriptionShort=""; 
		model="StalkerFWConfig/artefacts/model/Compass/Compass.p3d"; 
		rotationFlags=0; 
		weight=200; 
		itemSize[]={2,2}; 
		hiddenSelections[] = {"zbytek"}; 
		hiddenSelectionsTextures[] = {""}; 
		hiddenSelectionsMaterials[] = {""}; 
	};
	
	class SFW_Item_Artefact_Crystal: SFW_Item_Artefact_Base 
	{ 
		scope=2; 
		displayName=""; 
		descriptionShort=""; 
		model="StalkerFWConfig/artefacts/model/Crystal/Crystal.p3d"; 
		rotationFlags=0; 
		weight=200; 
		itemSize[]={2,2}; 
		hiddenSelections[] = {"zbytek"}; 
		hiddenSelectionsTextures[] = {""}; 
		hiddenSelectionsMaterials[] = {""}; 
	};
	
	class SFW_Item_Artefact_CrystalThorn: SFW_Item_Artefact_Base 
	{ 
		scope=2; 
		displayName=""; 
		descriptionShort=""; 
		model="StalkerFWConfig/artefacts/model/CrystalThorn/CrystalThorn.p3d"; 
		rotationFlags=0; 
		weight=200; 
		itemSize[]={2,2}; 
		hiddenSelections[] = {"zbytek"}; 
		hiddenSelectionsTextures[] = {""}; 
		hiddenSelectionsMaterials[] = {""}; 
	};
	
	class SFW_Item_Artefact_Drop: SFW_Item_Artefact_Base 
	{ 
		scope=2; displayName=""; 
		descriptionShort=""; 
		model="StalkerFWConfig/artefacts/model/Drop/Drop.p3d"; 
		rotationFlags=0; 
		weight=200; 
		itemSize[]={2,2}; 
		hiddenSelections[] = {"zbytek"}; 
		hiddenSelectionsTextures[] = {""};
		hiddenSelectionsMaterials[] = {""}; 
	};
	
	class SFW_Item_Artefact_Dummy: SFW_Item_Artefact_Base 
	{ 
		scope=2; 
		displayName=""; 
		descriptionShort=""; 
		model="StalkerFWConfig/artefacts/model/Dummy/Dummy.p3d"; 
		rotationFlags=0; 
		weight=200; 
		itemSize[]={2,2}; 
		hiddenSelections[] = {"zbytek"}; 
		hiddenSelectionsTextures[] = {""}; 
		hiddenSelectionsMaterials[] = {""}; 
	};
	
	class SFW_Item_Artefact_Eye: SFW_Item_Artefact_Base 
	{ 
	scope=2; 
	displayName=""; 
	descriptionShort=""; 
	model="StalkerFWConfig/artefacts/model/Eye/Eye.p3d"; 
	rotationFlags=0; 
	weight=200; 
	itemSize[]={2,2}; 
	hiddenSelections[] = {"zbytek"}; 
	hiddenSelectionsTextures[] = {""}; 
	hiddenSelectionsMaterials[] = {""}; 
	};
	
	class SFW_Item_Artefact_FireBall: SFW_Item_Artefact_Base 
	{ 
		scope=2; 
		displayName=""; 
		descriptionShort=""; 
		model="StalkerFWConfig/artefacts/model/FireBall/FireBall.p3d"; 
		rotationFlags=0; 
		weight=200; 
		itemSize[]={2,2}; 
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {""}; 
		hiddenSelectionsMaterials[] = {""}; 
	};
	
	class SFW_Item_Artefact_Flame: SFW_Item_Artefact_Base 
	{		
		scope=2; 
		displayName=""; 
		descriptionShort=""; 
		model="StalkerFWConfig/artefacts/model/Flame/Flame.p3d"; 
		rotationFlags=0; 
		weight=200; 
		itemSize[]={2,2}; 
		hiddenSelections[] = {"zbytek"}; 
		hiddenSelectionsTextures[] = {""}; 
		hiddenSelectionsMaterials[] = {""}; 
	};
	
	class SFW_Item_Artefact_Flash: SFW_Item_Artefact_Base 
	{ 
		scope=2; 
		displayName=""; 
		descriptionShort=""; 
		model="StalkerFWConfig/artefacts/model/Flash/Flash.p3d"; 
		rotationFlags=0; 
		weight=200; 
		itemSize[]={2,2}; 
		hiddenSelections[] = {"zbytek"}; 
		hiddenSelectionsTextures[] = {""}; hiddenSelectionsMaterials[] = {""}; 
	};
	
	class SFW_Item_Artefact_Flower: SFW_Item_Artefact_Base 
	{ 
		scope=2; 
		displayName=""; 
		descriptionShort=""; 
		model="StalkerFWConfig/artefacts/model/Flower/Flower.p3d"; 
		rotationFlags=0; 
		weight=200; 
		itemSize[]={2,2}; 
		hiddenSelections[] = {"zbytek"}; 
		hiddenSelectionsTextures[] = {""}; 
		hiddenSelectionsMaterials[] = {""}; 
	};
	
	class SFW_Item_Artefact_GoldFish: SFW_Item_Artefact_Base 
	{ 
		scope=2; 
		displayName=""; 
		descriptionShort=""; 
		model="StalkerFWConfig/artefacts/model/GoldFish/GoldFish.p3d"; 
		rotationFlags=0; 
		weight=200; 
		itemSize[]={2,2}; 
		hiddenSelections[] = {"zbytek"}; 
		hiddenSelectionsTextures[] = {""}; hiddenSelectionsMaterials[] = {""}; 
	};
	
	class SFW_Item_Artefact_GravyInsulator: SFW_Item_Artefact_Base 
	{ 
		scope=2; 
		displayName=""; descriptionShort=""; 
		model="StalkerFWConfig/artefacts/model/GravyInsulator/GravyInsulator.p3d"; 
		rotationFlags=0; 
		weight=200; 
		itemSize[]={2,2}; 
		hiddenSelections[] = {"zbytek"}; 
		hiddenSelectionsTextures[] = {""}; 
		hiddenSelectionsMaterials[] = {""};
	};
	
	class SFW_Item_Artefact_JellyFish: SFW_Item_Artefact_Base 
	{ 
		scope=2; 
		displayName=""; 
		descriptionShort=""; 
		model="StalkerFWConfig/artefacts/model/JellyFish/JellyFish.p3d"; 
		rotationFlags=0; 
		weight=200; 
		itemSize[]={2,2}; 
		hiddenSelections[] = {"zbytek"}; 
		hiddenSelectionsTextures[] = {""}; 
		hiddenSelectionsMaterials[] = {""};
	};
	
	class SFW_Item_Artefact_Kolobok: SFW_Item_Artefact_Base 
	{ 
		scope=2; 
		displayName=""; 
		descriptionShort=""; 
		model="StalkerFWConfig/artefacts/model/Kolobok/Kolobok.p3d"; 
		rotationFlags=0; 
		weight=200; 
		itemSize[]={2,2}; 
		hiddenSelections[] = {"zbytek"}; 
		hiddenSelectionsTextures[] = {""}; 
		hiddenSelectionsMaterials[] = {""};
	};
	
        class SFW_Item_Artefact_Lens: SFW_Item_Artefact_Base
        {
                scope=2;
                displayName="";
                descriptionShort="";
                model="StalkerFWConfig/artefacts/model/Lens/Lens.p3d";
                rotationFlags=0;
                weight=200;
                itemSize[]={2,2};
                hiddenSelections[] = {"zbytek"};
                hiddenSelectionsTextures[] = {""};
                hiddenSelectionsMaterials[] = {""};
        };

        class SFW_Item_Artefact_Light: SFW_Item_Artefact_Base
        {
                scope=2;
                displayName="";
                descriptionShort="";
                model="StalkerFWConfig/artefacts/model/Light/Light.p3d";
                rotationFlags=0;
                weight=200;
                itemSize[]={2,2};
                hiddenSelections[] = {"zbytek"};
                hiddenSelectionsTextures[] = {""};
                hiddenSelectionsMaterials[] = {""};
        };

        class SFW_Item_Artefact_MamasBeads: SFW_Item_Artefact_Base
        {
                scope=2;
                displayName="";
                descriptionShort="";
                model="StalkerFWConfig/artefacts/model/MamasBeads/MamasBeads.p3d";
                rotationFlags=0;
                weight=200;
                itemSize[]={2,2};
                hiddenSelections[] = {"zbytek"};
                hiddenSelectionsTextures[] = {""};
                hiddenSelectionsMaterials[] = {""};
        };

        class SFW_Item_Artefact_MeatChunk: SFW_Item_Artefact_Base
        {
                scope=2;
                displayName="";
                descriptionShort="";
                model="StalkerFWConfig/artefacts/model/MeatChunk/MeatChunk.p3d";
                rotationFlags=0;
                weight=200;
                itemSize[]={2,2};
                hiddenSelections[] = {"zbytek"};
                hiddenSelectionsTextures[] = {""};
                hiddenSelectionsMaterials[] = {""};
        };

        class SFW_Item_Artefact_Monolith: SFW_Item_Artefact_Base
        {
                scope=2;
                displayName="";
                descriptionShort="";
                model="StalkerFWConfig/artefacts/model/Monolith/Monolith.p3d";
                rotationFlags=0;
                weight=200;
                itemSize[]={2,2};
                hiddenSelections[] = {"zbytek"};
                hiddenSelectionsTextures[] = {""};
                hiddenSelectionsMaterials[] = {""};
        };

        class SFW_Item_Artefact_NanoCell: SFW_Item_Artefact_Base
        {
                scope=2;
                displayName="";
                descriptionShort="";
                model="StalkerFWConfig/artefacts/model/NanoCell/NanoCell.p3d";
                rotationFlags=0;
                weight=200;
                itemSize[]={2,2};
                hiddenSelections[] = {"zbytek"};
                hiddenSelectionsTextures[] = {""};
                hiddenSelectionsMaterials[] = {""};
        };

        class SFW_Item_Artefact_NightStar: SFW_Item_Artefact_Base
        {
                scope=2;
                displayName="";
                descriptionShort="";
                model="StalkerFWConfig/artefacts/model/NightStar/NightStar.p3d";
                rotationFlags=0;
                weight=200;
                itemSize[]={2,2};
                hiddenSelections[] = {"zbytek"};
                hiddenSelectionsTextures[] = {""};
                hiddenSelectionsMaterials[] = {""};
        };

        class SFW_Item_Artefact_Oasis: SFW_Item_Artefact_Base
        {
                scope=2;
                displayName="";
                descriptionShort="";
                model="StalkerFWConfig/artefacts/model/Oasis/Oasis.p3d";
                rotationFlags=0;
                weight=200;
                itemSize[]={2,2};
                hiddenSelections[] = {"zbytek"};
                hiddenSelectionsTextures[] = {""};
                hiddenSelectionsMaterials[] = {""};
        };

        class SFW_Item_Artefact_SeaUrchin: SFW_Item_Artefact_Base
        {
                scope=2;
                displayName="";
                descriptionShort="";
                model="StalkerFWConfig/artefacts/model/SeaUrchin/SeaUrchin.p3d";
                rotationFlags=0;
                weight=200;
                itemSize[]={2,2};
                hiddenSelections[] = {"zbytek"};
                hiddenSelectionsTextures[] = {""};
                hiddenSelectionsMaterials[] = {""};
        };

        class SFW_Item_Artefact_ShineOfTheForest: SFW_Item_Artefact_Base
        {
                scope=2;
                displayName="";
                descriptionShort="";
                model="StalkerFWConfig/artefacts/model/ShineOfTheForest/ShineOfTheForest.p3d";
                rotationFlags=0;
                weight=200;
                itemSize[]={2,2};
                hiddenSelections[] = {"zbytek"};
                hiddenSelectionsTextures[] = {""};
                hiddenSelectionsMaterials[] = {""};
        };

        class SFW_Item_Artefact_SnowFlake: SFW_Item_Artefact_Base
        {
                scope=2;
                displayName="";
                descriptionShort="";
                model="StalkerFWConfig/artefacts/model/SnowFlake/SnowFlake.p3d";
                rotationFlags=0;
                weight=200;
                itemSize[]={2,2};
                hiddenSelections[] = {"zbytek"};
                hiddenSelectionsTextures[] = {""};
                hiddenSelectionsMaterials[] = {""};
        };

        class SFW_Item_Artefact_Soul: SFW_Item_Artefact_Base
        {
                scope=2;
                displayName="";
                descriptionShort="";
                model="StalkerFWConfig/artefacts/model/Soul/Soul.p3d";
                rotationFlags=0;
                weight=200;
                itemSize[]={2,2};
                hiddenSelections[] = {"zbytek"};
                hiddenSelectionsTextures[] = {""};
                hiddenSelectionsMaterials[] = {""};
        };

        class SFW_Item_Artefact_SparklerSpring: SFW_Item_Artefact_Base
        {
                scope=2;
                displayName="";
                descriptionShort="";
                model="StalkerFWConfig/artefacts/model/SparklerSpring/SparklerSpring.p3d";
                rotationFlags=0;
                weight=200;
                itemSize[]={2,2};
                hiddenSelections[] = {"zbytek"};
                hiddenSelectionsTextures[] = {""};
                hiddenSelectionsMaterials[] = {""};
        };

        class SFW_Item_Artefact_SteeringWheel: SFW_Item_Artefact_Base
        {
                scope=2;
                displayName="";
                descriptionShort="";
                model="StalkerFWConfig/artefacts/model/SteeringWheel/SteeringWheel.p3d";
                rotationFlags=0;
                weight=200;
                itemSize[]={2,2};
                hiddenSelections[] = {"zbytek"};
                hiddenSelectionsTextures[] = {""};
                hiddenSelectionsMaterials[] = {""};
        };

        class SFW_Item_Artefact_StoneBlood: SFW_Item_Artefact_Base
        {
                scope=2;
                displayName="";
                descriptionShort="";
                model="StalkerFWConfig/artefacts/model/StoneBlood/StoneBlood.p3d";
                rotationFlags=0;
                weight=200;
                itemSize[]={2,2};
                hiddenSelections[] = {"zbytek"};
                hiddenSelectionsTextures[] = {""};
                hiddenSelectionsMaterials[] = {""};
        };

        class SFW_Item_Artefact_StoneFlower: SFW_Item_Artefact_Base
        {
                scope=2;
                displayName="";
                descriptionShort="";
                model="StalkerFWConfig/artefacts/model/StoneFlower/StoneFlower.p3d";
                rotationFlags=0;
                weight=200;
                itemSize[]={2,2};
                hiddenSelections[] = {"zbytek"};
                hiddenSelectionsTextures[] = {""};
                hiddenSelectionsMaterials[] = {""};
        };

        class SFW_Item_Artefact_Thorn: SFW_Item_Artefact_Base
        {
                scope=2;
                displayName="";
                descriptionShort="";
                model="StalkerFWConfig/artefacts/model/Thorn/Thorn.p3d";
                rotationFlags=0;
                weight=200;
                itemSize[]={2,2};
                hiddenSelections[] = {"zbytek"};
                hiddenSelectionsTextures[] = {""};
                hiddenSelectionsMaterials[] = {""};
        };

        class SFW_Item_Artefact_Twist: SFW_Item_Artefact_Base
        {
                scope=2;
                displayName="";
                descriptionShort="";
                model="StalkerFWConfig/artefacts/model/Twist/Twist.p3d";
                rotationFlags=0;
                weight=200;
                itemSize[]={2,2};
                hiddenSelections[] = {"zbytek"};
                hiddenSelectionsTextures[] = {""};
                hiddenSelectionsMaterials[] = {""};
        };
};
