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
		scope=2;
		displayName="Battery";
		descriptionShort="A compact artefact that stores static charge like a living capacitor.";
		model="StalkerFWConfig/artefacts/model/Battery/Battery.p3d"; 
		rotationFlags=0; 
		hiddenSelections[] = {"zbytek"}; 
		hiddenSelectionsTextures[] = {"stalkerfwconfig\artefacts\model\battery\data\artbattery_defaultmaterial_co.paa"}; 
		hiddenSelectionsMaterials[] = {"stalkerfwconfig\artefacts\model\battery\data\battery.rvmat"}; 
	};
	
	class SFW_Item_Artefact_Bubble: SFW_Item_Artefact_Base
	{
		scope=2;
		displayName="Bubble";
		descriptionShort="A shimmering sphere whose membrane flexes with pulsating anomaly energy.";
		model="StalkerFWConfig/artefacts/model/Bubble/Bubble.p3d"; 
		rotationFlags=0; 
		hiddenSelections[] = {"emis"}; 
		hiddenSelectionsTextures[] = {"stalkerfwconfig\artefacts\model\bubble\data\artbubble_defaultmaterial_co.paa"}; 
		hiddenSelectionsMaterials[] = {"stalkerfwconfig\artefacts\model\bubble\data\bubble.rvmat"}; 
	};
	
	class SFW_Item_Artefact_Compass: SFW_Item_Artefact_Base
	{
		scope=2;
		displayName="Compass";
		descriptionShort="An artefact attuned to anomalies, gently tugging toward safer ground.";
		model="StalkerFWConfig/artefacts/model/Compass/Compass.p3d"; 
		rotationFlags=0; 
		hiddenSelections[] = {"zbytek","emis"};
		hiddenSelectionsTextures[] = {"stalkerfwconfig\artefacts\model\compass\data\artcompass_defaultmaterial_basecolor.paa","stalkerfwconfig\artefacts\model\compass\data\artcompass_defaultmaterial_basecolor.paa"}; 
		hiddenSelectionsMaterials[] = {"stalkerfwconfig\artefacts\model\compass\data\artcompass.rvmat","stalkerfwconfig\artefacts\model\compass\data\artcompassemis.rvmat"}; 
	};
	
	class SFW_Item_Artefact_Crystal: SFW_Item_Artefact_Base
	{
		scope=2;
		displayName="Crystal";
		descriptionShort="A faceted mass that refracts light into eerie spectra of the Zone.";
		model="StalkerFWConfig/artefacts/model/Crystal/Crystal.p3d"; 
		rotationFlags=0; 
		hiddenSelections[] = {"emis"}; 
		hiddenSelectionsTextures[] = {"stalkerfwconfig\artefacts\model\crystal\data\artcrystal_defaultmaterial_basecolor.paa"}; 
		hiddenSelectionsMaterials[] = {"stalkerfwconfig\artefacts\model\crystal\data\artcrystalemis.rvmat"}; 
	};
	
	class SFW_Item_Artefact_CrystalThorn: SFW_Item_Artefact_Base
	{
		scope=2;
		displayName="Crystal Thorn";
		descriptionShort="Jagged crystal growth protruding like a thorn, humming with latent force.";
		model="StalkerFWConfig/artefacts/model/CrystalThorn/CrystalThorn.p3d"; 
		rotationFlags=0; 
		hiddenSelections[] = {"zbytek"}; 
		hiddenSelectionsTextures[] = {"stalkerfwconfig\artefacts\model\crystalthorn\data\artcrystalthorn_co.paa"}; 
		hiddenSelectionsMaterials[] = {"stalkerfwconfig\artefacts\model\crystalthorn\data\crystalthorn.rvmat"}; 
	};
	
	class SFW_Item_Artefact_Drop: SFW_Item_Artefact_Base
	{
		scope=2;
		displayName="Drop";
		descriptionShort="A teardrop-shaped artefact that condenses anomaly vapors into tangible form.";
		model="StalkerFWConfig/artefacts/model/Drop/Drop.p3d"; 
		rotationFlags=0; 
		hiddenSelections[] = {"emis"}; 
		hiddenSelectionsTextures[] = {"stalkerfwconfig\artefacts\model\drop\data\drop_defaultmaterial_basecolor.paa"};
		hiddenSelectionsMaterials[] = {"stalkerfwconfig\artefacts\model\drop\data\artdrop.rvmat"}; 
	};
	
	class SFW_Item_Artefact_Dummy: SFW_Item_Artefact_Base
	{
		scope=2;
		displayName="Dummy";
		descriptionShort="A decoy artefact valued for training stalkers to handle unstable anomalies.";
		model="StalkerFWConfig/artefacts/model/Dummy/Dummy.p3d"; 
		rotationFlags=0; 
		hiddenSelections[] = {"zbytek","emis";
		hiddenSelectionsTextures[] = {"stalkerfwconfig\artefacts\model\dummy\data\artdummy_defaultmaterial_basecolor.paa","stalkerfwconfig\artefacts\model\dummy\data\artdummy_defaultmaterial_basecolor.paa"}; 
		hiddenSelectionsMaterials[] = {"stalkerfwconfig\artefacts\model\dummy\data\artdummy.rvmat","stalkerfwconfig\artefacts\model\dummy\data\artdummy_emis.rvmat"}; 
	};
	
	class SFW_Item_Artefact_Eye: SFW_Item_Artefact_Base
	{
		scope=2;
		displayName="Eye";
		descriptionShort="A pulsating orb that watches its bearer with a faint internal glow.";
		model="StalkerFWConfig/artefacts/model/Eye/Eye.p3d";
		rotationFlags=0;
		hiddenSelections[] = {"emis"};
		hiddenSelectionsTextures[] = {"stalkerfwconfig\artefacts\model\eye\data\arteye_defaultmaterial_basecolor.paa"};
		hiddenSelectionsMaterials[] = {"stalkerfwconfig\artefacts\model\eye\data\arteye.rvmat"};
	};
	
	class SFW_Item_Artefact_FireBall: SFW_Item_Artefact_Base
	{
		scope=2;
		displayName="Fireball";
		descriptionShort="A molten-looking sphere radiating waves of blistering heat.";
		model="StalkerFWConfig/artefacts/model/FireBall/FireBall.p3d"; 
		rotationFlags=0; 
		hiddenSelections[] = {"emis"};
		hiddenSelectionsTextures[] = {"stalkerfwconfig\artefacts\model\fireball\data\artfireball_sphire_co.paa"}; 
		hiddenSelectionsMaterials[] = {"stalkerfwconfig\artefacts\model\fireball\data\fireballemis.rvmat"}; 
	};
	
	class SFW_Item_Artefact_Flame: SFW_Item_Artefact_Base
	{
		scope=2;
		displayName="Flame";
		descriptionShort="A twisting blaze captured mid-flare, eternally licking with sparks.";
		model="StalkerFWConfig/artefacts/model/Flame/Flame.p3d"; 
		rotationFlags=0; 
		hiddenSelections[] = {"emis"}; 
		hiddenSelectionsTextures[] = {"stalkerfwconfig\artefacts\model\flame\data\artflame_co.paa"}; 
		hiddenSelectionsMaterials[] = {"stalkerfwconfig\artefacts\model\flame\data\flameemis.rvmat"}; 
	};
	
	class SFW_Item_Artefact_Flash: SFW_Item_Artefact_Base
	{
		scope=2;
		displayName="Flash";
		descriptionShort="A radiant core that discharges sudden bursts of blinding light.";
		model="StalkerFWConfig/artefacts/model/Flash/Flash.p3d"; 
		rotationFlags=0; 
		hiddenSelections[] = {"zbytek","emis";
		hiddenSelectionsTextures[] = {"stalkerfwconfig\artefacts\model\flash\data\flash_defaultmaterial_basecolor.paa"}; 
		hiddenSelectionsMaterials[] = {"stalkerfwconfig\artefacts\model\flash\data\flash.rvmat","stalkerfwconfig\artefacts\model\flash\data\flash_emis.rvmat"}; 
	};
	
	class SFW_Item_Artefact_Flower: SFW_Item_Artefact_Base
	{
		scope=2;
		displayName="Flower";
		descriptionShort="Petal-like growths arranged around a core that pulses with life.";
		model="StalkerFWConfig/artefacts/model/Flower/Flower.p3d"; 
		rotationFlags=0; 
		hiddenSelections[] = {"zbytek"}; 
		hiddenSelectionsTextures[] = {"stalkerfwconfig\artefacts\model\flower\data\flower_art_co.paa"}; 
		hiddenSelectionsMaterials[] = {"stalkerfwconfig\artefacts\model\flower\data\flower.rvmat"}; 
	};
	
	class SFW_Item_Artefact_GoldFish: SFW_Item_Artefact_Base
	{
		scope=2;
		displayName="Goldfish";
		descriptionShort="Golden tendrils swirl within, rumored to steady a stalker's footing.";
		model="StalkerFWConfig/artefacts/model/GoldFish/GoldFish.p3d"; 
		rotationFlags=0; 
		hiddenSelections[] = {"emis"}; 
		hiddenSelectionsTextures[] = {"stalkerfwconfig\artefacts\model\goldfish\data\artgoldfish_defaultmaterial_basecolor.paa"}; 
		hiddenSelectionsMaterials[] = {"stalkerfwconfig\artefacts\model\goldfish\data\goldfish.rvmat"}; 
	};
	
	class SFW_Item_Artefact_Gravy: SFW_Item_Artefact_Base
	{
		scope=2;
		displayName="Gravy";
		descriptionShort="Dense and weighty, this artefact bends the air with crushing gravity.";
		model="StalkerFWConfig/artefacts/model/Gravy/Gravy.p3d"; 
		rotationFlags=0; 
		hiddenSelections[] = {"zbytek"}; 
		hiddenSelectionsTextures[] = {"stalkerfwconfig\artefacts\model\gravy\data\artgravy_defaultmaterial_basecolor.paa"}; 
		hiddenSelectionsMaterials[] = {"stalkerfwconfig\artefacts\model\gravy\data\gravy.rvmat"};
	};
	
	class SFW_Item_Artefact_Insulator: SFW_Item_Artefact_Base
	{
		scope=2;
		displayName="Insulator";
		descriptionShort="Layered shells disperse electric shocks, shielding its bearer.";
		model="StalkerFWConfig/artefacts/model/Insulator/Insulator.p3d"; 
		rotationFlags=0; 
		hiddenSelections[] = {"zbytek"}; 
		hiddenSelectionsTextures[] = {"stalkerfwconfig\artefacts\model\insulator\data\artinsulator_defaultmat_basecolor.paa"};
		hiddenSelectionsMaterials[] = {"stalkerfwconfig\artefacts\model\insulator\data\artinsulator.rvmat"};
	};
	
	class SFW_Item_Artefact_JellyFish: SFW_Item_Artefact_Base
	{
		scope=2;
		displayName="Jellyfish";
		descriptionShort="A translucent bulb that floats softly, tingling with static energy.";
		model="StalkerFWConfig/artefacts/model/JellyFish/JellyFish.p3d"; 
		rotationFlags=0; 
		hiddenSelections[] = {"zbytek"}; 
		hiddenSelectionsTextures[] = {"stalkerfwconfig\artefacts\model\jellyfish\data\artjellyfish_defaultmaterial_basecolor.paa"}; 
		hiddenSelectionsMaterials[] = {"stalkerfwconfig\artefacts\model\jellyfish\data\jellyfish.rvmat"};
	};
	
	class SFW_Item_Artefact_Kolobok: SFW_Item_Artefact_Base
	{
		scope=2;
		displayName="Kolobok";
		descriptionShort="A rolling mass of sinew and light reputed to fortify living tissue.";
		model="StalkerFWConfig/artefacts/model/Kolobok/Kolobok.p3d"; 
		rotationFlags=0; 
		hiddenSelections[] = {"zbytek","emis"}; 
		hiddenSelectionsTextures[] = {"stalkerfwconfig\artefacts\model\kolobok\data\artkolobok_defaultmaterial_co.paa","stalkerfwconfig\artefacts\model\kolobok\data\artkolobok_defaultmaterial_co.paa"}; 
		hiddenSelectionsMaterials[] = {"stalkerfwconfig\artefacts\model\kolobok\data\kolobok.rvmat","stalkerfwconfig\artefacts\model\kolobok\data\kolobokemis.rvmat"};
	};
	
	class SFW_Item_Artefact_Lens: SFW_Item_Artefact_Base
	{
		scope=2;
		displayName="Lens";
		descriptionShort="Glasslike discs focus energy into sharp beams that can pierce darkness.";
		model="StalkerFWConfig/artefacts/model/Lens/Lens.p3d";
		rotationFlags=0;
		hiddenSelections[] = {"zbytek","emis"};
		hiddenSelectionsTextures[] = {"stalkerfwconfig\artefacts\model\lens\data\artlens_defaultmaterial_basecolor.paa","stalkerfwconfig\artefacts\model\lens\data\artlens_defaultmaterial_basecolor.paa"};
		hiddenSelectionsMaterials[] = {"stalkerfwconfig\artefacts\model\lens\data\artlens.rvmat","stalkerfwconfig\artefacts\model\lens\data\artlensemis.rvmat"};
	};

	class SFW_Item_Artefact_Light: SFW_Item_Artefact_Base
	{
		scope=2;
		displayName="Light";
		descriptionShort="A radiant cluster casting a steady halo that calms nearby shadows.";
		model="StalkerFWConfig/artefacts/model/Light/Light.p3d";
		rotationFlags=0;
		hiddenSelections[] = {"zbytek","emis"};
		hiddenSelectionsTextures[] = {"stalkerfwconfig\artefacts\model\light\data\flash_defaultmaterial_basecolor.paa","stalkerfwconfig\artefacts\model\light\data\flash_defaultmaterial_basecolor.paa"};
		hiddenSelectionsMaterials[] = {"stalkerfwconfig\artefacts\model\light\data\light.rvmat","stalkerfwconfig\artefacts\model\light\data\light_emis.rvmat"};
	};

	class SFW_Item_Artefact_MamasBeads: SFW_Item_Artefact_Base
	{
		scope=2;
		displayName="Mama's Beads";
		descriptionShort="Linked orbs glow warmly, said to soothe wounds like a mother's touch.";
		model="StalkerFWConfig/artefacts/model/MamasBeads/MamasBeads.p3d";
		rotationFlags=0;
		hiddenSelections[] = {"emis"};
		hiddenSelectionsTextures[] = {"stalkerfwconfig\artefacts\model\mamasbeads\data\artmamasbeads_defaultmaterial_basecolor.paa"};
		hiddenSelectionsMaterials[] = {"stalkerfwconfig\artefacts\model\mamasbeads\data\mamasbeads.rvmat"};
	};

	class SFW_Item_Artefact_MeatChunk: SFW_Item_Artefact_Base
	{
		scope=2;
		displayName="Meat Chunk";
		descriptionShort="Fibrous growth that oozes vitality-rich fluid prized by traders.";
		model="StalkerFWConfig/artefacts/model/MeatChunk/MeatChunk.p3d";
		rotationFlags=0;
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"stalkerfwconfig\artefacts\model\meatchunk\data\artmeatchunk_defaultmat_co.paa"};
		hiddenSelectionsMaterials[] = {"stalkerfwconfig\artefacts\model\meatchunk\data\artmeatchunk.rvmat"};
	};

	class SFW_Item_Artefact_Monolith: SFW_Item_Artefact_Base
	{
		scope=2;
		displayName="Monolith";
		descriptionShort="A fragment of dense stone etched with glyphs that radiate devotion.";
		model="StalkerFWConfig/artefacts/model/Monolith/Monolith.p3d";
		rotationFlags=0;
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"stalkerfwconfig\artefacts\model\monolith\data\mono_dayz_co.paa"};
		hiddenSelectionsMaterials[] = {"stalkerfwconfig\artefacts\model\monolith\data\monolith.rvmat"};
	};

	class SFW_Item_Artefact_NanoCell: SFW_Item_Artefact_Base
	{
		scope=2;
		displayName="Nano Cell";
		descriptionShort="Geometric lattices knit together to regenerate flesh at a cellular level.";
		model="StalkerFWConfig/artefacts/model/NanoCell/NanoCell.p3d";
		rotationFlags=0;
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"stalkerfwconfig\artefacts\model\nanocell\data\nano_dayz_co.paa"};
		hiddenSelectionsMaterials[] = {"stalkerfwconfig\artefacts\model\nanocell\data\nanocell.rvmat"};
	};

	class SFW_Item_Artefact_NightStar: SFW_Item_Artefact_Base
	{
		scope=2;
		displayName="Night Star";
		descriptionShort="A star-speckled orb that drinks in radiation and glows softly in the dark.";
		model="StalkerFWConfig/artefacts/model/NightStar/NightStar.p3d";
		rotationFlags=0;
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"stalkerfwconfig\artefacts\model\nightstar\data\nightstar_defaultmaterial_basecolor.paa"};
		hiddenSelectionsMaterials[] = {"stalkerfwconfig\artefacts\model\nightstar\data\nightstar.rvmat"};
	};

	class SFW_Item_Artefact_Oasis: SFW_Item_Artefact_Base
	{
		scope=2;
		displayName="Oasis";
		descriptionShort="A wooden relic that radiates refreshing calm like a pocket of spring rain.";
		model="StalkerFWConfig/artefacts/model/Oasis/Oasis.p3d";
		rotationFlags=0;
		hiddenSelections[] = {"zbytek","gloss"};
		hiddenSelectionsTextures[] = {"stalkerfwconfig\artefacts\model\oasis\data\oasiswood_co.paa","stalkerfwconfig\artefacts\model\oasis\data\Spnire_default_BaseColor.paa"};
		hiddenSelectionsMaterials[] = {"stalkerfwconfig\artefacts\model\oasis\data\oasisgloss.rvmat","stalkerfwconfig\artefacts\model\oasis\data\oasisgloss.rvmat"};
	};

	class SFW_Item_Artefact_Urchin: SFW_Item_Artefact_Base
	{
		scope=2;
		displayName="Sea Urchin";
		descriptionShort="Spiny protrusions crackle with static, leeching toxins from the bloodstream.";
		model="StalkerFWConfig/artefacts/model/SeaUrchin/Urchin.p3d";
		rotationFlags=0;
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"stalkerfwconfig\artefacts\model\urchin\data\urchin_defaultmaterial_basecolor.paa"};
		hiddenSelectionsMaterials[] = {"stalkerfwconfig\artefacts\model\urchin\data\urchin.rvmat"};
	};

	class SFW_Item_Artefact_ShineOfTheForest: SFW_Item_Artefact_Base
	{
		scope=2;
		displayName="Shine of the Forest";
		descriptionShort="A crystalline bloom that echoes forest whispers through gentle luminescence.";
		model="StalkerFWConfig/artefacts/model/ShineOfTheForest/ShineOfTheForest.p3d";
		rotationFlags=0;
		hiddenSelections[] = {"noemis","igl"};
		hiddenSelectionsTextures[] = {"StalkerFWConfig\artefacts\model\ShineOfTheForest\data\ShineOfTheForest_Emis.rvmat","StalkerFWConfig\artefacts\model\ShineOfTheForest\data\ShineOfTheForest_Emis.rvmat"};
		hiddenSelectionsMaterials[] = {"ds_artifacts\model\artifacts\shineoftheforest\date\shineoftheforest.rvmat","ds_artifacts\model\artifacts\shineoftheforest\date\shineoftheforest_emis.rvmat"};
	};

	class SFW_Item_Artefact_SnowFlake: SFW_Item_Artefact_Base
	{
		scope=2;
		displayName="Snowflake";
		descriptionShort="Fractal ice crystal that chills the air and dampens surrounding heat.";
		model="StalkerFWConfig/artefacts/model/SnowFlake/SnowFlake.p3d";
		rotationFlags=0;
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"stalkerfwconfig\artefacts\model\snowflake\data\snowflake_defaultmaterial_basecolor.paa"};
		hiddenSelectionsMaterials[] = {"stalkerfwconfig\artefacts\model\snowflake\data\snowflake.rvmat"};
	};

	class SFW_Item_Artefact_Soul: SFW_Item_Artefact_Base
	{
		scope=2;
		displayName="Soul";
		descriptionShort="A heartlike core beating softly, said to harmonize with living auras.";
		model="StalkerFWConfig/artefacts/model/Soul/Soul.p3d";
		rotationFlags=0;
		hiddenSelections[] = {"zbytek","emis"};
		hiddenSelectionsTextures[] = {"stalkerfwconfig\artefacts\model\soul\data\artsouloo_co.paa","stalkerfwconfig\artefacts\model\soul\data\artsoul_co.paa"};
		hiddenSelectionsMaterials[] = {"stalkerfwconfig\artefacts\model\soul\data\soul.rvmat","stalkerfwconfig\artefacts\model\soul\data\soulemis.rvmat"};
	};

	class SFW_Item_Artefact_Sparkler: SFW_Item_Artefact_Base
	{
		scope=2;
		displayName="Sparkler";
		descriptionShort="A crackling stone that sheds sparks, warding off minor electrical surges.";
		model="StalkerFWConfig/artefacts/model/Sparkler/Sparkler.p3d";
		rotationFlags=0;
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"StalkerFWConfig\artefacts\model\Sparkler\data\ArtSparkler_DefaultMaterial_Normal.paa"};
		hiddenSelectionsMaterials[] = {"stalkerfwconfig\artefacts\model\sparkler\data\sparkler.rvmat"};
	};
	
	class SFW_Item_Artefact_Spring: SFW_Item_Artefact_Base
	{
		scope=2;
		displayName="Spring";
		descriptionShort="Coiled tendrils compress and release force, lending agility to the wearer.";
		model="StalkerFWConfig/artefacts/model/Spring/Spring.p3d";
		rotationFlags=0;
		hiddenSelections[] = {"zbytek","como"};
		hiddenSelectionsTextures[] = {"stalkerfwconfig\artefacts\model\spring\data\artspring_defaultmaterial_basecolor.paa","stalkerfwconfig\artefacts\model\spring\data\springoo_co.paa"};
		hiddenSelectionsMaterials[] = {"stalkerfwconfig\artefacts\model\spring\data\spring.rvmat","stalkerfwconfig\artefacts\model\spring\data\spring.rvmat"};
	};

	class SFW_Item_Artefact_SteeringWheel: SFW_Item_Artefact_Base
	{
		scope=2;
		displayName="Steering Wheel";
		descriptionShort="Twisted rim of metal that guides its holder away from unseen hazards.";
		model="StalkerFWConfig/artefacts/model/SteeringWheel/SteeringWheel.p3d";
		rotationFlags=0;
		hiddenSelections[] = {"zbytek","emis"};
		hiddenSelectionsTextures[] = {"stalkerfwconfig\artefacts\model\steeringwheel\data\artsteeringwheel_defaultmaterial_basecolor.paa","stalkerfwconfig\artefacts\model\steeringwheel\data\artsteeringwheel_defaultmaterial_basecolor.paa"};
		hiddenSelectionsMaterials[] = {"stalkerfwconfig\artefacts\model\steeringwheel\data\artsteeringwheel.rvmat","stalkerfwconfig\artefacts\model\steeringwheel\data\artsteeringwheelemis.rvmat"};
	};

	class SFW_Item_Artefact_StoneBlood: SFW_Item_Artefact_Base
	{
		scope=2;
		displayName="Stone Blood";
		descriptionShort="Darkened mineral veins drip coagulated essence that hardens skin.";
		model="StalkerFWConfig/artefacts/model/StoneBlood/StoneBlood.p3d";
		rotationFlags=0;
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"stalkerfwconfig\artefacts\model\stoneblood\data\artstoneblood_defaultmat_co.paa"};
		hiddenSelectionsMaterials[] = {"stalkerfwconfig\artefacts\model\stoneblood\data\stoneblood.rvmat"};
	};

	class SFW_Item_Artefact_StoneFlower: SFW_Item_Artefact_Base
	{
		scope=2;
		displayName="Stone Flower";
		descriptionShort="Petals of stone sparkle with radiation, shielding organs from toxins.";
		model="StalkerFWConfig/artefacts/model/StoneFlower/StoneFlower.p3d";
		rotationFlags=0;
		hiddenSelections[] = {"emis"};
		hiddenSelectionsTextures[] = {"stalkerfwconfig\artefacts\model\stoneflower\data\artstoneflower_defaultmaterial_basecolor.paa"};
		hiddenSelectionsMaterials[] = {"stalkerfwconfig\artefacts\model\stoneflower\data\stoneflower.rvmat"};
	};

	class SFW_Item_Artefact_Thorn: SFW_Item_Artefact_Base
	{
		scope=2;
		displayName="Thorn";
		descriptionShort="A barbed crystal that stiffens muscles and heightens reflexes.";
		model="StalkerFWConfig/artefacts/model/Thorn/Thorn.p3d";
		rotationFlags=0;
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"stalkerfwconfig\artefacts\model\thorn\data\artthorn_co.paa"};
		hiddenSelectionsMaterials[] = {"stalkerfwconfig\artefacts\model\thorn\data\thorn.rvmat"};
	};

	class SFW_Item_Artefact_Twist: SFW_Item_Artefact_Base
	{
		scope=2;
		displayName="Twist";
		descriptionShort="Knotted anomaly residue that warps momentum into agile spins.";
		model="StalkerFWConfig/artefacts/model/Twist/Twist.p3d";
		rotationFlags=0;
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"stalkerfwconfig\artefacts\model\twist\data\arttwist_defaultmaterial_basecolor.paa"};
		hiddenSelectionsMaterials[] = {"stalkerfwconfig\artefacts\model\twist\data\arttwist.rvmat"};
	};
};

