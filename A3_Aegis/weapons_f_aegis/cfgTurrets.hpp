class mortar_82mm_m252: mortar_82mm
{
	scope = 1;
	displayname = "$STR_A3_mortar_82mm0";
	nameSound = "CannonCore";
	cursor = "mortar";
	cursorAim = "EmptyCursor";
	sounds[] = {"StandardSound"};
	class StandardSound
	{
		begin1[] = {"A3\Sounds_F\arsenal\weapons_static\Mortar\mortar_01",1.2589254,1,250};
		begin2[] = {"A3\Sounds_F\arsenal\weapons_static\Mortar\mortar_02",1.2589254,1,250};
		soundBegin[] = {"begin1",0.5,"begin2",0.5};
	};
	reloadSound[] = {"A3\Sounds_F\arsenal\weapons_static\Mortar\reload_mortar",1.0,1,20};
	reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons_static\Mortar\reload_magazine_Mortar",1.0,1,20};
	soundServo[] = {"",0.0001,1.0};
	reloadTime = 1.8;
	magazineReloadTime = 5;
	autoReload = 1;
	canLock = 0;
	magazines[] = {"8Rnd_82mm_Mo_shells","8Rnd_82mm_Mo_Flare_white","8Rnd_82mm_Mo_Smoke_white"};
	ballisticsComputer = 2;
	class GunParticles
	{
		class FirstEffect
		{
			effectName = "MortarFired";
			positionName = "Usti Hlavne";
			directionName = "Konec Hlavne";
		};
	};
	modes[] = {"Single1","Single2","Single3","Burst1","Burst2","Burst3"};
	class Single1: Mode_SemiAuto
	{
		displayName = "$STR_A3_mortar_82mm_Single10";
		sounds[] = {"StandardSound"};
		class StandardSound
		{
			begin1[] = {"A3\Sounds_F\arsenal\weapons_static\Mortar\mortar_01",1.2589254,1,250};
			begin2[] = {"A3\Sounds_F\arsenal\weapons_static\Mortar\mortar_02",1.2589254,1,250};
			soundBegin[] = {"begin1",0.5,"begin2",0.5};
		};
		reloadSound[] = {"A3\Sounds_F\arsenal\weapons_static\Mortar\reload_mortar",1.0,1,20};
		reloadTime = 1.8;
		artilleryDispersion = 2.3;
		artilleryCharge = 0.25;
		aiRateOfFire = 1;
		aiRateOfFireDistance = 10;
		minRange = 0;
		minRangeProbab = 0.01;
		midRange = 1;
		midRangeProbab = 0.01;
		maxRange = 2;
		maxRangeProbab = 0.01;
	};
	class Single2: Single1
	{
		displayName = "$STR_A3_mortar_82mm_Single20";
		artilleryCharge = 0.6;
	};
	class Single3: Single1
	{
		displayName = "$STR_A3_mortar_82mm_Single30";
		artilleryCharge = 0.9;
	};
	class Burst1: Mode_Burst
	{
		showToPlayer = 0;
		displayName = "$STR_A3_mortar_82mm_Burst10";
		burst = 4;
		aiBurstTerminable = 1;
		sounds[] = {"StandardSound"};
		class StandardSound
		{
			begin1[] = {"A3\Sounds_F\arsenal\weapons_static\Mortar\mortar_01",1.2589254,1,250};
			begin2[] = {"A3\Sounds_F\arsenal\weapons_static\Mortar\mortar_02",1.2589254,1,250};
			soundBegin[] = {"begin1",0.5,"begin2",0.5};
		};
		reloadSound[] = {"A3\Sounds_F\arsenal\weapons_static\Mortar\reload_mortar",1.0,1,20};
		soundServo[] = {"",0.0001,1.0};
		soundBurst = 0;
		reloadTime = 1.8;
		artilleryDispersion = 2.6;
		artilleryCharge = 0.25;
		minRange = 60;
		minRangeProbab = 0.5;
		midRange = 290;
		midRangeProbab = 0.7;
		maxRange = 665;
		maxRangeProbab = 0.5;
	};
	class Burst2: Burst1
	{
		showToPlayer = 0;
		displayName = "$STR_A3_mortar_82mm_Burst20";
		artilleryCharge = 0.6;
		minRange = 230;
		minRangeProbab = 0.4;
		midRange = 1175;
		midRangeProbab = 0.6;
		maxRange = 2660;
		maxRangeProbab = 0.4;
	};
	class Burst3: Burst1
	{
		showToPlayer = 0;
		displayName = "$STR_A3_mortar_82mm_Burst30";
		artilleryCharge = 0.9;
		minRange = 540;
		minRangeProbab = 0.3;
		midRange = 2355;
		midRangeProbab = 0.4;
		maxRange = 5500;
		maxRangeProbab = 0.3;
	};
};