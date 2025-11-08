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
		hiddenSelectionsTextures[] = {"stalkerfwconfig\artefacts\model\battery\data\artbattery_defaultmaterial_co.paa"}; 
		hiddenSelectionsMaterials[] = {"stalkerfwconfig\artefacts\model\battery\data\battery.rvmat"}; 
	};
	
	class SFW_Item_Artefact_Bubble: SFW_Item_Artefact_Base 
	{ 
		scope=2; displayName=""; 
		descriptionShort=""; 
		model="StalkerFWConfig/artefacts/model/Bubble/Bubble.p3d"; 
		rotationFlags=0; 
		weight=200; 
		itemSize[]={2,2}; 
		hiddenSelections[] = {"emis"}; 
		hiddenSelectionsTextures[] = {"stalkerfwconfig\artefacts\model\bubble\data\artbubble_defaultmaterial_co.paa"}; 
		hiddenSelectionsMaterials[] = {"stalkerfwconfig\artefacts\model\bubble\data\bubble.rvmat"}; 
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
		hiddenSelections[] = {"zbytek","emis"}; 
		hiddenSelectionsTextures[] = {"stalkerfwconfig\artefacts\model\compass\data\artcompass_defaultmaterial_basecolor.paa","stalkerfwconfig\artefacts\model\compass\data\artcompass_defaultmaterial_basecolor.paa"}; 
		hiddenSelectionsMaterials[] = {"stalkerfwconfig\artefacts\model\compass\data\artcompass.rvmat","stalkerfwconfig\artefacts\model\compass\data\artcompassemis.rvmat"}; 
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
		hiddenSelections[] = {"emis"}; 
		hiddenSelectionsTextures[] = {"stalkerfwconfig\artefacts\model\crystal\data\artcrystal_defaultmaterial_basecolor.paa"}; 
		hiddenSelectionsMaterials[] = {"stalkerfwconfig\artefacts\model\crystal\data\artcrystalemis.rvmat"}; 
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
		hiddenSelectionsTextures[] = {"stalkerfwconfig\artefacts\model\crystalthorn\data\artcrystalthorn_co.paa"}; 
		hiddenSelectionsMaterials[] = {"stalkerfwconfig\artefacts\model\crystalthorn\data\crystalthorn.rvmat"}; 
	};
	
	class SFW_Item_Artefact_Drop: SFW_Item_Artefact_Base 
	{ 
		scope=2; displayName=""; 
		descriptionShort=""; 
		model="StalkerFWConfig/artefacts/model/Drop/Drop.p3d"; 
		rotationFlags=0; 
		weight=200; 
		itemSize[]={2,2}; 
		hiddenSelections[] = {"emis"}; 
		hiddenSelectionsTextures[] = {"stalkerfwconfig\artefacts\model\drop\data\drop_defaultmaterial_basecolor.paa"};
		hiddenSelectionsMaterials[] = {"stalkerfwconfig\artefacts\model\drop\data\artdrop.rvmat"}; 
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
		hiddenSelections[] = {"zbytek","emis"; 
		hiddenSelectionsTextures[] = {"stalkerfwconfig\artefacts\model\dummy\data\artdummy_defaultmaterial_basecolor.paa","stalkerfwconfig\artefacts\model\dummy\data\artdummy_defaultmaterial_basecolor.paa"}; 
		hiddenSelectionsMaterials[] = {"stalkerfwconfig\artefacts\model\dummy\data\artdummy.rvmat","stalkerfwconfig\artefacts\model\dummy\data\artdummy_emis.rvmat"}; 
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
	hiddenSelections[] = {"emis"}; 
	hiddenSelectionsTextures[] = {"stalkerfwconfig\artefacts\model\eye\data\arteye_defaultmaterial_basecolor.paa"}; 
	hiddenSelectionsMaterials[] = {"stalkerfwconfig\artefacts\model\eye\data\arteye.rvmat"}; 
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
		hiddenSelections[] = {"emis"};
		hiddenSelectionsTextures[] = {"stalkerfwconfig\artefacts\model\fireball\data\artfireball_sphire_co.paa"}; 
		hiddenSelectionsMaterials[] = {"stalkerfwconfig\artefacts\model\fireball\data\fireballemis.rvmat"}; 
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
		hiddenSelections[] = {"emis"}; 
		hiddenSelectionsTextures[] = {"stalkerfwconfig\artefacts\model\flame\data\artflame_co.paa"}; 
		hiddenSelectionsMaterials[] = {"stalkerfwconfig\artefacts\model\flame\data\flameemis.rvmat"}; 
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
		hiddenSelections[] = {"zbytek","emis"; 
		hiddenSelectionsTextures[] = {"stalkerfwconfig\artefacts\model\flash\data\flash_defaultmaterial_basecolor.paa"}; 
		hiddenSelectionsMaterials[] = {"stalkerfwconfig\artefacts\model\flash\data\flash.rvmat","stalkerfwconfig\artefacts\model\flash\data\flash_emis.rvmat"}; 
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
		hiddenSelectionsTextures[] = {"stalkerfwconfig\artefacts\model\flower\data\flower_art_co.paa"}; 
		hiddenSelectionsMaterials[] = {"stalkerfwconfig\artefacts\model\flower\data\flower.rvmat"}; 
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
		hiddenSelections[] = {"emis"}; 
		hiddenSelectionsTextures[] = {"stalkerfwconfig\artefacts\model\goldfish\data\artgoldfish_defaultmaterial_basecolor.paa"}; 
		hiddenSelectionsMaterials[] = {"stalkerfwconfig\artefacts\model\goldfish\data\goldfish.rvmat"}; 
	};
	
	class SFW_Item_Artefact_Gravy: SFW_Item_Artefact_Base 
	{ 
		scope=2; 
		displayName=""; 
		descriptionShort=""; 
		model="StalkerFWConfig/artefacts/model/Gravy/Gravy.p3d"; 
		rotationFlags=0; 
		weight=200; 
		itemSize[]={2,2}; 
		hiddenSelections[] = {"zbytek"}; 
		hiddenSelectionsTextures[] = {"stalkerfwconfig\artefacts\model\gravy\data\artgravy_defaultmaterial_basecolor.paa"}; 
		hiddenSelectionsMaterials[] = {"stalkerfwconfig\artefacts\model\gravy\data\gravy.rvmat"};
	};
	
	class SFW_Item_Artefact_Insulator: SFW_Item_Artefact_Base 
	{ 
		scope=2; 
		displayName=""; 
		descriptionShort=""; 
		model="StalkerFWConfig/artefacts/model/Insulator/Insulator.p3d"; 
		rotationFlags=0; 
		weight=200; 
		itemSize[]={2,2}; 
		hiddenSelections[] = {"zbytek"}; 
		hiddenSelectionsTextures[] = {"stalkerfwconfig\artefacts\model\insulator\data\artinsulator_defaultmat_basecolor.paa"};
		hiddenSelectionsMaterials[] = {"stalkerfwconfig\artefacts\model\insulator\data\artinsulator.rvmat"};
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
		hiddenSelectionsTextures[] = {"stalkerfwconfig\artefacts\model\jellyfish\data\artjellyfish_defaultmaterial_basecolor.paa"}; 
		hiddenSelectionsMaterials[] = {"stalkerfwconfig\artefacts\model\jellyfish\data\jellyfish.rvmat"};
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
		hiddenSelections[] = {"zbytek","emis"}; 
		hiddenSelectionsTextures[] = {"stalkerfwconfig\artefacts\model\kolobok\data\artkolobok_defaultmaterial_co.paa","stalkerfwconfig\artefacts\model\kolobok\data\artkolobok_defaultmaterial_co.paa"}; 
		hiddenSelectionsMaterials[] = {"stalkerfwconfig\artefacts\model\kolobok\data\kolobok.rvmat","stalkerfwconfig\artefacts\model\kolobok\data\kolobokemis.rvmat"};
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
		hiddenSelections[] = {"zbytek","emis"};
		hiddenSelectionsTextures[] = {"stalkerfwconfig\artefacts\model\lens\data\artlens_defaultmaterial_basecolor.paa","stalkerfwconfig\artefacts\model\lens\data\artlens_defaultmaterial_basecolor.paa"};
		hiddenSelectionsMaterials[] = {"stalkerfwconfig\artefacts\model\lens\data\artlens.rvmat","stalkerfwconfig\artefacts\model\lens\data\artlensemis.rvmat"};
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
		hiddenSelections[] = {"zbytek","emis"};
		hiddenSelectionsTextures[] = {"stalkerfwconfig\artefacts\model\light\data\flash_defaultmaterial_basecolor.paa","stalkerfwconfig\artefacts\model\light\data\flash_defaultmaterial_basecolor.paa"};
		hiddenSelectionsMaterials[] = {"stalkerfwconfig\artefacts\model\light\data\light.rvmat","stalkerfwconfig\artefacts\model\light\data\light_emis.rvmat"};
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
		hiddenSelections[] = {"emis"};
		hiddenSelectionsTextures[] = {"stalkerfwconfig\artefacts\model\mamasbeads\data\artmamasbeads_defaultmaterial_basecolor.paa"};
		hiddenSelectionsMaterials[] = {"stalkerfwconfig\artefacts\model\mamasbeads\data\mamasbeads.rvmat"};
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
		hiddenSelectionsTextures[] = {"stalkerfwconfig\artefacts\model\meatchunk\data\artmeatchunk_defaultmat_co.paa"};
		hiddenSelectionsMaterials[] = {"stalkerfwconfig\artefacts\model\meatchunk\data\artmeatchunk.rvmat"};
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
		hiddenSelectionsTextures[] = {"stalkerfwconfig\artefacts\model\monolith\data\mono_dayz_co.paa"};
		hiddenSelectionsMaterials[] = {"stalkerfwconfig\artefacts\model\monolith\data\monolith.rvmat"};
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
		hiddenSelectionsTextures[] = {"stalkerfwconfig\artefacts\model\nanocell\data\nano_dayz_co.paa"};
		hiddenSelectionsMaterials[] = {"stalkerfwconfig\artefacts\model\nanocell\data\nanocell.rvmat"};
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
		hiddenSelectionsTextures[] = {"stalkerfwconfig\artefacts\model\nightstar\data\nightstar_defaultmaterial_basecolor.paa"};
		hiddenSelectionsMaterials[] = {"stalkerfwconfig\artefacts\model\nightstar\data\nightstar.rvmat"};
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
		hiddenSelections[] = {"zbytek","gloss"};
		hiddenSelectionsTextures[] = {"stalkerfwconfig\artefacts\model\oasis\data\oasiswood_co.paa","stalkerfwconfig\artefacts\model\oasis\data\Spnire_default_BaseColor.paa"};
		hiddenSelectionsMaterials[] = {"stalkerfwconfig\artefacts\model\oasis\data\oasisgloss.rvmat","stalkerfwconfig\artefacts\model\oasis\data\oasisgloss.rvmat"};
	};

	class SFW_Item_Artefact_Urchin: SFW_Item_Artefact_Base
	{
		scope=2;
		displayName="";
		descriptionShort="";
		model="StalkerFWConfig/artefacts/model/SeaUrchin/Urchin.p3d";
		rotationFlags=0;
		weight=200;
		itemSize[]={2,2};
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"stalkerfwconfig\artefacts\model\urchin\data\urchin_defaultmaterial_basecolor.paa"};
		hiddenSelectionsMaterials[] = {"stalkerfwconfig\artefacts\model\urchin\data\urchin.rvmat"};
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
		hiddenSelections[] = {"noemis","igl"};
		hiddenSelectionsTextures[] = {"StalkerFWConfig\artefacts\model\ShineOfTheForest\data\ShineOfTheForest_Emis.rvmat","StalkerFWConfig\artefacts\model\ShineOfTheForest\data\ShineOfTheForest_Emis.rvmat"};
		hiddenSelectionsMaterials[] = {"ds_artifacts\model\artifacts\shineoftheforest\date\shineoftheforest.rvmat","ds_artifacts\model\artifacts\shineoftheforest\date\shineoftheforest_emis.rvmat"};
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
		hiddenSelectionsTextures[] = {"stalkerfwconfig\artefacts\model\snowflake\data\snowflake_defaultmaterial_basecolor.paa"};
		hiddenSelectionsMaterials[] = {"stalkerfwconfig\artefacts\model\snowflake\data\snowflake.rvmat"};
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
		hiddenSelections[] = {"zbytek","emis"};
		hiddenSelectionsTextures[] = {"stalkerfwconfig\artefacts\model\soul\data\artsouloo_co.paa","stalkerfwconfig\artefacts\model\soul\data\artsoul_co.paa"};
		hiddenSelectionsMaterials[] = {"stalkerfwconfig\artefacts\model\soul\data\soul.rvmat","stalkerfwconfig\artefacts\model\soul\data\soulemis.rvmat"};
	};

	class SFW_Item_Artefact_Sparkler: SFW_Item_Artefact_Base
	{
		scope=2;
		displayName="";
		descriptionShort="";
		model="StalkerFWConfig/artefacts/model/Sparkler/Sparkler.p3d";
		rotationFlags=0;
		weight=200;
		itemSize[]={2,2};
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"StalkerFWConfig\artefacts\model\Sparkler\data\ArtSparkler_DefaultMaterial_Normal.paa"};
		hiddenSelectionsMaterials[] = {"stalkerfwconfig\artefacts\model\sparkler\data\sparkler.rvmat"};
	};
	
	class SFW_Item_Artefact_Spring: SFW_Item_Artefact_Base
	{
		scope=2;
		displayName="";
		descriptionShort="";
		model="StalkerFWConfig/artefacts/model/Spring/Spring.p3d";
		rotationFlags=0;
		weight=200;
		itemSize[]={2,2};
		hiddenSelections[] = {"zbytek","como"};
		hiddenSelectionsTextures[] = {"stalkerfwconfig\artefacts\model\spring\data\artspring_defaultmaterial_basecolor.paa","stalkerfwconfig\artefacts\model\spring\data\springoo_co.paa"};
		hiddenSelectionsMaterials[] = {"stalkerfwconfig\artefacts\model\spring\data\spring.rvmat","stalkerfwconfig\artefacts\model\spring\data\spring.rvmat"};
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
		hiddenSelections[] = {"zbytek","emis"};
		hiddenSelectionsTextures[] = {"stalkerfwconfig\artefacts\model\steeringwheel\data\artsteeringwheel_defaultmaterial_basecolor.paa","stalkerfwconfig\artefacts\model\steeringwheel\data\artsteeringwheel_defaultmaterial_basecolor.paa"};
		hiddenSelectionsMaterials[] = {"stalkerfwconfig\artefacts\model\steeringwheel\data\artsteeringwheel.rvmat","stalkerfwconfig\artefacts\model\steeringwheel\data\artsteeringwheelemis.rvmat"};
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
		hiddenSelectionsTextures[] = {"stalkerfwconfig\artefacts\model\stoneblood\data\artstoneblood_defaultmat_co.paa"};
		hiddenSelectionsMaterials[] = {"stalkerfwconfig\artefacts\model\stoneblood\data\stoneblood.rvmat"};
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
		hiddenSelections[] = {"emis"};
		hiddenSelectionsTextures[] = {"stalkerfwconfig\artefacts\model\stoneflower\data\artstoneflower_defaultmaterial_basecolor.paa"};
		hiddenSelectionsMaterials[] = {"stalkerfwconfig\artefacts\model\stoneflower\data\stoneflower.rvmat"};
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
		hiddenSelectionsTextures[] = {"stalkerfwconfig\artefacts\model\thorn\data\artthorn_co.paa"};
		hiddenSelectionsMaterials[] = {"stalkerfwconfig\artefacts\model\thorn\data\thorn.rvmat"};
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
		hiddenSelectionsTextures[] = {"stalkerfwconfig\artefacts\model\twist\data\arttwist_defaultmaterial_basecolor.paa"};
		hiddenSelectionsMaterials[] = {"stalkerfwconfig\artefacts\model\twist\data\arttwist.rvmat"};
	};
};