class CfgSoundShaders
{
	class SFW_Artifact_Battery_SoundShader
	{
		samples[] = {{"StalkerFWConfig\artefacts\sounds\Battery",1}};
		volume = 3.3;
		range = 3;
	};

	class SFW_Artifact_Bubble_SoundShader
	{
		samples[] = {{"StalkerFWConfig\artefacts\sounds\Bubble",1}};
		volume = 3.3;
		range = 3;
	};

	class SFW_Artifact_Compass_SoundShader
	{
		samples[] = {{"StalkerFWConfig\artefacts\sounds\Compass",1}};
		volume = 3.3;
		range = 3;
	};

	class SFW_Artifact_Crystal_SoundShader
	{
		samples[] = {{"StalkerFWConfig\artefacts\sounds\Crystal",1}};
		volume = 3.3;
		range = 3;
	};

	class SFW_Artifact_Dummy_SoundShader
	{
		samples[] = {{"StalkerFWConfig\artefacts\sounds\Dummy",1}};
		volume = 3.3;
		range = 3;
	};

	class SFW_Artifact_Eye_SoundShader
	{
		samples[] = {{"StalkerFWConfig\artefacts\sounds\Eye",1}};
		volume = 3.3;
		range = 3;
	};

	class SFW_Artifact_FireBall_SoundShader
	{
		samples[] = {{"StalkerFWConfig\artefacts\sounds\FireBall",1}};
		volume = 3.3;
		range = 3;
	};

