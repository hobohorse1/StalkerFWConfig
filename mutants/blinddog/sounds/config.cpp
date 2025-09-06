class CfgPatches
{
    class SFW_Sounds_BlindDog
    {
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] = {"DZ_Sounds_Effects"};
    };
};

class CfgSoundSets
{
    class SFW_BlindDog_Bark_SoundSet { soundShaders[] = {"SFW_BlindDog_Bark_SoundShader"}; };
    class SFW_BlindDog_Attack_SoundSet { soundShaders[] = {"SFW_BlindDog_Attack_SoundShader"}; };
    class SFW_BlindDog_Groan_SoundSet { soundShaders[] = {"SFW_BlindDog_Groan_SoundShader"}; };

    class SFW_BlindDog_Attracted0_SoundSet { soundShaders[] = {"SFW_BlindDog_Attracted0_SoundShader"}; };
    class SFW_BlindDog_Attracted1_SoundSet { soundShaders[] = {"SFW_BlindDog_Attracted1_SoundShader"}; };
    class SFW_BlindDog_Attracted2_SoundSet { soundShaders[] = {"SFW_BlindDog_Attracted2_SoundShader"}; };
    class SFW_BlindDog_Attracted3_SoundSet { soundShaders[] = {"SFW_BlindDog_Attracted3_SoundShader"}; };
    class SFW_BlindDog_Attracted4_SoundSet { soundShaders[] = {"SFW_BlindDog_Attracted4_SoundShader"}; };
    class SFW_BlindDog_Attracted5_SoundSet { soundShaders[] = {"SFW_BlindDog_Attracted5_SoundShader"}; };

    class SFW_BlindDog_Attracted0_tailDistant_SoundSet { soundShaders[] = {"SFW_BlindDog_Attracted0_tailDistant_SoundShader"}; };
    class SFW_BlindDog_Attracted1_tailDistant_SoundSet { soundShaders[] = {"SFW_BlindDog_Attracted1_tailDistant_SoundShader"}; };
    class SFW_BlindDog_Attracted2_tailDistant_SoundSet { soundShaders[] = {"SFW_BlindDog_Attracted2_tailDistant_SoundShader"}; };
    class SFW_BlindDog_Attracted3_tailDistant_SoundSet { soundShaders[] = {"SFW_BlindDog_Attracted3_tailDistant_SoundShader"}; };
    class SFW_BlindDog_Attracted4_tailDistant_SoundSet { soundShaders[] = {"SFW_BlindDog_Attracted4_tailDistant_SoundShader"}; };
    class SFW_BlindDog_Attracted5_tailDistant_SoundSet { soundShaders[] = {"SFW_BlindDog_Attracted5_tailDistant_SoundShader"}; };

    class SFW_BlindDog_Grazing_SoundSet { soundShaders[] = {"SFW_BlindDog_Grazing_SoundShader"}; };
    class SFW_BlindDog_Itch_SoundSet { soundShaders[] = {"SFW_BlindDog_Itch_SoundShader"}; };
    class SFW_BlindDog_Fear_SoundSet { soundShaders[] = {"SFW_BlindDog_Fear_SoundShader"}; };
    class SFW_BlindDog_Die_SoundSet { soundShaders[] = {"SFW_BlindDog_Die_SoundShader"}; };
    class SFW_BlindDog_Damage_SoundSet { soundShaders[] = {"SFW_BlindDog_Damage_SoundShader"}; };
};

class CfgSoundShaders
{
    class SFW_BlindDog_Bark_SoundShader
    {
        samples[] = {
            {"StalkerFWConfig/mutants/blinddog/sounds/bark_0.ogg", 1},
            {"StalkerFWConfig/mutants/blinddog/sounds/bark_1.ogg", 1},
            {"StalkerFWConfig/mutants/blinddog/sounds/bark_2.ogg", 1},
            {"StalkerFWConfig/mutants/blinddog/sounds/bark_3.ogg", 1},
            {"StalkerFWConfig/mutants/blinddog/sounds/bark_4.ogg", 1}
        };
        volume = 1.4782794;
        range = 80;
        rangeCurve = "defaultAnimalAttenuationCurve";
    };

