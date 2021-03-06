class CfgPatches {
	class breakingpoint_server_config {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"breakingpoint_server"};
	};
};
////////////////////////////////////////////////////////////////////////////////////
//////////////////		Breaking Point Server Configuration
////////////////////////////////////////////////////////////////////////////////////
class CfgBreakingPointServerSettings
{
	class StorageObjects
	{
		storageLimit = 7;		// Storage object Limit
		immortalHavens = 0;		// make havens immortal 0 = Off 1 = On
	};
	class CustomLoot
	{
		customLootSetting = 1;	// 0 = SC off, 	1 = SC on (default),	2 = ghosthotel weapon insted of SC
	};
	class MixedGroupPointsGain
	{
		disableMixedGroupPointsGain = 0;	//tunrs point gain for mixed group off, point lose still on 0 = off , 1 = on
	};
	class groupLeaveTimer
	{
		groupLeaveTimeOut = 600;	//time in seconds between leaving group and joining new/old one if  0 => Off
	};
	class ServerRestartSettings
	{
		overwriteExtensionCall = 1; // 1 -- Overwrite BPs hard coded restart schedual 0 -- Use BP hard coded restart schedual
		restartInterval = 180;		// Time in minutes for your server to restart after initializing
	};
};

class CfgDifficultyPresets
{
	class Regular
	{
		class Options
		{
			waypoints=0;		// Waypoints Regular(3PP) (0 = never, 1 = fade out, 2 = always)
		};
	};

	class Veteran
	{
		class Options
		{
			waypoints=0;		// Waypoints Veteran(1PP) (0 = never, 1 = fade out, 2 = always)
		};
	};
};
////////////////////////////////////////////////////////////////////////////////////
//////////////////		Breaking Point Server Configuration	End
////////////////////////////////////////////////////////////////////////////////////