	class SFW_Artifact_Flame_SoundShader
	{
		samples[] = {{"StalkerFWConfig\artefacts\sounds\Flame",1}};
		volume = 3.3;
		range = 3;
	};

	class SFW_Artifact_Flash_SoundShader
	{
		samples[] = {{"StalkerFWConfig\artefacts\sounds\Flash",1}};
		volume = 3.3;
		range = 3;
	};

	class SFW_Artifact_GoldFish_SoundShader
	{
		samples[] = {{"StalkerFWConfig\artefacts\sounds\GoldFish",1}};
		volume = 3.3;
		range = 3;
	};

	class SFW_Artifact_Gravy_SoundShader
	{
		samples[] = {{"StalkerFWConfig\artefacts\sounds\Gravy",1}};
		volume = 3.3;
		range = 3;
	};

	class SFW_Artifact_Jellyfish_SoundShader
	{
		samples[] = {{"StalkerFWConfig\artefacts\sounds\Jellyfish",1}};
		volume = 3.3;
		range = 3;
	};

	class SFW_Artifact_Kolobok_SoundShader
	{
		samples[] = {{"StalkerFWConfig\artefacts\sounds\Kolobok",1}};
		volume = 3.3;
		range = 3;
	};

	class SFW_Artifact_Light_SoundShader
	{
		samples[] = {{"StalkerFWConfig\artefacts\sounds\Light",1}};
		volume = 3.3;
		range = 3;
	};