    class SFW_BlindDog_Attack_SoundShader
    {
        samples[] = {
            {"StalkerFWConfig/mutants/blinddog/sounds/attack_hit_0.ogg", 1},
            {"StalkerFWConfig/mutants/blinddog/sounds/attack_hit_1.ogg", 1},
            {"StalkerFWConfig/mutants/blinddog/sounds/attack_hit_2.ogg", 1},
            {"StalkerFWConfig/mutants/blinddog/sounds/attack_hit_3.ogg", 1}
        };
        volume = 1.7782794;
        range = 80;
        rangeCurve = "defaultAnimalAttenuationCurve";
    };

    class SFW_BlindDog_Groan_SoundShader
    {
        samples[] = {
            {"StalkerFWConfig/mutants/blinddog/sounds/groan_0.ogg", 1},
            {"StalkerFWConfig/mutants/blinddog/sounds/groan_1.ogg", 1},
            {"StalkerFWConfig/mutants/blinddog/sounds/groan_2.ogg", 1}
        };
        volume = 0.6;
        range = 16;
        rangeCurve = "defaultAnimalAttenuationCurve";
    };

    class SFW_BlindDog_Attracted0_SoundShader
    {
        samples[] = {{"StalkerFWConfig/mutants/blinddog/sounds/attracted_0.ogg", 1}};
        volume = 1.0;
        range = 100;
        rangeCurve = "defaultAnimalAttenuationCurve";
    };
    class SFW_BlindDog_Attracted1_SoundShader: SFW_BlindDog_Attracted0_SoundShader
    { samples[] = {{"StalkerFWConfig/mutants/blinddog/sounds/attracted_1.ogg", 1}}; };
    class SFW_BlindDog_Attracted2_SoundShader: SFW_BlindDog_Attracted0_SoundShader
    { samples[] = {{"StalkerFWConfig/mutants/blinddog/sounds/attracted_2.ogg", 1}}; };
    class SFW_BlindDog_Attracted3_SoundShader: SFW_BlindDog_Attracted0_SoundShader
    { samples[] = {{"StalkerFWConfig/mutants/blinddog/sounds/attracted_3.ogg", 1}}; };
    class SFW_BlindDog_Attracted4_SoundShader: SFW_BlindDog_Attracted0_SoundShader
    { samples[] = {{"StalkerFWConfig/mutants/blinddog/sounds/attracted_4.ogg", 1}}; };
    class SFW_BlindDog_Attracted5_SoundShader: SFW_BlindDog_Attracted0_SoundShader
    { samples[] = {{"StalkerFWConfig/mutants/blinddog/sounds/attracted_5.ogg", 1}}; };

    class SFW_BlindDog_Attracted0_tailDistant_SoundShader
    {
        samples[] = {{"StalkerFWConfig/mutants/blinddog/sounds/attracted_0_distant.ogg", 1}};
        volume = 5.0118723;
        range = 900;
        rangeCurve[] = {{0,0}, {150,0.8}, {310,1}, {400,0.5}, {650,1}, {900,1}};
    };
    class SFW_BlindDog_Attracted1_tailDistant_SoundShader: SFW_BlindDog_Attracted0_tailDistant_SoundShader
    { samples[] = {{"StalkerFWConfig/mutants/blinddog/sounds/attracted_1_distant.ogg", 1}}; };
    class SFW_BlindDog_Attracted2_tailDistant_SoundShader: SFW_BlindDog_Attracted0_tailDistant_SoundShader
    { samples[] = {{"StalkerFWConfig/mutants/blinddog/sounds/attracted_2_distant.ogg", 1}}; };
    class SFW_BlindDog_Attracted3_tailDistant_SoundShader: SFW_BlindDog_Attracted0_tailDistant_SoundShader
    { samples[] = {{"StalkerFWConfig/mutants/blinddog/sounds/attracted_3_distant.ogg", 1}}; };
    class SFW_BlindDog_Attracted4_tailDistant_SoundShader: SFW_BlindDog_Attracted0_tailDistant_SoundShader
    { samples[] = {{"StalkerFWConfig/mutants/blinddog/sounds/attracted_4_distant.ogg", 1}}; };
    class SFW_BlindDog_Attracted5_tailDistant_SoundShader: SFW_BlindDog_Attracted0_tailDistant_SoundShader
    { samples[] = {{"StalkerFWConfig/mutants/blinddog/sounds/attracted_5_distant.ogg", 1}}; };

