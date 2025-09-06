class CfgPatches
{
    class StalkerFWConfig
	{
        units[]={};
        weapons[]={};
        requiredVersion=0.1;
        requiredAddons[]=
            {
                "DZ_Data",
                "DZ_Scripts",
		    };
    };
};

class CfgMods
{
    class StalkerFWConfig
	{

        dir="StalkerFWConfig";
        picture="";
        action="";
        hideName=1;
        hidePicture=1;
        name="StalkerFWConfig";
        credits="";
        author="Shlyosha";
        authorID="0";
        version=1;
        extra=0;
        type="mod";
        dependencies[]=
            {
                "World",
				"GameLib",
				"Game",
				"Mission"
		    };
    };
};