	class SFW_Artifact_MamasBeads_SoundShader
	{
		samples[] = {{"StalkerFWConfig\artefacts\sounds\MamasBeads",1}};
		volume = 3.3;
		range = 3;
	};

	class SFW_Artifact_MeatChunk_SoundShader
	{
		samples[] = {{"StalkerFWConfig\artefacts\sounds\MeatChunk",1}};
		volume = 3.3;
		range = 3;
	};

	class SFW_Artifact_Monolith_SoundShader
	{
		samples[] = {{"StalkerFWConfig\artefacts\sounds\Monolith",1}};
		volume = 3.3;
		range = 3;
	};

	class SFW_Artifact_MoonLight_SoundShader
	{
		samples[] = {{"StalkerFWConfig\artefacts\sounds\MoonLight",1}};
		volume = 3.3;
		range = 3;
	};

	class SFW_Artifact_NanoCell_SoundShader
	{
		samples[] = {{"StalkerFWConfig\artefacts\sounds\NanoCell",1}};
		volume = 3.3;
		range = 3;
	};

	class SFW_Artifact_NightStar_SoundShader
	{
		samples[] = {{"StalkerFWConfig\artefacts\sounds\NightStar",1}};
		volume = 3.3;
		range = 3;
	};

	class SFW_Artifact_Oasis_SoundShader
	{
		samples[] = {{"StalkerFWConfig\artefacts\sounds\Oasis",1}};
		volume = 3.3;
		range = 3;
	};

