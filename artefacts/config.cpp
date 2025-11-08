////////////////////////////////////////////////////////////////////
//DeRap: model\Artifacts\config.bin
//Produced from mikero's Dos Tools Dll version 10.04
//https://mikero.bytex.digital/Downloads
//'now' is Mon Sep 15 18:44:45 2025 : 'file' last modified on Mon Sep 15 18:44:45 2025
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class DS_Artifacts
	{
		units[] = {"SFW_Artifact_NanoCell","SFW_Artifact_ShineOfTheForest","SFW_Artifact_Monolit","SFW_Artifact_Flower","SFW_Artifact_NightStar","SFW_Artifact_Colobok","SFW_Artifact_SeaUrchin","SFW_Artifact_SnowFlake","SFW_Artifact_Thorn","SFW_Artifact_CrustalThorn","SFW_Artifact_Flame","SFW_Artifact_FireBall","SFW_Artifact_Soul","SFW_Artifact_Flash","SFW_Artifact_Light","SFW_Artifact_Lens","SFW_Artifact_Compass","SFW_Artifact_Eye","SFW_Artifact_Drop","SFW_Artifact_StoneFlower","SFW_Artifact_BreakingMeet","SFW_Artifact_BloodOfStone","SFW_Artifact_Crustal","SFW_Artifact_Spring","SFW_Artifact_MomisBeads","SFW_Artifact_SteeringWheel","SFW_Artifact_Insulator","SFW_Artifact_Dummy","SFW_Artifact_Oasis","SFW_Artifact_Battery","SFW_Artifact_BatteryBlue","SFW_Artifact_GoldenFish","SFW_Artifact_Babble","SFW_Artifact_Gravy","SFW_Artifact_JellyFish","SFW_Artifact_Twist","SFW_Artifact_Sparkler"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","NH_Gear_Artefacts"};
	};
};
class CfgVehicles
{
	class NH_art_Base;
	class SFW_Artifact_NanoCell: NH_art_Base
	{
		scope = 2;
		displayName = "Нано клетка";
		descriptionShort = "Загадочный и ранее неизвестный науке артефакт, довольно редко встречающийся на просторах зоны.";
		model = "\DS_Artifacts\model\Artifacts\NanoCell\ArtNanoCell.p3d";
		rotationFlags = 0;
		weight = 200;
		itemSize[] = {2,2};
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"DS_Artifacts\model\Artifacts\NanoCell\date\nano_dayz_co.paa"};
		hiddenSelectionsMaterials[] = {"DS_Artifacts\model\Artifacts\NanoCell\date\NanoCell.rvmat"};
	};
	class SFW_Artifact_ShineOfTheForest: NH_art_Base
	{
		scope = 2;
		displayName = "Сияние леса";
		descriptionShort = "Ранее неизвестный науке артефакт, довольно редко встречающийся на просторах зоны.";
		model = "\DS_Artifacts\model\Artifacts\ShineOfTheForest\ArtShineOfTheForest.p3d";
		rotationFlags = 0;
		weight = 200;
		itemSize[] = {2,2};
		hiddenSelections[] = {"NONemis","igl"};
		hiddenSelectionsTextures[] = {"DS_Artifacts\model\Artifacts\ShineOfTheForest\date\ShineOfTheForest_dayz_co.paa","DS_Artifacts\model\Artifacts\ShineOfTheForest\date\ShineOfTheForest_dayz_co.paa"};
		hiddenSelectionsMaterials[] = {"DS_Artifacts\model\Artifacts\ShineOfTheForest\date\ShineOfTheForest_Emis.rvmat","DS_Artifacts\model\Artifacts\ShineOfTheForest\date\ShineOfTheForest.rvmat"};
	};
	class SFW_Artifact_Monolit: NH_art_Base
	{
		scope = 2;
		displayName = "Монолит";
		descriptionShort = "Простой но довольно красивый камень образовавшийся в ходе воздействия радиации";
		model = "\DS_Artifacts\model\Artifacts\Monolit\ArtMonolit.p3d";
		rotationFlags = 0;
		weight = 200;
		itemSize[] = {2,2};
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"DS_Artifacts\model\Artifacts\Monolit\date\mono_dayz_co.paa"};
		hiddenSelectionsMaterials[] = {"DS_Artifacts\model\Artifacts\Monolit\date\Monolit.rvmat"};
	};
	class SFW_Artifact_Flower: NH_art_Base
	{
		scope = 2;
		displayName = "Аномальное растение";
		descriptionShort = "Неизвестное науке растение появившееся в ходе воздействия сильной радиации";
		model = "\DS_Artifacts\model\Artifacts\Flower\ArtFlower.p3d";
		rotationFlags = 0;
		weight = 200;
		itemSize[] = {2,2};
		inventorySlot[] = {"Artefacts1"};
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"DS_Artifacts\model\Artifacts\Flower\date\Flower_art_co.paa"};
		hiddenSelectionsMaterials[] = {"DS_Artifacts\model\Artifacts\Flower\date\Flower.rvmat"};
	};
	class SFW_Artifact_NightStar: NH_art_Base
	{
		scope = 2;
		displayName = "Ночная звезда";
		descriptionShort = "Редкий артефакт гравитационной природы, образующийся в аномалиях Трамплин, Воронка (в том числе в архианомалии Загребущие руки, где есть Воронки).";
		model = "\DS_Artifacts\Model\Artifacts\NightStar\ArtNightStar.p3d";
		rotationFlags = 0;
		weight = 320;
		itemSize[] = {2,2};
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"DS_Artifacts\Model\Artifacts\NightStar\date\SeaUrchin_DefaultMaterial_BaseColor.paa"};
		hiddenSelectionsMaterials[] = {"DS_Artifacts\Model\Artifacts\NightStar\date\NightStar.rvmat"};
	};
	class SFW_Artifact_Colobok: NH_art_Base
	{
		scope = 2;
		displayName = "Колобок";
		descriptionShort = "Очень редкий артефакт, образующийся в зонах сильного химического загрязнения.";
		model = "\DS_Artifacts\Model\Artifacts\Colobolk\ArtColobok.p3d";
		rotationFlags = 0;
		weight = 320;
		itemSize[] = {2,2};
		hiddenSelections[] = {"zbytek","emis"};
		hiddenSelectionsTextures[] = {"DS_Artifacts\Model\Artifacts\Colobolk\date\Colobok_DefaultMaterial_co.paa","DS_Artifacts\Model\Artifacts\Colobolk\date\Colobok_DefaultMaterial_co.paa"};
		hiddenSelectionsMaterials[] = {"DS_Artifacts\Model\Artifacts\Colobolk\date\Colobok.rvmat","DS_Artifacts\Model\Artifacts\Colobolk\date\ColobokEmis.rvmat"};
	};
	class SFW_Artifact_SeaUrchin: NH_art_Base
	{
		scope = 2;
		displayName = "Морской еж";
		descriptionShort = "Наиболее мощный артефакт, производимый аномалией Жгучий пух.";
		model = "\DS_Artifacts\Model\Artifacts\SeaUrchin\ArtSeaUrchin.p3d";
		rotationFlags = 0;
		weight = 320;
		itemSize[] = {2,2};
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"DS_Artifacts\Model\Artifacts\SeaUrchin\date\SeaUrchin_DefaultMaterial_BaseColor.paa"};
		hiddenSelectionsMaterials[] = {"DS_Artifacts\Model\Artifacts\SeaUrchin\date\SeaUrchin.rvmat"};
	};
	class SFW_Artifact_SnowFlake: NH_art_Base
	{
		scope = 2;
		displayName = "Снежинка";
		descriptionShort = "Крайне редкий артефакт, образованный в аномалии Электра. Некоторые считают, что Снежинка — попавший в электрическую аномалию Колобок. ";
		model = "\DS_Artifacts\Model\Artifacts\SnowFlake\ArtSnowFlake.p3d";
		rotationFlags = 0;
		weight = 320;
		itemSize[] = {2,2};
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"DS_Artifacts\Model\Artifacts\SnowFlake\date\SeaUrchin_DefaultMaterial_BaseColor.paa"};
		hiddenSelectionsMaterials[] = {"DS_Artifacts\Model\Artifacts\SnowFlake\date\SnowFlake.rvmat"};
	};
	class SFW_Artifact_Thorn: NH_art_Base
	{
		scope = 2;
		displayName = "Колючка";
		descriptionShort = "Довольно часто встречающийся артефакт, образующийся в аномалии Жгучий пух.";
		model = "\DS_Artifacts\Model\Artifacts\Thorn\ArtThorn.p3d";
		rotationFlags = 0;
		weight = 320;
		itemSize[] = {2,2};
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"DS_Artifacts\Model\Artifacts\Thorn\date\ArtThorn_co.paa"};
		hiddenSelectionsMaterials[] = {"DS_Artifacts\Model\Artifacts\Thorn\date\Thorn.rvmat"};
	};
	class SFW_Artifact_CrustalThorn: NH_art_Base
	{
		scope = 2;
		displayName = "Кристальная колючка";
		descriptionShort = "Является продуктом аномалии Жгучий пух и попадается не так часто, как обычная Колючка.";
		model = "\DS_Artifacts\Model\Artifacts\CrustalThorn\ArtCrustalThorn.p3d";
		rotationFlags = 0;
		weight = 320;
		itemSize[] = {2,2};
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"DS_Artifacts\Model\Artifacts\CrustalThorn\date\ArtThorn_co.paa"};
		hiddenSelectionsMaterials[] = {"DS_Artifacts\Model\Artifacts\CrustalThorn\date\Thorn.rvmat"};
	};
	class SFW_Artifact_Flame: NH_art_Base
	{
		scope = 2;
		displayName = "Пламя";
		descriptionShort = "Артефакт, изредка образующийся в зонах повышенной термальной активности, таких как аномалия Жарка.";
		model = "\DS_Artifacts\Model\Artifacts\Flame\ArtFlame.p3d";
		rotationFlags = 0;
		weight = 320;
		itemSize[] = {2,2};
		hiddenSelections[] = {"emis"};
		hiddenSelectionsTextures[] = {"DS_Artifacts\Model\Artifacts\Flame\date\ArtFlame_co.paa"};
		hiddenSelectionsMaterials[] = {"DS_Artifacts\Model\Artifacts\Flame\date\FlameEmis.rvmat"};
	};
	class SFW_Artifact_FireBall: NH_art_Base
	{
		scope = 2;
		displayName = "Огненный Шар";
		descriptionShort = "Довольно распространённый артефакт термической природы, образующийся в аномалии Жарка и её содержащих архианомалиях Симбионт, Разлом и Цирк. ";
		model = "\DS_Artifacts\Model\Artifacts\FireBall\ArtFireBall.p3d";
		rotationFlags = 0;
		weight = 320;
		itemSize[] = {2,2};
		hiddenSelections[] = {"emis"};
		hiddenSelectionsTextures[] = {"DS_Artifacts\Model\Artifacts\FireBall\date\ArtFireBall_Sphire_co.paa"};
		hiddenSelectionsMaterials[] = {"DS_Artifacts\Model\Artifacts\FireBall\date\FireBallEmis.rvmat"};
	};
	class SFW_Artifact_Soul: NH_art_Base
	{
		scope = 2;
		displayName = "Душа";
		descriptionShort = "Редкий артефакт, образующийся в аномалиях Карусель, Мясорубка, Кислотный туман, Газировка и архианомалиях, имеющих в своём составе Газировку (Соснодуб, Плавни, Лоза).";
		model = "\DS_Artifacts\Model\Artifacts\Soul\ArtSoul.p3d";
		rotationFlags = 0;
		weight = 320;
		itemSize[] = {2,2};
		hiddenSelections[] = {"zbytek","emis"};
		hiddenSelectionsTextures[] = {"DS_Artifacts\Model\Artifacts\Soul\date\ArtSoulOO_co.paa","DS_Artifacts\Model\Artifacts\Soul\date\ArtSoul_co.paa"};
		hiddenSelectionsMaterials[] = {"DS_Artifacts\Model\Artifacts\Soul\date\Soul.rvmat","DS_Artifacts\Model\Artifacts\Soul\date\SoulEmis.rvmat"};
	};
	class SFW_Artifact_Flash: NH_art_Base
	{
		scope = 2;
		displayName = "Вспышка";
		descriptionShort = "Довольно распространённый артефакт электрической природы, образуется в аномалии Электра, а также содержащих её в себе архианомалиях Рубец и Железный лес.";
		model = "\DS_Artifacts\Model\Artifacts\Flash\ArtFlash.p3d";
		rotationFlags = 0;
		weight = 320;
		itemSize[] = {2,2};
		hiddenSelections[] = {"zbytek","emis"};
		hiddenSelectionsTextures[] = {"DS_Artifacts\Model\Artifacts\Flash\date\Flash_DefaultMaterial_BaseColor.paa","DS_Artifacts\Model\Artifacts\Flash\date\Flash_DefaultMaterial_BaseColor.paa"};
		hiddenSelectionsMaterials[] = {"DS_Artifacts\Model\Artifacts\Flash\date\Flash.rvmat","DS_Artifacts\Model\Artifacts\Flash\date\Flash_emis.rvmat"};
	};
	class SFW_Artifact_Light: NH_art_Base
	{
		scope = 2;
		displayName = "Светляк";
		descriptionShort = "Очень редкий артефакт, образующийся в аномалиях химической природы, таких как Кислотный туман и Газировка (а также в содержащих их Плавнях и Лозе).";
		model = "\DS_Artifacts\Model\Artifacts\light\ArtLight.p3d";
		rotationFlags = 0;
		weight = 320;
		itemSize[] = {2,2};
		hiddenSelections[] = {"zbytek","emis"};
		hiddenSelectionsTextures[] = {"DS_Artifacts\Model\Artifacts\light\date\Flash_DefaultMaterial_BaseColor.paa","DS_Artifacts\Model\Artifacts\light\date\Flash_DefaultMaterial_BaseColor.paa"};
		hiddenSelectionsMaterials[] = {"DS_Artifacts\Model\Artifacts\light\date\Light.rvmat","DS_Artifacts\Model\Artifacts\light\date\Light_emis.rvmat"};
	};
	class SFW_Artifact_Lens: NH_art_Base
	{
		scope = 2;
		displayName = "Луный свет";
		descriptionShort = "Редкий и дорогой артефакт электрической природы. Лунный свет образуется в аномалии Электра, а также архианомалиях Рубец, Железный лес и Мясорубка";
		model = "\DS_Artifacts\Model\Artifacts\Lens\ArtLens.p3d";
		rotationFlags = 0;
		weight = 320;
		itemSize[] = {2,2};
		hiddenSelections[] = {"zbytek","emis"};
		hiddenSelectionsTextures[] = {"DS_Artifacts\Model\Artifacts\Lens\date\ArtLens_DefaultMaterial_BaseColor.paa","DS_Artifacts\Model\Artifacts\Lens\date\ArtLens_DefaultMaterial_BaseColor.paa"};
		hiddenSelectionsMaterials[] = {"DS_Artifacts\Model\Artifacts\Lens\date\ArtLens.rvmat","DS_Artifacts\Model\Artifacts\Lens\date\ArtLensEmis.rvmat"};
	};
	class SFW_Artifact_Compass: NH_art_Base
	{
		scope = 2;
		displayName = "Компас";
		descriptionShort = "Редчайший артефакт, образующийся в неизвестных условиях и обладающий, помимо обычных для других артефактов свойств, способностью обнаруживать и показывать разрывы в аномальных полях";
		model = "\DS_Artifacts\Model\Artifacts\Compass\ArtCompass.p3d";
		rotationFlags = 0;
		weight = 320;
		itemSize[] = {2,2};
		hiddenSelections[] = {"zbytek","emis"};
		hiddenSelectionsTextures[] = {"DS_Artifacts\Model\Artifacts\Compass\date\ArtCompass_DefaultMaterial_BaseColor.paa","DS_Artifacts\Model\Artifacts\Compass\date\ArtCompass_DefaultMaterial_BaseColor.paa"};
		hiddenSelectionsMaterials[] = {"DS_Artifacts\Model\Artifacts\Compass\date\ArtCompass.rvmat","DS_Artifacts\Model\Artifacts\Compass\date\ArtCompassEmis.rvmat"};
	};
	class SFW_Artifact_Eye: NH_art_Base
	{
		scope = 2;
		displayName = "Глаз";
		descriptionShort = "Редко встречающийся и весьма ценный артефакт термической природы, названный так благодаря характерному внешнему виду.";
		model = "\DS_Artifacts\Model\Artifacts\Eye\ArtEye.p3d";
		rotationFlags = 17;
		weight = 320;
		itemSize[] = {2,2};
		hiddenSelections[] = {"emis"};
		hiddenSelectionsTextures[] = {"DS_Artifacts\Model\Artifacts\Eye\date\ArtEye_DefaultMaterial_BaseColor.paa"};
		hiddenSelectionsMaterials[] = {"DS_Artifacts\Model\Artifacts\Eye\date\ArtEye.rvmat"};
	};
	class SFW_Artifact_Drop: NH_art_Base
	{
		scope = 2;
		displayName = "Капли";
		descriptionShort = "Cамый слабый артефакт термической природы, образующийся в аномалии Жарка. Представляет собой небольшое каплевидное образование с черной глянцевой поверхностью, покрытой небольшими трещинками.";
		model = "\DS_Artifacts\Model\Artifacts\Drop\ArtDrop.p3d";
		rotationFlags = 17;
		weight = 320;
		itemSize[] = {2,2};
		hiddenSelections[] = {"emis"};
		hiddenSelectionsTextures[] = {"DS_Artifacts\Model\Artifacts\Drop\date\Drop_DefaultMaterial_BaseColor.paa"};
		hiddenSelectionsMaterials[] = {"DS_Artifacts\Model\Artifacts\Drop\date\ArtDrop.rvmat"};
	};
	class SFW_Artifact_StoneFlower: NH_art_Base
	{
		scope = 2;
		displayName = "Каменный цветок";
		descriptionShort = "Pаспространённый артефакт гравитационной природы, образующийся в аномалиях Воронка, Трамплин, Карусель и архианомалиях, их содержащих (Симбионт и Коготь).";
		model = "\DS_Artifacts\Model\Artifacts\StoneFlower\ArtStoneFlower.p3d";
		rotationFlags = 17;
		weight = 320;
		itemSize[] = {2,2};
		inventorySlot[] = {"Artefacts1"};
		hiddenSelections[] = {"emis"};
		hiddenSelectionsTextures[] = {"DS_Artifacts\Model\Artifacts\StoneFlower\date\ArtStoneFlower_DefaultMaterial_BaseColor.paa"};
		hiddenSelectionsMaterials[] = {"DS_Artifacts\Model\Artifacts\StoneFlower\date\StoneFlower.rvmat"};
	};
	class SFW_Artifact_BreakingMeet: NH_art_Base
	{
		scope = 2;
		displayName = "Ломоть мяса";
		descriptionShort = "Достаточно распространенный артефакт, образующийся в аномалиях Карусель, Кислотный туман и Газировка.";
		model = "\DS_Artifacts\Model\Artifacts\BreakingMeat\ArtBreakingMeet.p3d";
		rotationFlags = 17;
		weight = 320;
		itemSize[] = {2,2};
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"DS_Artifacts\Model\Artifacts\BreakingMeat\date\ArtBreakingMeet_defaultMat_co.paa"};
		hiddenSelectionsMaterials[] = {"DS_Artifacts\Model\Artifacts\BreakingMeat\date\ArtBreakingMeet.rvmat"};
	};
	class SFW_Artifact_BloodOfStone: NH_art_Base
	{
		scope = 2;
		displayName = "Кровь камня";
		descriptionShort = "Широко распространенный артефакт, образующийся в аномалиях Карусель, Воронка, Кислотный туман, Газировка и архианомалии Соснодуб.";
		model = "\DS_Artifacts\Model\Artifacts\BloodOfStone\ArtBloodOfStone.p3d";
		rotationFlags = 17;
		weight = 320;
		itemSize[] = {2,2};
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"DS_Artifacts\Model\Artifacts\BloodOfStone\date\ArtBloodOfStone_defaultMat_co.paa"};
		hiddenSelectionsMaterials[] = {"DS_Artifacts\Model\Artifacts\BloodOfStone\date\ArtBloodOfStone.rvmat"};
	};
	class SFW_Artifact_Crustal: NH_art_Base
	{
		scope = 2;
		displayName = "Кристалл";
		descriptionShort = "Артефакт термической природы, образующийся в аномалии Жарка и её содержащих архианомалиях Разлом и Котёл.";
		model = "\DS_Artifacts\Model\Artifacts\Crustal\ArtCrustal.p3d";
		rotationFlags = 0;
		weight = 320;
		itemSize[] = {2,2};
		hiddenSelections[] = {"emis"};
		hiddenSelectionsTextures[] = {"DS_Artifacts\Model\Artifacts\Crustal\date\ArtCrustal_DefaultMaterial_BaseColor.paa"};
		hiddenSelectionsMaterials[] = {"DS_Artifacts\Model\Artifacts\Crustal\date\ArtCrustalEmis.rvmat"};
	};
	class SFW_Artifact_Spring: NH_art_Base
	{
		scope = 2;
		displayName = "Пружина";
		descriptionShort = "Крайне малоизученный (неизвестна даже материнская аномалия) и редко встречающийся артефакт.";
		model = "\DS_Artifacts\Model\Artifacts\Spring\ArtSpring.p3d";
		rotationFlags = 0;
		weight = 320;
		itemSize[] = {2,2};
		hiddenSelections[] = {"zbytek","como"};
		hiddenSelectionsTextures[] = {"DS_Artifacts\Model\Artifacts\Spring\date\ArtSpring_DefaultMaterial_BaseColor.paa","DS_Artifacts\Model\Artifacts\Spring\date\SpringOO_co.paa"};
		hiddenSelectionsMaterials[] = {"DS_Artifacts\Model\Artifacts\Spring\date\Spring.rvmat","DS_Artifacts\Model\Artifacts\Spring\date\SpringOO.rvmat"};
	};
	class SFW_Artifact_MomisBeads: NH_art_Base
	{
		scope = 2;
		displayName = "Мамины бусы";
		descriptionShort = "Артефакт термической природы. Состоит из круглых уплотнений, связанных между собой тонкими нитями, по внешнему виду напоминая жемчужное ожерелье или ДНК.";
		model = "\DS_Artifacts\Model\Artifacts\MomisBeads\ArtMomisBeads.p3d";
		rotationFlags = 17;
		weight = 320;
		itemSize[] = {2,2};
		hiddenSelections[] = {"emis"};
		hiddenSelectionsTextures[] = {"DS_Artifacts\Model\Artifacts\MomisBeads\date\ArtMomisBeads_DefaultMaterial_BaseColor.paa"};
		hiddenSelectionsMaterials[] = {"DS_Artifacts\Model\Artifacts\MomisBeads\date\MomisBeads.rvmat"};
	};
	class SFW_Artifact_SteeringWheel: NH_art_Base
	{
		scope = 2;
		displayName = "Видоизмененный штурвал";
		descriptionShort = "Уникальный полуартефакт, который в прошлом был штурвалом земснаряда. Ярко светится голубым светом и излучает радиацию, не обладая никакими другими свойствами.";
		model = "\DS_Artifacts\Model\Artifacts\SteeringWheel\ArtSteeringWheel.p3d";
		rotationFlags = 0;
		weight = 120;
		itemSize[] = {3,3};
		inventorySlot[] = {"Artefacts1"};
		hiddenSelections[] = {"zbytek","emis"};
		hiddenSelectionsTextures[] = {"DS_Artifacts\Model\Artifacts\SteeringWheel\date\ArtSteeringWheel_DefaultMaterial_BaseColor.paa","DS_Artifacts\Model\Artifacts\SteeringWheel\date\ArtSteeringWheel_DefaultMaterial_BaseColor.paa"};
		hiddenSelectionsMaterials[] = {"DS_Artifacts\Model\Artifacts\SteeringWheel\date\ArtSteeringWheel.rvmat","DS_Artifacts\Model\Artifacts\SteeringWheel\date\ArtSteeringWheelEmis.rvmat"};
	};
	class SFW_Artifact_Insulator: NH_art_Base
	{
		scope = 2;
		displayName = "Видоизмененный изолятор";
		descriptionShort = "B прошлом электрический изолятор, изменившийся под воздействием аномальных полей. Превратившись в артефакт, стал источником переменного пси-излучения и радиации. Другими свойствами не обладает.";
		model = "\DS_Artifacts\Model\Artifacts\Insulator\ArtInsulator.p3d";
		rotationFlags = 0;
		weight = 320;
		itemSize[] = {2,2};
		inventorySlot[] = {"Artefacts1"};
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"DS_Artifacts\Model\Artifacts\Insulator\date\ArtInsulator_defaultMat_BaseColor.paa"};
		hiddenSelectionsMaterials[] = {"DS_Artifacts\Model\Artifacts\Insulator\date\ArtInsulator.rvmat"};
	};
	class SFW_Artifact_Dummy: NH_art_Base
	{
		scope = 2;
		displayName = "Пустышка";
		descriptionShort = "Pедкий артефакт, материнская аномалия которого в мае 2012 года неизвестна. Благодаря своей необычной даже для артефакта форме и уникальным свойствам высоко ценится торговцами и сталкерами.";
		model = "\DS_Artifacts\Model\Artifacts\Dummy\ArtDummy.p3d";
		rotationFlags = 0;
		weight = 300;
		itemSize[] = {2,2};
		hiddenSelections[] = {"zbytek","emis"};
		hiddenSelectionsTextures[] = {"DS_Artifacts\Model\Artifacts\Dummy\date\ArtDummy_DefaultMaterial_BaseColor.paa","DS_Artifacts\Model\Artifacts\Dummy\date\ArtDummy_DefaultMaterial_BaseColor.paa"};
		hiddenSelectionsMaterials[] = {"DS_Artifacts\Model\Artifacts\Dummy\date\ArtDummy_co.rvmat","DS_Artifacts\Model\Artifacts\Dummy\date\ArtDummy_emis.rvmat"};
	};
	class SFW_Artifact_Oasis: NH_art_Base
	{
		scope = 2;
		displayName = "Сердце Оазиса";
		descriptionShort = "Hевероятный по своим свойствам артефакт, растущий в самом центре Оазиса, который сам по себе является легендой. Представляет собой кристаллизовавшееся растение, которое под влиянием аномалии приобрело часть ее силы.";
		model = "\DS_Artifacts\Model\Artifacts\Oasis\ArtOasis.p3d";
		rotationFlags = 0;
		weight = 400;
		itemSize[] = {2,3};
		inventorySlot[] = {"Artefacts1"};
		hiddenSelections[] = {"zbytek","gloss"};
		hiddenSelectionsTextures[] = {"DS_Artifacts\Model\Artifacts\Oasis\date\OasisWood_co.paa","DS_Artifacts\Model\Artifacts\Oasis\date\Spnire_default_BaseColor.paa"};
		hiddenSelectionsMaterials[] = {"DS_Artifacts\Model\Artifacts\Oasis\date\OasisWood.rvmat","DS_Artifacts\Model\Artifacts\Oasis\date\OasisGloss.rvmat"};
	};
	class SFW_Artifact_Battery: NH_art_Base
	{
		scope = 2;
		displayName = "Батарейка";
		descriptionShort = "Mалоизученный и редкий (практически уникальный) артефакт, образующийся при неустановленных условиях. Известно лишь, что в состав артефакта входят диэлектрические элементы.";
		model = "\DS_Artifacts\Model\Artifacts\Battery\ArtBattery.p3d";
		rotationFlags = 0;
		weight = 320;
		itemSize[] = {2,2};
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"DS_Artifacts\Model\Artifacts\Battery\date\ArtBattery_DefaultMaterial_co.paa"};
		hiddenSelectionsMaterials[] = {"DS_Artifacts\Model\Artifacts\Battery\date\Battery.rvmat"};
	};
	class SFW_Artifact_BatteryBlue: SFW_Artifact_Battery
	{
		scope = 2;
		displayName = "Батарейка";
		descriptionShort = "Mалоизученный и редкий (практически уникальный) артефакт, образующийся при неустановленных условиях. Известно лишь, что в состав артефакта входят диэлектрические элементы.";
		model = "\DS_Artifacts\Model\Artifacts\Battery\ArtBattery.p3d";
		rotationFlags = 0;
		weight = 320;
		itemSize[] = {2,2};
		hiddenSelections[] = {"como"};
		hiddenSelectionsTextures[] = {"DS_Artifacts\Model\Artifacts\Battery\date\ArtBattery_Blue_co.paa"};
		hiddenSelectionsMaterials[] = {"DS_Artifacts\Model\Artifacts\Battery\date\ArtBatteryEmis.rvmat"};
	};
	class SFW_Artifact_GoldenFish: NH_art_Base
	{
		scope = 2;
		displayName = "Золотая рыбка";
		descriptionShort = "Pедкий и, как следствие, дорогой артефакт гравитационной природы, образующийся в аномалии Воронка и её содержащей архианомалии Симбионт.";
		model = "\DS_Artifacts\Model\Artifacts\GoldenFish\ArtGoldenFish.p3d";
		rotationFlags = 17;
		weight = 320;
		itemSize[] = {2,2};
		hiddenSelections[] = {"emis"};
		hiddenSelectionsTextures[] = {"DS_Artifacts\Model\Artifacts\GoldenFish\date\ArtGoldenFish_DefaultMaterial_BaseColor.paa"};
		hiddenSelectionsMaterials[] = {"DS_Artifacts\Model\Artifacts\GoldenFish\date\GoldenFish.rvmat"};
	};
	class SFW_Artifact_Babble: NH_art_Base
	{
		scope = 2;
		displayName = "Пузырь";
		descriptionShort = "Pедкий артефакт, образующийся в аномалии Кислотный туман. Выделяя газообразное вещество, Пузырь выводит из организма носителя радиоактивные частицы.";
		model = "\DS_Artifacts\Model\Artifacts\Bubble\ArtBabble.p3d";
		rotationFlags = 17;
		weight = 320;
		itemSize[] = {2,2};
		hiddenSelections[] = {"emis"};
		hiddenSelectionsTextures[] = {"DS_Artifacts\Model\Artifacts\Bubble\date\ArtGoldenFish_DefaultMaterial_co.paa"};
		hiddenSelectionsMaterials[] = {"DS_Artifacts\Model\Artifacts\Bubble\date\BabbleEmis.rvmat"};
	};
	class SFW_Artifact_Gravy: NH_art_Base
	{
		scope = 2;
		displayName = "Грави";
		descriptionShort = "Довольно распространённый артефакт гравитационной природы, образующийся в аномалии Воронка и её содержащей архианомалии Битум.";
		model = "\DS_Artifacts\Model\Artifacts\Gravy\ArtGravy.p3d";
		rotationFlags = 0;
		weight = 320;
		itemSize[] = {2,2};
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"DS_Artifacts\Model\Artifacts\Gravy\date\ArtGravy_DefaultMaterial_BaseColor.paa"};
		hiddenSelectionsMaterials[] = {"DS_Artifacts\Model\Artifacts\Gravy\date\Gravy.rvmat"};
	};
	class SFW_Artifact_JellyFish: NH_art_Base
	{
		scope = 2;
		displayName = "Медуза";
		descriptionShort = "Широко распространённый артефакт гравитационной природы, образующийся в аномалии Трамплин и архианомалиях, её содержащих (Коготь).";
		model = "\DS_Artifacts\Model\Artifacts\JellyFish\ArtJellyFish.p3d";
		rotationFlags = 0;
		weight = 320;
		itemSize[] = {2,2};
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"DS_Artifacts\Model\Artifacts\JellyFish\date\ArtJellyFish_DefaultMaterial_BaseColor.paa"};
		hiddenSelectionsMaterials[] = {"DS_Artifacts\Model\Artifacts\JellyFish\date\JellyFish.rvmat"};
	};
	class SFW_Artifact_Twist: NH_art_Base
	{
		scope = 2;
		displayName = "Выверт";
		descriptionShort = "Широко распространённый артефакт гравитационной природы, образующийся в аномалии Воронка, а также в архианомалиях Коготь и Загребущие руки, где присутствуют Воронки. Артефакт имеют странную хаотическую форму.";
		model = "\DS_Artifacts\Model\Artifacts\Twist\ArtTwist.p3d";
		rotationFlags = 0;
		weight = 320;
		itemSize[] = {2,2};
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"DS_Artifacts\Model\Artifacts\Twist\date\ArtTwist_DefaultMaterial_BaseColor.paa"};
		hiddenSelectionsMaterials[] = {"DS_Artifacts\Model\Artifacts\Twist\date\ArtTwist.rvmat"};
	};
	class SFW_Artifact_Sparkler: NH_art_Base
	{
		scope = 2;
		displayName = "Бенгальский огонь";
		descriptionShort = "Распространённый и дешёвый артефакт электрической природы, рождающийся в аномалии Электра и содержащих её в себе архианомалиях Рубец и Железный лес.";
		model = "\DS_Artifacts\Model\Artifacts\Sparkler\ArtSparkler.p3d";
		rotationFlags = 0;
		weight = 320;
		itemSize[] = {2,2};
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"DS_Artifacts\Model\Artifacts\Sparkler\date\ArtTwist_DefaultMaterial_BaseColor.paa"};
		hiddenSelectionsMaterials[] = {"DS_Artifacts\Model\Artifacts\Sparkler\date\Sparkler.rvmat"};
	};
};
class CfgSoundSets
{
	class SFW_Artifact_FireBallSound
	{
		soundShaders[] = {"SFW_Artifact_FireBall_SoundShader"};
		sound3DProcessingType = "infected3DProcessingType";
		volumeCurve = "infectedAttenuationCurve";
		spatial = 1;
		doppler = 0;
		loop = 1;
	};
	class SFW_Artifact_SnowFlakeSound
	{
		soundShaders[] = {"SFW_Artifact_SnowFlake_SoundShader"};
		sound3DProcessingType = "infected3DProcessingType";
		volumeCurve = "infectedAttenuationCurve";
		spatial = 1;
		doppler = 0;
		loop = 1;
	};
	class SFW_Artifact_SoulSound
	{
		soundShaders[] = {"SFW_Artifact_Soul_SoundShader"};
		sound3DProcessingType = "infected3DProcessingType";
		volumeCurve = "infectedAttenuationCurve";
		spatial = 1;
		doppler = 0;
		loop = 1;
	};
	class SFW_Artifact_CompassSound
	{
		soundShaders[] = {"SFW_Artifact_Compass_SoundShader"};
		sound3DProcessingType = "infected3DProcessingType";
		volumeCurve = "infectedAttenuationCurve";
		spatial = 1;
		doppler = 0;
		loop = 1;
	};
	class SFW_Artifact_SparklerSound
	{
		soundShaders[] = {"SFW_Artifact_Sparkler_SoundShader"};
		sound3DProcessingType = "infected3DProcessingType";
		volumeCurve = "infectedAttenuationCurve";
		spatial = 1;
		doppler = 0;
		loop = 1;
	};
	class SFW_Artifact_FlashSound
	{
		soundShaders[] = {"SFW_Artifact_Flash_SoundShader"};
		sound3DProcessingType = "infected3DProcessingType";
		volumeCurve = "infectedAttenuationCurve";
		spatial = 1;
		doppler = 0;
		loop = 1;
	};
	class SFW_Artifact_LightSound
	{
		soundShaders[] = {"SFW_Artifact_Light_SoundShader"};
		sound3DProcessingType = "infected3DProcessingType";
		volumeCurve = "infectedAttenuationCurve";
		spatial = 1;
		doppler = 0;
		loop = 1;
	};
	class SFW_Artifact_JellyFishSound
	{
		soundShaders[] = {"SFW_Artifact_JellyFish_SoundShader"};
		sound3DProcessingType = "infected3DProcessingType";
		volumeCurve = "infectedAttenuationCurve";
		spatial = 1;
		doppler = 0;
		loop = 1;
	};
	class SFW_Artifact_TwistSound
	{
		soundShaders[] = {"SFW_Artifact_Twist_SoundShader"};
		sound3DProcessingType = "infected3DProcessingType";
		volumeCurve = "infectedAttenuationCurve";
		spatial = 1;
		doppler = 0;
		loop = 1;
	};
	class SFW_Artifact_SpringSound
	{
		soundShaders[] = {"SFW_Artifact_Spring_SoundShader"};
		sound3DProcessingType = "infected3DProcessingType";
		volumeCurve = "infectedAttenuationCurve";
		spatial = 1;
		doppler = 0;
		loop = 1;
	};
	class SFW_Artifact_GravySound
	{
		soundShaders[] = {"SFW_Artifact_Gravy_SoundShader"};
		sound3DProcessingType = "infected3DProcessingType";
		volumeCurve = "infectedAttenuationCurve";
		spatial = 1;
		doppler = 0;
		loop = 1;
	};
	class SFW_Artifact_GoldenFishSound
	{
		soundShaders[] = {"SFW_Artifact_GoldenFish_SoundShader"};
		sound3DProcessingType = "infected3DProcessingType";
		volumeCurve = "infectedAttenuationCurve";
		spatial = 1;
		doppler = 0;
		loop = 1;
	};
	class SFW_Artifact_ThornSound
	{
		soundShaders[] = {"SFW_Artifact_Thorn_SoundShader"};
		sound3DProcessingType = "infected3DProcessingType";
		volumeCurve = "infectedAttenuationCurve";
		spatial = 1;
		doppler = 0;
		loop = 1;
	};
	class SFW_Artifact_ColobokSound
	{
		soundShaders[] = {"SFW_Artifact_Colobok_SoundShader"};
		sound3DProcessingType = "infected3DProcessingType";
		volumeCurve = "infectedAttenuationCurve";
		spatial = 1;
		doppler = 0;
		loop = 1;
	};
	class SFW_Artifact_BatterySound
	{
		soundShaders[] = {"SFW_Artifact_Battery_SoundShader"};
		sound3DProcessingType = "infected3DProcessingType";
		volumeCurve = "infectedAttenuationCurve";
		spatial = 1;
		doppler = 0;
		loop = 1;
	};
	class SFW_Artifact_BatteryBlueSound
	{
		soundShaders[] = {"SFW_Artifact_BatteryBlue_SoundShader"};
		sound3DProcessingType = "infected3DProcessingType";
		volumeCurve = "infectedAttenuationCurve";
		spatial = 1;
		doppler = 0;
		loop = 1;
	};
	class SFW_Artifact_FlameSound
	{
		soundShaders[] = {"SFW_Artifact_Flame_SoundShader"};
		sound3DProcessingType = "infected3DProcessingType";
		volumeCurve = "infectedAttenuationCurve";
		spatial = 1;
		doppler = 0;
		loop = 1;
	};
	class SFW_Artifact_CrustalThornSound
	{
		soundShaders[] = {"SFW_Artifact_CrustalThorn_SoundShader"};
		sound3DProcessingType = "infected3DProcessingType";
		volumeCurve = "infectedAttenuationCurve";
		spatial = 1;
		doppler = 0;
		loop = 1;
	};
	class SFW_Artifact_NightStarSound
	{
		soundShaders[] = {"SFW_Artifact_NightStar_SoundShader"};
		sound3DProcessingType = "infected3DProcessingType";
		volumeCurve = "infectedAttenuationCurve";
		spatial = 1;
		doppler = 0;
		loop = 1;
	};
	class SFW_Artifact_LensSound
	{
		soundShaders[] = {"SFW_Artifact_Lens_SoundShader"};
		sound3DProcessingType = "infected3DProcessingType";
		volumeCurve = "infectedAttenuationCurve";
		spatial = 1;
		doppler = 0;
		loop = 1;
	};
	class SFW_Artifact_DummySound
	{
		soundShaders[] = {"SFW_Artifact_Dummy_SoundShader"};
		sound3DProcessingType = "infected3DProcessingType";
		volumeCurve = "infectedAttenuationCurve";
		spatial = 1;
		doppler = 0;
		loop = 1;
	};
	class SFW_Artifact_BabbleSound
	{
		soundShaders[] = {"SFW_Artifact_Babble_SoundShader"};
		sound3DProcessingType = "infected3DProcessingType";
		volumeCurve = "infectedAttenuationCurve";
		spatial = 1;
		doppler = 0;
		loop = 1;
	};
	class SFW_Artifact_BreakingMeetSound
	{
		soundShaders[] = {"SFW_Artifact_BreakingMeet_SoundShader"};
		sound3DProcessingType = "infected3DProcessingType";
		volumeCurve = "infectedAttenuationCurve";
		spatial = 1;
		doppler = 0;
		loop = 1;
	};
	class SFW_Artifact_DropSound
	{
		soundShaders[] = {"SFW_Artifact_Drop_SoundShader"};
		sound3DProcessingType = "infected3DProcessingType";
		volumeCurve = "infectedAttenuationCurve";
		spatial = 1;
		doppler = 0;
		loop = 1;
	};
	class SFW_Artifact_EyeSound
	{
		soundShaders[] = {"SFW_Artifact_Eye_SoundShader"};
		sound3DProcessingType = "infected3DProcessingType";
		volumeCurve = "infectedAttenuationCurve";
		spatial = 1;
		doppler = 0;
		loop = 1;
	};
	class SFW_Artifact_CrustalSound
	{
		soundShaders[] = {"SFW_Artifact_Crustal_SoundShader"};
		sound3DProcessingType = "infected3DProcessingType";
		volumeCurve = "infectedAttenuationCurve";
		spatial = 1;
		doppler = 0;
		loop = 1;
	};
	class SFW_Artifact_BloodOfStoneSound
	{
		soundShaders[] = {"SFW_Artifact_BloodOfStone_SoundShader"};
		sound3DProcessingType = "infected3DProcessingType";
		volumeCurve = "infectedAttenuationCurve";
		spatial = 1;
		doppler = 0;
		loop = 1;
	};
	class SFW_Artifact_SteeringWheelSound
	{
		soundShaders[] = {"SFW_Artifact_SteeringWheel_SoundShader"};
		sound3DProcessingType = "infected3DProcessingType";
		volumeCurve = "infectedAttenuationCurve";
		spatial = 1;
		doppler = 0;
		loop = 1;
	};
	class SFW_Artifact_MomisBeadsSound
	{
		soundShaders[] = {"SFW_Artifact_MomisBeads_SoundShader"};
		sound3DProcessingType = "infected3DProcessingType";
		volumeCurve = "infectedAttenuationCurve";
		spatial = 1;
		doppler = 0;
		loop = 1;
	};
	class SFW_Artifact_StoneFlowerSound
	{
		soundShaders[] = {"SFW_Artifact_StoneFlower_SoundShader"};
		sound3DProcessingType = "infected3DProcessingType";
		volumeCurve = "infectedAttenuationCurve";
		spatial = 1;
		doppler = 0;
		loop = 1;
	};
	class SFW_Artifact_OasisSound
	{
		soundShaders[] = {"SFW_Artifact_Oasis_SoundShader"};
		sound3DProcessingType = "infected3DProcessingType";
		volumeCurve = "infectedAttenuationCurve";
		spatial = 1;
		doppler = 0;
		loop = 1;
	};
	class SFW_Artifact_Monolit
	{
		soundShaders[] = {"SFW_Artifact_Monolit_SoundShader"};
		sound3DProcessingType = "infected3DProcessingType";
		volumeCurve = "infectedAttenuationCurve";
		spatial = 1;
		doppler = 0;
		loop = 1;
	};
	class SFW_Artifact_NanoCell
	{
		soundShaders[] = {"SFW_Artifact_NanoCell_SoundShader"};
		sound3DProcessingType = "infected3DProcessingType";
		volumeCurve = "infectedAttenuationCurve";
		spatial = 1;
		doppler = 0;
		loop = 1;
	};
};
class CfgSoundShaders
{
	class SFW_Artifact_Monolit_SoundShader
	{
		samples[] = {{"\DS_Artifacts\Sounds\Monolit",1}};
		volume = 3.3;
		range = 3;
	};
	class SFW_Artifact_NanoCell_SoundShader
	{
		samples[] = {{"\DS_Artifacts\Sounds\NanoCell",1}};
		volume = 3.4;
		range = 3;
	};
	class SFW_Artifact_FireBall_SoundShader
	{
		samples[] = {{"\DS_Artifacts\Sounds\FireBall",1}};
		volume = 3.9;
		range = 3;
	};
	class SFW_Artifact_SnowFlake_SoundShader
	{
		samples[] = {{"\DS_Artifacts\Sounds\SnowFlake",1}};
		volume = 3.9;
		range = 3;
	};
	class SFW_Artifact_Soul_SoundShader
	{
		samples[] = {{"\DS_Artifacts\Sounds\Soul",1}};
		volume = 3.9;
		range = 3;
	};
	class SFW_Artifact_Compass_SoundShader
	{
		samples[] = {{"\DS_Artifacts\Sounds\Compass",1}};
		volume = 3.9;
		range = 3;
	};
	class SFW_Artifact_Sparkler_SoundShader
	{
		samples[] = {{"\DS_Artifacts\Sounds\Sparkler",1}};
		volume = 3.9;
		range = 3;
	};
	class SFW_Artifact_Flash_SoundShader
	{
		samples[] = {{"\DS_Artifacts\Sounds\Flash",1}};
		volume = 3.9;
		range = 3;
	};
	class SFW_Artifact_Light_SoundShader
	{
		samples[] = {{"\DS_Artifacts\Sounds\Light",1}};
		volume = 3.9;
		range = 3;
	};
	class SFW_Artifact_JellyFish_SoundShader
	{
		samples[] = {{"\DS_Artifacts\Sounds\Jellyfish",1}};
		volume = 3.9;
		range = 3;
	};
	class SFW_Artifact_Twist_SoundShader
	{
		samples[] = {{"\DS_Artifacts\Sounds\Twist",1}};
		volume = 3.9;
		range = 3;
	};
	class SFW_Artifact_Spring_SoundShader
	{
		samples[] = {{"\DS_Artifacts\Sounds\Spring",1}};
		volume = 3.9;
		range = 3;
	};
	class SFW_Artifact_Gravy_SoundShader
	{
		samples[] = {{"\DS_Artifacts\Sounds\Gravy",1}};
		volume = 3.9;
		range = 3;
	};
	class SFW_Artifact_GoldenFish_SoundShader
	{
		samples[] = {{"\DS_Artifacts\Sounds\GoldenFish",1}};
		volume = 3.9;
		range = 3;
	};
	class SFW_Artifact_Thorn_SoundShader
	{
		samples[] = {{"\DS_Artifacts\Sounds\Crustal",1}};
		volume = 3.9;
		range = 3;
	};
	class SFW_Artifact_Colobok_SoundShader
	{
		samples[] = {{"\DS_Artifacts\Sounds\Colobolk",1}};
		volume = 3.9;
		range = 3;
	};
	class SFW_Artifact_Battery_SoundShader
	{
		samples[] = {{"\DS_Artifacts\Sounds\Battery",1}};
		volume = 3.9;
		range = 3;
	};
	class SFW_Artifact_BatteryBlue_SoundShader
	{
		samples[] = {{"\DS_Artifacts\Sounds\Battery",1}};
		volume = 3.9;
		range = 3;
	};
	class SFW_Artifact_Flame_SoundShader
	{
		samples[] = {{"\DS_Artifacts\Sounds\Flame",1}};
		volume = 3.9;
		range = 3;
	};
	class SFW_Artifact_CrustalThorn_SoundShader
	{
		samples[] = {{"\DS_Artifacts\Sounds\Crustal",1}};
		volume = 3.9;
		range = 3;
	};
	class SFW_Artifact_NightStar_SoundShader
	{
		samples[] = {{"\DS_Artifacts\Sounds\NightStar",1}};
		volume = 3.9;
		range = 3;
	};
	class SFW_Artifact_Lens_SoundShader
	{
		samples[] = {{"\DS_Artifacts\Sounds\MoonLight",1}};
		volume = 3.9;
		range = 3;
	};
	class SFW_Artifact_Dummy_SoundShader
	{
		samples[] = {{"\DS_Artifacts\Sounds\Dummy",1}};
		volume = 3.9;
		range = 3;
	};
	class SFW_Artifact_Babble_SoundShader
	{
		samples[] = {{"\DS_Artifacts\Sounds\Bubble",1}};
		volume = 3.9;
		range = 3;
	};
	class SFW_Artifact_BreakingMeet_SoundShader
	{
		samples[] = {{"\DS_Artifacts\Sounds\BreakingMeat",1}};
		volume = 3.9;
		range = 3;
	};
	class SFW_Artifact_Drop_SoundShader
	{
		samples[] = {{"\DS_Artifacts\Sounds\Eye",1}};
		volume = 3.9;
		range = 3;
	};
	class SFW_Artifact_Eye_SoundShader
	{
		samples[] = {{"\DS_Artifacts\Sounds\Eye",1}};
		volume = 3.9;
		range = 3;
	};
	class SFW_Artifact_Crustal_SoundShader
	{
		samples[] = {{"\DS_Artifacts\Sounds\Crustal",1}};
		volume = 3.9;
		range = 3;
	};
	class SFW_Artifact_BloodOfStone_SoundShader
	{
		samples[] = {{"\DS_Artifacts\Sounds\BloodOfStone",1}};
		volume = 3.9;
		range = 3;
	};
	class SFW_Artifact_SteeringWheel_SoundShader
	{
		samples[] = {{"\DS_Artifacts\Sounds\SteeringWheel",1}};
		volume = 3.9;
		range = 3;
	};
	class SFW_Artifact_MomisBeads_SoundShader
	{
		samples[] = {{"\DS_Artifacts\Sounds\MomisBeads",1}};
		volume = 3.9;
		range = 3;
	};
	class SFW_Artifact_StoneFlower_SoundShader
	{
		samples[] = {{"\DS_Artifacts\Sounds\StoneFlower",1}};
		volume = 3.9;
		range = 3;
	};
	class SFW_Artifact_Oasis_SoundShader
	{
		samples[] = {{"\DS_Artifacts\sounds\Oasis",1}};
		volume = 3.9;
		range = 3;
	};
};
class CfgSlots
{
	class Slot_Artefacts
	{
		name = "Artefacts";
		displayName = "Малый артефакт";
		ghostIcon = "set:dayz_inventory image:missing";
	};
	class Slot_Artefacts1
	{
		name = "Artefacts1";
		displayName = "Большой артефакт";
		ghostIcon = "set:dayz_inventory image:missing";
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class ProxyArtefacts: ProxyAttachment
	{
		scope = 0;
		inventorySlot[] = {"Artefacts"};
	};
	class ProxyArtefacts1: ProxyAttachment
	{
		scope = 0;
		inventorySlot[] = {"Artefacts1"};
	};
};
