class CfgPatches
{
	class A3_Aegis_Weapons_F_Aegis_Launchers_Stinger
	{
		addonRootClass = "A3_Aegis_Weapons_F_Aegis";
		requiredAddons[] = {"A3_Aegis_Weapons_F_Aegis"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
};

class CfgWeapons
{
	class Mode_SemiAuto;
	class WeaponSlotsInfo;
	class Launcher;
	class PointerSlot_Launcher;
	class Launcher_Base_F: Launcher
	{
		class WeaponSlotsInfo;
	};
	class launch_Stinger_base: Launcher_Base_F
	{
		///////////////////////////
		// Setup
		///////////////////////////
		author = $STR_A3_Heliotrope;
		scope = private;
		displayName = $STR_A3_CfgWeapons_launch_MPRL0;
		class Library
		{
			libTextDesc = "$STR_A3_CfgWeapons_launch_MPRL_Library0";
		};
		descriptionShort = "$STR_A3_CfgWeapons_launch_MPRL1";
		model = "\A3_Aegis\Weapons_F_Aegis\Launchers\FIM-92\stinger_launcher_loaded.p3d";
		UiPicture = "\A3\Weapons_F\Data\UI\icon_aa_CA.paa";
		nameSound = aalauncher;

		///////////////////////////
		// Optic
		///////////////////////////
		/*weaponInfoType = RscOptics_titan;
		modelOptics = "\A3\Weapons_F_Beta\acc\reticle_titan.p3d";*/
		//class OpticsModes
		//{
		//	class StepScope
		//	{
		//		opticsID = 1;
		//		useModelOptics = 1;
		//		opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
		//		opticsFlare = 0;
		//		opticsZoomMin = 0.08333;
		//		opticsZoomMax = 0.04167;
		//		opticsZoomInit = 0.08333;
		//		distanceZoomMin = 300;
		//		distanceZoomMax = 300;
		//		memoryPointCamera = "eye";
		//		cameraDir = "look";
		//		visionMode[] = {"Normal","Ti"};
		//		thermalMode[] = {0,1};
		//		opticsDisablePeripherialVision = 1;
		//		discretefov[] = {0.08333,0.04167};
		//		discreteInitIndex = 0;
		//	};
		//};

		///////////////////////////
		// Weapon Info
		///////////////////////////
		magazines[] = 
		{
			Stinger
		};
		magazineWell[] = 
		{
			Stinger_tube
		};
		cursor = missile;
		handAnim[] = 
		{
			"OFP2_ManSkeleton",
			"\A3\Weapons_F_Beta\Launchers\Titan\Data\Anim\titan.rtm"
		};
		reloadAction = ReloadRPG;
		recoil = recoil_titan_long;
		maxZeroing = 2000;
		shotPos = "usti hlavne";
		shotEnd = "konec hlavne";
		class GunParticles
		{
			class effect1
			{
				positionName = "konec hlavne";
				directionName = "usti hlavne";
				effectName = "RocketBackEffectsNLAWNT";
			};
		};
		modes[] = 
		{
			Single
		};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound"};
			class BaseSoundModeType{};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Titan",3.1622777,1,2000};
				soundBegin[] = {"begin1",1};
			};
			recoil = "recoil_single_titan";
			aiRateOfFire = 7.0;
			aiRateOfFireDistance = 1500;
			minRange = 70;
			minRangeProbab = 0.6;
			midRange = 150;
			midRangeProbab = 0.85;
			maxRange = 3450;
			maxRangeProbab = 0.85;
		};
		value = 20;
		canLock = 2;
		picture = "\A3\Weapons_F_Beta\Launchers\Titan\Data\UI\icon_launch_B_Titan_F_ca.paa";
		inertia = 1.2;
		aimTransitionSpeed = 0.6;
		dexterity = 0.8;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 140;
			class PointerSlot: PointerSlot_Launcher
			{
				iconPosition[] = {0.2,0.45};
				iconScale = 0.25;
			};
		};
		class ItemInfo
		{
			priority = 3;
		};
		weaponLockDelay = 3.0;
		weaponLockSystem = 2;
		cmImmunity = 0.4;
		//hiddenSelections[] = {"camo_launcher","camo_tube"};