	class SFW_Artifact_SnowFlake_SoundShader
	{
		samples[] = {{"StalkerFWConfig\artefacts\sounds\SnowFlake",1}};
		volume = 3.3;
		range = 3;
	};

	class SFW_Artifact_Soul_SoundShader
	{
		samples[] = {{"StalkerFWConfig\artefacts\sounds\Soul",1}};
		volume = 3.3;
		range = 3;
	};

	class SFW_Artifact_Sparkler_SoundShader
	{
		samples[] = {{"StalkerFWConfig\artefacts\sounds\Sparkler",1}};
		volume = 3.3;
		range = 3;
	};

	class SFW_Artifact_Spring_SoundShader
	{
		samples[] = {{"StalkerFWConfig\artefacts\sounds\Spring",1}};
		volume = 3.3;
		range = 3;
	};

	class SFW_Artifact_SteeringWheel_SoundShader
	{
		samples[] = {{"StalkerFWConfig\artefacts\sounds\SteeringWheel",1}};
		volume = 3.3;
		range = 3;
	};

	class SFW_Artifact_StoneBlood_SoundShader
	{
		samples[] = {{"StalkerFWConfig\artefacts\sounds\StoneBlood",1}};
		volume = 3.3;
		range = 3;
	};

	class SFW_Artifact_StoneFlower_SoundShader
	{
		samples[] = {{"StalkerFWConfig\artefacts\sounds\StoneFlower",1}};
		volume = 3.3;
		range = 3;
	};