    class SFW_BlindDog_Grazing_SoundShader
    {
        samples[] = {
            {"StalkerFWConfig/mutants/blinddog/sounds/idle_0.ogg", 1},
            {"StalkerFWConfig/mutants/blinddog/sounds/idle_1.ogg", 1},
            {"StalkerFWConfig/mutants/blinddog/sounds/idle_2.ogg", 1},
            {"StalkerFWConfig/mutants/blinddog/sounds/idle_3.ogg", 1},
            {"StalkerFWConfig/mutants/blinddog/sounds/idle_4.ogg", 1}
        };
        volume = 1.5645;
        range = 50;
        rangeCurve = "defaultAnimalAttenuationCurve";
    };

    class SFW_BlindDog_Itch_SoundShader
    {
        samples[] = {
            {"StalkerFWConfig/mutants/blinddog/sounds/itch_0.ogg", 1},
            {"StalkerFWConfig/mutants/blinddog/sounds/itch_1.ogg", 1},
            {"StalkerFWConfig/mutants/blinddog/sounds/itch_2.ogg", 1},
            {"StalkerFWConfig/mutants/blinddog/sounds/itch_3.ogg", 1}
        };
        volume = 1.5645;
        range = 20;
        rangeCurve = "defaultAnimalAttenuationCurve";
    };

    class SFW_BlindDog_Fear_SoundShader
    {
        samples[] = {
            {"StalkerFWConfig/mutants/blinddog/sounds/fear_0.ogg", 1},
            {"StalkerFWConfig/mutants/blinddog/sounds/fear_1.ogg", 1},
            {"StalkerFWConfig/mutants/blinddog/sounds/fear_2.ogg", 1},
            {"StalkerFWConfig/mutants/blinddog/sounds/fear_3.ogg", 1},
            {"StalkerFWConfig/mutants/blinddog/sounds/fear_4.ogg", 1}
        };
        volume = 1.5782794;
        range = 75;
        rangeCurve = "defaultAnimalAttenuationCurve";
    };

    class SFW_BlindDog_Die_SoundShader
    {
        samples[] = {
            {"StalkerFWConfig/mutants/blinddog/sounds/die_0.ogg", 1},
            {"StalkerFWConfig/mutants/blinddog/sounds/die_1.ogg", 1},
            {"StalkerFWConfig/mutants/blinddog/sounds/die_2.ogg", 1}
        };
        volume = 1.3782794;
        range = 55;
        rangeCurve = "defaultAnimalAttenuationCurve";
    };

    class SFW_BlindDog_Damage_SoundShader
    {
        samples[] = {
            {"StalkerFWConfig/mutants/blinddog/sounds/damage_0.ogg", 1},
            {"StalkerFWConfig/mutants/blinddog/sounds/damage_1.ogg", 1},
            {"StalkerFWConfig/mutants/blinddog/sounds/damage_2.ogg", 1},
            {"StalkerFWConfig/mutants/blinddog/sounds/damage_3.ogg", 1}
        };
        volume = 1.5782794;
        range = 70;
        rangeCurve = "defaultAnimalAttenuationCurve";
    };
};