		///////////////////////////
		// Sound
		///////////////////////////
		drySound[] = {"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Dry_Titan",0.15848932,1,18};
		reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\Launchers\Titan\reload_Titan",1.0,1,20};
		lockingTargetSound[] = {"A3\Sounds_F\arsenal\weapons\Launchers\Titan\locking_Titan",0.31622776,1};
		lockedTargetSound[] = {"A3\Sounds_F\arsenal\weapons\Launchers\Titan\locked_Titan",0.31622776,2.5};
	};
	class launch_B_Stinger_F: launch_Stinger_base
	{
		author = $STR_A3_Heliotrope;
		scope = public;
		displayName = "FIM-92F Stinger";
		picture = "\A3\Weapons_F_Beta\Launchers\Titan\Data\UI\icon_launch_B_Titan_F_ca.paa";
		//hiddenSelectionsTextures[] = {"A3\Weapons_F_Beta\Launchers\Titan\Data\Launcher_CO.paa","A3\Weapons_F_Beta\Launchers\Titan\Data\TubeL_CO.paa"};
	};
};

class CfgAmmo
{
	class MissileBase;
	class Components;
	class SensorTemplateIR;
	class M_Stinger: MissileBase
	{
		model = "\A3_Aegis\weapons_f_aegis\Launchers\FIM-92\Stinger_rocket.p3d";
		hit = 80;
		indirectHit = 60;
		indirectHitRange = 6;
		warheadName = "HE";
		proximityExplosionDistance = 10;
		maneuvrability = 15;
		simulationStep = 0.002;
		trackOversteer = 1;
		trackLead = 0.95;
		aiAmmoUsageFlags = 256;
		irLock = 1;
		cost = 1000;
		timeToLive = 15;
		airFriction = 0.145;
		sideAirFriction = 0.1;
		maxSpeed = 850;
		initTime = 0.25;
		thrustTime = 2.25;
		thrust = 380;
		fuseDistance = 50;
		CraterEffects = "AAMissileCrater";
		explosionEffects = "AAMissileExplosion";
		effectsMissileInit = "";
		effectsMissile = "missile3";
		soundHit1[] = {"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Explosion_titan_missile_01",2.5118864,1,1900};
		soundHit2[] = {"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Explosion_titan_missile_02",2.5118864,1,1900};
		soundHit3[] = {"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Explosion_titan_missile_03",2.5118864,1,1900};
		multiSoundHit[] = {"soundHit1",0.34,"soundHit2",0.33,"soundHit3",0.33};
		airLock = 2;
		missileLockCone = 4;
		missileKeepLockedCone = 75;
		missileLockMaxDistance = 3500;
		missileLockMinDistance = 100;
		missileLockMaxSpeed = 250;
		weaponLockSystem = "2 + 16";
		cmImmunity = 0.9;
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent: SensorTemplateIR
					{
						class AirTarget
						{
							minRange = 500;
							maxRange = 3500;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							minRange = 500;
							maxRange = 2500;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						maxTrackableSpeed = 250;
						angleRangeHorizontal = 7;
						angleRangeVertical = 4.5;
						groundNoiseDistanceCoef = 0.2;
						maxGroundNoiseDistance = 50;
					};
				};
			};
		};
		class CamShakeExplode
		{
			power = 22;
			duration = 2;
			frequency = 20;
			distance = 147.905;
		};
		class CamShakeHit
		{
			power = 110;
			duration = 0.6;
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = 2.78316;
			duration = 1.6;
			frequency = 20;
			distance = 61.9677;
		};
		class CamShakePlayerFire
		{
			power = 3;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
	};
};

class CfgMagazines
{
	class CA_LauncherMagazine;
	class Stinger: CA_LauncherMagazine
	{
		author = $STR_A3_Heliotrope;
		scope = 2;
		displayName = $STR_A3_CfgMagazines_Titan_AA0;
		displayNameShort = $STR_A3_CfgMagazines_Titan_AA_dns;
		ammo = M_Stinger;
		type = "6 * 256";
		picture = "\A3\Weapons_F_beta\Launchers\titan\Data\UI\gear_titan_missile_atl_CA.paa";
		model = "\A3\Weapons_F_beta\Launchers\titan\titan_missile_atl";
		initSpeed = 18;
		maxLeadSpeed = 277.778;
		descriptionShort = "$STR_A3_CfgMagazines_Titan_AA1";
		mass = 100;
	};
};