	class SFW_Artifact_Twist_SoundShader
	{
		samples[] = {{"StalkerFWConfig\artefacts\sounds\Twist",1}};
		volume = 3.3;
		range = 3;
	};
};

class CfgSoundSets
{
	class SFW_Artifact_Battery_Sound
	{
		soundShaders[] = {"SFW_Artifact_Battery_SoundShader"};
		sound3DProcessingType = "infected3DProcessingType";
		volumeCurve = "infectedAttenuationCurve";
		spatial = 1;
		doppler = 0;
		loop = 1;
	};

	class SFW_Artifact_Bubble_Sound
	{
		soundShaders[] = {"SFW_Artifact_Bubble_SoundShader"};
		sound3DProcessingType = "infected3DProcessingType";
		volumeCurve = "infectedAttenuationCurve";
		spatial = 1;
		doppler = 0;
		loop = 1;
	};

	class SFW_Artifact_Compass_Sound
	{
		soundShaders[] = {"SFW_Artifact_Compass_SoundShader"};
		sound3DProcessingType = "infected3DProcessingType";
		volumeCurve = "infectedAttenuationCurve";
		spatial = 1;
		doppler = 0;
		loop = 1;
	};

	class SFW_Artifact_Crystal_Sound
	{
		soundShaders[] = {"SFW_Artifact_Crystal_SoundShader"};
		sound3DProcessingType = "infected3DProcessingType";
		volumeCurve = "infectedAttenuationCurve";
		spatial = 1;
		doppler = 0;
		loop = 1;
	};

