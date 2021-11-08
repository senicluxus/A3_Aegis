class CfgVehicles
{
	class LandVehicle;
	class StaticWeapon: LandVehicle
	{
		class Turrets
		{
			class MainTurret;
		};
	};
	class StaticMortar: StaticWeapon
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class ViewOptics;
			};
		};
	};
	class Mortar_02_base_F: StaticMortar
	{
		features = "Randomization: No						<br />Camo selections: 1 - the whole weapon with pod						<br />Script door sources: None						<br />Script animations: None						<br />Executed scripts: None						<br />Firing from vehicles: Just the weapon						<br />Slingload: No						<br />Cargo proxy indexes: None";
		author = $STR_A3_Heliotrope;
		scope = protected;
		displayname = $STR_A3_CfgVehicles_Mortar_02_Base0;
		class Library
		{
			libTextDesc = "$STR_A3_CfgVehicles_Mortar_01_Base_Library0";
		};
		transportSoldier = 0;
		cargoAction[] = {"Mortar_Gunner"};
		getInAction = "GetInMortar";
		getOutAction = "GetOutLow";
		unitInfoType = "RscUnitInfoMortar";
		editorSubcategory = "EdSubcat_Turrets";
		//picture = "A3_Aegis\static_f_aegis\Mortar_02\Data\m252_81mm_ca.paa";
		//icon = "A3_Aegis\static_f_aegis\Mortar_02\Data\m252_81mm_CA.paa";
		cost = 200000;
		accuracy = 0.25;
		EPEImpulseDamageCoef = 5;
		class Damage
		{
			tex[] = {};
			mat[] = {"A3_Aegis\static_f_aegis\Mortar_02\Data\m252_81mm.rvmat","A3_Aegis\static_f_aegis\Mortar_02\Data\m252_81mm_damage.rvmat","A3_Aegis\static_f_aegis\Mortar_02\Data\m252_81mm_destruct.rvmat"};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				gunnerAction = "Mortar_Gunner";
				gunnergetInAction = "";
				gunnergetOutAction = "";
				weapons[] = {"mortar_82mm_m252"};
				elevationMode = 1;
				initCamElev = 0;
				minCamElev = -35;
				maxCamElev = 35;
				initElev = 0;
				minTurn = -180;
				maxTurn = 180;
				initTurn = 0;
				cameraDir = "look";
				discreteDistance[] = {100,200,300,400,500,700,1000,1600,2000,2400,2800};
				discreteDistanceCameraPoint[] = {"eye"};
				discreteDistanceInitIndex = 5;
				turretInfoType = "RscWeaponRangeArtillery";
				gunnerForceOptics = 0;
				memoryPointGunnerOptics = "eye";
				gunnerOpticsModel = "\A3\Weapons_F\acc\reticle_Mortar_01_F.p3d";
				disableSoundAttenuation = 1;
				class ViewOptics: ViewOptics
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.174;
					minFov = 0.0077778;
					maxFov = 0.14;
					visionMode[] = {"Normal", "NVG"};
				};
				minelev = -27;
				//maxelev = 21;
				maxelev = 27;
				magazines[] = {"8Rnd_82mm_Mo_shells","8Rnd_82mm_Mo_shells","8Rnd_82mm_Mo_shells","8Rnd_82mm_Mo_shells","8Rnd_82mm_Mo_Flare_white","8Rnd_82mm_Mo_Smoke_white"};
				ejectDeadGunner = 1;
				usepip = 2;
			};
		};
		class EventHandlers
		{
			fired = "_this call (uinamespace getvariable 'BIS_fnc_effectFired');";
		};
		htMin = 1;
		htMax = 480;
		afMax = 0;
		mfMax = 0;
		mFact = 1;
		tBody = 100;
		class DestructionEffects
		{
			class Smoke
			{
				simulation = "particles";
				type = "WeaponWreckSmoke";
				position = "destructionEffect";
				intensity = 1;
				interval = 1;
				lifeTime = 5;
			};
		};
		model = "A3_Aegis\static_f_aegis\Mortar_02\81Mortar.p3d";
		artilleryScanner = 1;
		class assembleInfo
		{
			primary = 0;
			base = "";
			assembleTo = "";
			dissasembleTo[] = {"B_Mortar_01_weapon_F","B_Mortar_01_support_F"};
			displayName = "";
		};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"A3_Aegis\static_f_aegis\Mortar_02\data\m252_81mm_co.paa"};
	};
	class B_Mortar_02_F: Mortar_02_base_F
	{
		author = $STR_A3_Heliotrope;
		class SimpleObject
		{
			eden = 1;
			animate[] = {{"mainturret",0},{"maingun",0},{"optics",0},{"optics_stabilization",0},{"legs_zeroing",0},{"uplegs_zeroing",0}};
			hide[] = {"light_back","brzdove svetlo","clan","podsvit pristroju","poskozeni"};
			verticalOffset = 0.757;
			verticalOffsetWorld = 0.035;
			init = "''";
		};
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\B_Mortar_01_F.jpg";
		scope = public;
		side = TWest;
		faction = BLU_F;
		crew = B_Soldier_F;
		availableForSupportTypes[] = {"Artillery"};
	};
};