	class SFW_Artifact_Dummy_Sound
	{
		soundShaders[] = {"SFW_Artifact_Dummy_SoundShader"};
		sound3DProcessingType = "infected3DProcessingType";
		volumeCurve = "infectedAttenuationCurve";
		spatial = 1;
		doppler = 0;
		loop = 1;
	};

	class SFW_Artifact_Eye_Sound
	{
		soundShaders[] = {"SFW_Artifact_Eye_SoundShader"};
		sound3DProcessingType = "infected3DProcessingType";
		volumeCurve = "infectedAttenuationCurve";
		spatial = 1;
		doppler = 0;
		loop = 1;
	};

	class SFW_Artifact_FireBall_Sound
	{
		soundShaders[] = {"SFW_Artifact_FireBall_SoundShader"};
		sound3DProcessingType = "infected3DProcessingType";
		volumeCurve = "infectedAttenuationCurve";
		spatial = 1;
		doppler = 0;
		loop = 1;
	};

	class SFW_Artifact_Flame_Sound
	{
		soundShaders[] = {"SFW_Artifact_Flame_SoundShader"};
		sound3DProcessingType = "infected3DProcessingType";
		volumeCurve = "infectedAttenuationCurve";
		spatial = 1;
		doppler = 0;
		loop = 1;
	};

	class SFW_Artifact_Flash_Sound
	{
		soundShaders[] = {"SFW_Artifact_Flash_SoundShader"};
		sound3DProcessingType = "infected3DProcessingType";
		volumeCurve = "infectedAttenuationCurve";
		spatial = 1;
		doppler = 0;
		loop = 1;
	};

	class SFW_Artifact_GoldFish_Sound
	{
		soundShaders[] = {"SFW_Artifact_GoldFish_SoundShader"};
		sound3DProcessingType = "infected3DProcessingType";
		volumeCurve = "infectedAttenuationCurve";
		spatial = 1;
		doppler = 0;
		loop = 1;
	};

	class SFW_Artifact_Gravy_Sound
	{
		soundShaders[] = {"SFW_Artifact_Gravy_SoundShader"};
		sound3DProcessingType = "infected3DProcessingType";
		volumeCurve = "infectedAttenuationCurve";
		spatial = 1;
		doppler = 0;
		loop = 1;
	};

	class SFW_Artifact_Jellyfish_Sound
	{
		soundShaders[] = {"SFW_Artifact_Jellyfish_SoundShader"};
		sound3DProcessingType = "infected3DProcessingType";
		volumeCurve = "infectedAttenuationCurve";
		spatial = 1;
		doppler = 0;
		loop = 1;
	};

	class SFW_Artifact_Kolobok_Sound
	{
		soundShaders[] = {"SFW_Artifact_Kolobok_SoundShader"};
		sound3DProcessingType = "infected3DProcessingType";
		volumeCurve = "infectedAttenuationCurve";
		spatial = 1;
		doppler = 0;
		loop = 1;
	};

	class SFW_Artifact_Light_Sound
	{
		soundShaders[] = {"SFW_Artifact_Light_SoundShader"};
		sound3DProcessingType = "infected3DProcessingType";
		volumeCurve = "infectedAttenuationCurve";
		spatial = 1;
		doppler = 0;
		loop = 1;
	};

	class SFW_Artifact_MamasBeads_Sound
	{
		soundShaders[] = {"SFW_Artifact_MamasBeads_SoundShader"};
		sound3DProcessingType = "infected3DProcessingType";
		volumeCurve = "infectedAttenuationCurve";
		spatial = 1;
		doppler = 0;
		loop = 1;
	};

	class SFW_Artifact_MeatChunk_Sound
	{
		soundShaders[] = {"SFW_Artifact_MeatChunk_SoundShader"};
		sound3DProcessingType = "infected3DProcessingType";
		volumeCurve = "infectedAttenuationCurve";
		spatial = 1;
		doppler = 0;
		loop = 1;
	};

	class SFW_Artifact_Monolith_Sound
	{
		soundShaders[] = {"SFW_Artifact_Monolith_SoundShader"};
		sound3DProcessingType = "infected3DProcessingType";
		volumeCurve = "infectedAttenuationCurve";
		spatial = 1;
		doppler = 0;
		loop = 1;
	};

	class SFW_Artifact_MoonLight_Sound
	{
		soundShaders[] = {"SFW_Artifact_MoonLight_SoundShader"};
		sound3DProcessingType = "infected3DProcessingType";
		volumeCurve = "infectedAttenuationCurve";
		spatial = 1;
		doppler = 0;
		loop = 1;
	};

	class SFW_Artifact_NanoCell_Sound
	{
		soundShaders[] = {"SFW_Artifact_NanoCell_SoundShader"};
		sound3DProcessingType = "infected3DProcessingType";
		volumeCurve = "infectedAttenuationCurve";
		spatial = 1;
		doppler = 0;
		loop = 1;
	};

	class SFW_Artifact_NightStar_Sound
	{
		soundShaders[] = {"SFW_Artifact_NightStar_SoundShader"};
		sound3DProcessingType = "infected3DProcessingType";
		volumeCurve = "infectedAttenuationCurve";
		spatial = 1;
		doppler = 0;
		loop = 1;
	};

	class SFW_Artifact_Oasis_Sound
	{
		soundShaders[] = {"SFW_Artifact_Oasis_SoundShader"};
		sound3DProcessingType = "infected3DProcessingType";
		volumeCurve = "infectedAttenuationCurve";
		spatial = 1;
		doppler = 0;
		loop = 1;
	};

	class SFW_Artifact_SnowFlake_Sound
	{
		soundShaders[] = {"SFW_Artifact_SnowFlake_SoundShader"};
		sound3DProcessingType = "infected3DProcessingType";
		volumeCurve = "infectedAttenuationCurve";
		spatial = 1;
		doppler = 0;
		loop = 1;
	};

	class SFW_Artifact_Soul_Sound
	{
		soundShaders[] = {"SFW_Artifact_Soul_SoundShader"};
		sound3DProcessingType = "infected3DProcessingType";
		volumeCurve = "infectedAttenuationCurve";
		spatial = 1;
		doppler = 0;
		loop = 1;
	};

	class SFW_Artifact_Sparkler_Sound
	{
		soundShaders[] = {"SFW_Artifact_Sparkler_SoundShader"};
		sound3DProcessingType = "infected3DProcessingType";
		volumeCurve = "infectedAttenuationCurve";
		spatial = 1;
		doppler = 0;
		loop = 1;
	};

	class SFW_Artifact_Spring_Sound
	{
		soundShaders[] = {"SFW_Artifact_Spring_SoundShader"};
		sound3DProcessingType = "infected3DProcessingType";
		volumeCurve = "infectedAttenuationCurve";
		spatial = 1;
		doppler = 0;
		loop = 1;
	};

	class SFW_Artifact_SteeringWheel_Sound
	{
		soundShaders[] = {"SFW_Artifact_SteeringWheel_SoundShader"};
		sound3DProcessingType = "infected3DProcessingType";
		volumeCurve = "infectedAttenuationCurve";
		spatial = 1;
		doppler = 0;
		loop = 1;
	};

	class SFW_Artifact_StoneBlood_Sound
	{
		soundShaders[] = {"SFW_Artifact_StoneBlood_SoundShader"};
		sound3DProcessingType = "infected3DProcessingType";
		volumeCurve = "infectedAttenuationCurve";
		spatial = 1;
		doppler = 0;
		loop = 1;
	};

	class SFW_Artifact_StoneFlower_Sound
	{
		soundShaders[] = {"SFW_Artifact_StoneFlower_SoundShader"};
		sound3DProcessingType = "infected3DProcessingType";
		volumeCurve = "infectedAttenuationCurve";
		spatial = 1;
		doppler = 0;
		loop = 1;
	};

	class SFW_Artifact_Twist_Sound
	{
		soundShaders[] = {"SFW_Artifact_Twist_SoundShader"};
		sound3DProcessingType = "infected3DProcessingType";
		volumeCurve = "infectedAttenuationCurve";
		spatial = 1;
		doppler = 0;
		loop = 1;
	};
};

