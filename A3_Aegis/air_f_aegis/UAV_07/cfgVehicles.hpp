class CfgVehicles
{
	class Plane;
	class UAV: Plane
	{
		class NewTurret;
		class ViewPilot;
		class ViewOptics;
		class AnimationSources;
		class Components;
	};
	class UAV_07_base_F: UAV
	{
		author = "$STR_A3_Bohemia_Interactive";
		mapSize = 9;
		_generalMacro = "UAV_04_base_F";
		features = "Randomization: No						<br />Camo selections: 1 - the whole body						<br />Script door sources: None						<br />Script animations: None						<br />Executed scripts: None						<br />Firing from vehicles: No						<br />Slingload: Slingloadable						<br />Cargo proxy indexes: None";
		displayName = "$STR_A3_CfgVehicles_UAV_04_base_F0";
		icon = "\a3\Air_F_Exp\UAV_04\Data\UI\Map_UAV_04_CA.paa";
		picture = "\a3\Air_F_Exp\UAV_04\Data\UI\UAV_04_CA.paa";
		overviewPicture = "\A3\Data_F_Exp\Images\VehicleFenghuang_ca.paa";
		unitInfoType = "RscOptics_AV_airplane_pilot";
		attenuationEffectType = "OpenHeliAttenuation";
		soundGetIn[] = {"",0.56234133,1};
		soundGetOut[] = {"",0.56234133,1,40};
		soundDammage[] = {"",0.56234133,1};
		soundLocked[] = {"\A3\Sounds_F\weapons\Rockets\opfor_lock_1",1.0,1};
		soundEngineOnInt[] = {"A3\Sounds_F\air\UAV_02\UAV_02_start_ext",0.70794576,1.0};
		soundEngineOnExt[] = {"A3\Sounds_F\air\UAV_02\UAV_02_start_int",0.70794576,1.0,400};
		soundEngineOffInt[] = {"A3\Sounds_F\air\UAV_02\UAV_02_stop_int",0.70794576,1.0};
		soundEngineOffExt[] = {"A3\Sounds_F\air\UAV_02\UAV_02_stop_ext",0.70794576,1.0,400};
		soundGearUp[] = {"A3\Sounds_F\vehicles\air\noises\drone_gear_up",1.0,1.0,120};
		soundGearDown[] = {"A3\Sounds_F\vehicles\air\noises\drone_gear_down",1.0,1.0,120};
		soundFlapsUp[] = {"A3\Sounds_F_EPC\CAS_01\Flaps_Up",0.63095737,1.0,100};
		soundFlapsDown[] = {"A3\Sounds_F_EPC\CAS_01\Flaps_Down",0.63095737,1.0,100};
		soundBushCollision1[] = {"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_bush_int_1",1.0,1,100};
		soundBushCollision2[] = {"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_bush_int_2",1.0,1,100};
		soundBushCollision3[] = {"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_bush_int_3",1.0,1,100};
		soundBushCrash[] = {"soundBushCollision1",0.33,"soundBushCollision2",0.33,"soundBushCollision3",0.33};
		soundWaterCollision1[] = {"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_water_ext_1",1.0,1,100};
		soundWaterCollision2[] = {"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_water_ext_2",1.0,1,100};
		soundWaterCrashes[] = {"soundWaterCollision1",0.5,"soundWaterCollision2",0.5};
		Crash0[] = {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_1",1.0,1,900};
		Crash1[] = {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_2",1.0,1,900};
		Crash2[] = {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_3",1.0,1,900};
		Crash3[] = {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_4",1.0,1,900};
		soundCrashes[] = {"Crash0",0.25,"Crash1",0.25,"Crash2",0.25,"Crash3",0.25};
		class Sounds
		{
			class EngineLowOut
			{
				sound[] = {"A3\Sounds_F\air\UAV_02\UAV_02_low_ext",0.70794576,1.0,450};
				frequency = "1.0 min (rpm + 0.5)";
				volume = "camPos*(rpm factor[0.95, 0])*(rpm factor[0, 0.95])";
			};
			class EngineHighOut
			{
				sound[] = {"A3\Sounds_F\air\UAV_02\UAV_02_high_ext",1.0,1.0,650};
				frequency = "(rpm factor[0.5, 1.0])";
				volume = "camPos*(rpm factor[0.2, 1.0])";
			};
			class ForsageOut
			{
				sound[] = {"A3\Sounds_F\air\UAV_02\UAV_02_forsage_ext",1.1220185,1.0,900};
				frequency = "1";
				volume = "engineOn*camPos*(thrust factor[0.6, 1.0])";
				cone[] = {3.14,3.92,2.0,0.5};
			};
			class WindNoiseOut
			{
				sound[] = {"A3\Sounds_F\air\UAV_02\noise",0.31622776,1.0,150};
				frequency = "(0.3+(1.005*(speed factor[1, 50])))";
				volume = "camPos*(speed factor[1,  50])";
			};
			class EngineLowIn
			{
				sound[] = {"A3\Sounds_F\air\UAV_02\UAV_02_low_int",1.0,1.0};
				frequency = "1.0 min (rpm + 0.5)";
				volume = "(1-camPos)*(rpm factor[0.95, 0])*(rpm factor[0, 0.95])";
			};
			class EngineHighIn
			{
				sound[] = {"A3\Sounds_F\air\UAV_02\UAV_02_high_int",1.0,1.0};
				frequency = "(rpm factor[0.5, 1.0])";
				volume = "(1-camPos)*(rpm factor[0.2, 1.0])";
			};
			class ForsageIn
			{
				sound[] = {"A3\Sounds_F\air\UAV_02\UAV_02_forsage_int",0.63095737,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(thrust factor[0.6, 1.0])";
			};
			class WindNoiseIn
			{
				sound[] = {"A3\Sounds_F\air\UAV_02\noise",0.25118864,1.0};
				frequency = "(0.3+(1.005*(speed factor[1, 50])))";
				volume = "(1-camPos)*(speed factor[1, 50])";
			};
			class scrubLandInt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\wheelsInt",1.0,1.0,100};
				frequency = 1;
				volume = "2 * (1-camPos) * (scrubLand factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]))";
			};
			class scrubLandExt
			{
				sound[] = {"A3\Sounds_F\dummysound",1.0,1.0,100};
				frequency = 1;
				volume = "camPos * (scrubLand factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]))";
			};
			class scrubBuildingInt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\wheelsInt",1.0,1.0,100};
				frequency = 1;
				volume = "(1-camPos) * (scrubBuilding factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]))";
			};
			class scrubBuildingExt
			{
				sound[] = {"A3\Sounds_F\dummysound",1.0,1.0,100};
				frequency = 1;
				volume = "camPos * (scrubBuilding factor[0.02, 0.05])";
			};
			class RainExt
			{
				sound[] = {"A3\Sounds_F\vehicles\noises\rain2_ext",1.0,1.0,100};
				frequency = 1;
				volume = "camPos * (rain - rotorSpeed/2) * 2";
			};
			class RainInt
			{
				sound[] = {"A3\Sounds_F\vehicles\noises\rain2_ext",1.0,1.0,100};
				frequency = 1;
				volume = "(1-camPos)*(rain - rotorSpeed/2)*2";
			};
		};
		memoryPointTaskMarker = "TaskMarker_1_pos";
		class Library
		{
			//libTextDesc = "$STR_A3_CfgVehicles_UAV_07_base_F_Library0";
			libTextDesc = "WIP";
		};
		model = "A3_Aegis\air_f_aegis\UAV_07\MQ9PredatorB";
		destrType = DestructWreck;
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"A3_Aegis\air_f_aegis\UAV_07\Data\mq9predatorb_co.paa"};
		armor = 50;
		armorStructural = 1;
		damageResistance = 0.004;
		killFriendlyExpCoef = 0.1;
		damageEffect = "AirDestructionEffects";
		class HitPoints
		{
			class HitHull
			{
				armor = 3;
				explosionShielding = 5;
				name = "trup";
				passThrough = 0.5;
				visual = "hull_hit";
				radius = 0.3;
				minimalHit = 0.02;
				depends = "Total";
				material = -1;
			};
			class HitEngine: HitHull
			{
				armor = 1.5;
				explosionShielding = 2;
				name = "vrtule";
				passThrough = 0.5;
				visual = "Hit_Engine";
				radius = 0.4;
				minimalHit = 0.1;
				depends = "0";
			};
			class HitFuel: HitHull
			{
				armor = 3;
				explosionShielding = 4;
				name = "motor";
				passThrough = 0.5;
				visual = "Hit_Fuel";
				radius = 0.45;
				minimalHit = 0.1;
				depends = "0";
			};
			class HitLAileron: HitHull
			{
				armor = 1.5;
				explosionShielding = 3;
				name = "HitLAileron";
				passThrough = 0.1;
				visual = "Hit_AileronL";
				radius = 0.2;
				minimalHit = 0.1;
				depends = "0";
			};
			class HitRAileron: HitLAileron
			{
				armor = 1.5;
				explosionShielding = 3;
				name = "HitRAileron";
				passThrough = 0.1;
				visual = "Hit_AileronR";
				radius = 0.2;
				minimalHit = 0.1;
				depends = "0";
			};
			class HitLCRudder: HitHull
			{
				armor = 1.5;
				explosionShielding = 3;
				name = "HitRudder";
				passThrough = 0.1;
				visual = "Hit_RudderL";
				radius = 0.2;
				minimalHit = 0.1;
				depends = "0";
			};
			class HitRRudder: HitLCRudder
			{
				armor = 1.5;
				explosionShielding = 3;
				name = "HitRudder";
				passThrough = 0.1;
				visual = "Hit_RudderR";
				radius = 0.2;
				minimalHit = 0.1;
				depends = "0";
			};
			class HitLCElevator: HitHull
			{
				armor = 1.5;
				explosionShielding = 3;
				name = "HitLCElevator";
				passThrough = 0.1;
				visual = "Hit_ElevatorL";
				radius = 0.2;
				minimalHit = 0.1;
				depends = "0";
			};
			class HitRElevator: HitLCElevator
			{
				armor = 1.5;
				explosionShielding = 3;
				name = "HitRElevator";
				passThrough = 0.1;
				visual = "Hit_ElevatorR";
				radius = 0.2;
				minimalHit = 0.1;
				depends = "0";
			};
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"A3_Aegis\air_f_aegis\UAV_07\Data\mq9predatorb.rvmat",
				"A3_Aegis\air_f_aegis\UAV_07\Data\mq9predatorb_damage.rvmat",
				"A3_Aegis\air_f_aegis\UAV_07\Data\mq9predatorb_destruct.rvmat",

				"A3_Aegis\air_f_aegis\UAV_07\Data\mq9predatorb_gearbox.rvmat",
				"A3_Aegis\air_f_aegis\UAV_07\Data\mq9predatorb_gearbox_damage.rvmat",
				"A3_Aegis\air_f_aegis\UAV_07\Data\mq9predatorb_gearbox_destruct.rvmat",

				"a3\data_f\default.rvmat",
				"a3\data_f\default.rvmat",
				"a3\data_f\default_destruct.rvmat",
			};
		};
		formationX = 30;
		formationZ = 30;
		maximumLoad = 250;
		cabinOpening = 0;
		gearRetracting = 1;
		geardowntime = 2.5;
		gearuptime = 3.5;
		lightOnGear = 0;
		driverCompartments = "Compartment3";
		cargoCompartments[] = {"Compartment2"};
		class Armory
		{
			description = "TBD UAV 04 armory TEXT";
		};
		class TransportItems{};
		uavCameraDriverPos = "pilotview";
		uavCameraDriverDir = "pilotview_dir";
		uavCameraGunnerPos = "gunnerview";
		uavCameraGunnerDir = "laser_end";
		//memoryPointLDust = "pos_dust_l";
		//memoryPointRDust = "pos_dust_r";
		memoryPointDriverOptics = "pilotview";
		//memoryPointCM[] = {"pos_flare_launcher1","pos_flare_launcher2"};
		//memoryPointCMDir[] = {"pos_flare_launcher1_dir","pos_flare_launcher2_dir"};
		//slingLoadCargoMemoryPoints[] = {"pos_SlingLoadCargo1","pos_SlingLoadCargo2","pos_SlingLoadCargo3","pos_SlingLoadCargo4"};
		extCameraPosition[] = {0.0,1.5,-15.0};
		driverOpticsModel = "A3\drones_f\Weapons_F_Gamma\Reticle\UGV_01_Optics_Driver_F.p3d";
		driverForceOptics = 1;
		getInRadius = 0;
		class ViewPilot: ViewPilot
		{
			initFov = 1;
			minFov = 0.3;
			maxFov = 1.2;
			initAngleX = 0;
			minAngleX = -65;
			maxAngleX = 85;
			initAngleY = 0;
			minAngleY = -150;
			maxAngleY = 150;
		};
		class Viewoptics: ViewOptics
		{
			initAngleX = 0;
			minAngleX = 0;
			maxAngleX = 0;
			initAngleY = 0;
			minAngleY = 0;
			maxAngleY = 0;
			initFov = 1;
			minFov = 0.3;
			maxFov = 1.2;
			visionMode[] = {"Normal","NVG","Ti"};
			thermalMode[] = {0,1};
		};
		class AnimationSources: AnimationSources
		{
			class HideWeapons
			{
				source = "user";
				animPeriod = 1e-06;
				initPhase = 1;
			};
			// Absolutely no idea what im doing 
			class CollisionLightWhite_source
			{
				source = "MarkerLight";
				markerLight = "CollisionLightDummy";
			};
			class Damper_1_source
			{
				source = "damper";
				wheel = "Gear_1_1";
			};
			class Damper_2_source
			{
				source = "damper";
				wheel = "Gear_2_1";
			};
			class Damper_3_source
			{
				source = "damper";
				wheel = "Gear_2_2";
			};
			class Wheel_1_source
			{
				source = "wheel";
				wheel = "Gear_1_1";
			};
			class Wheel_2_source
			{
				source = "wheel";
				wheel = "Gear_2_1";
			};
			class Wheel_3_source
			{
				source = "wheel";
				wheel = "Gear_2_2";
			};
		};
		maxSpeed = 300;
		landingAoa = "5*3.1415/180";
		landingSpeed = 105;
		stallSpeed = 100;
		stallWarningTreshold = 0.05;
		wheelSteeringSensitivity = 0.8;
		airBrake = 1;
		flaps = 1;
		flapsFrictionCoef = 0.3;
		angleOfIndicence = "1.5*3.1415/180";
		envelope[] = {0,0.05,0.3,2.8,6.0,6.2,6.3,6.4,6.4,6.5,6.5,6.5,1.0};
		altNoForce = 10000;
		altFullForce = 7000;
		thrustCoef[] = {1.48,1.45,1.4,1.35,1.3,1.24,1.17,1.1,0.9,0.7,0.3,0.0,0.0,0.0,0.0,0.0};
		aileronSensitivity = 1.1;
		aileronCoef[] = {0.0,0.8,1.0,1.1,1.2,1.2,1.2};
		elevatorSensitivity = 0.75;
		elevatorCoef[] = {0.0,0.13,0.2,0.26,0.32,0.38,0.43,0.48,0.54,0.58,0.53};
		rudderInfluence = 0.7071;
		rudderCoef[] = {0.0,0.8,1.5,1.8,2.1,2.3,2.4,2.4,2.4,2.3,2.2};
		aileronControlsSensitivityCoef = 4.0;
		elevatorControlsSensitivityCoef = 3.0;
		rudderControlsSensitivityCoef = 4.0;
		draconicForceXCoef = 9.0;
		draconicForceYCoef = 1.0;
		draconicForceZCoef = 1.0;
		draconicTorqueXCoef[] = {7.5,4.0,3.5,3.2,3.0,3.4,4.0,5.5,6.0,7.5,9.0};
		draconicTorqueYCoef[] = {9.0,8.3,5.0,4.3,4.0,3.7,3.5,3.3,3.1,2.9,2.8};
		maxOmega = 2000;
		class Wheels
		{
			disableWheelsWhenDestroyed = 1;
			class Wheel_1
			{
				boneName = "Wheel_1_1";
				steering = 0;
				side = "left";
				center = "Wheel_1_1_center";
				boundary = "Wheel_1_1_boundary";
				width = 0.16;
				mass = 20;
				MOI = 1;
				dampingRate = 0.1;
				dampingRateDamaged = 1;
				dampingRateDestroyed = 1000;
				maxBrakeTorque = 1500;
				maxHandBrakeTorque = 0;
				suspTravelDirection[] = {0,-1,0};
				suspForceAppPointOffset = "Wheel_1_1_center";
				tireForceAppPointOffset = "Wheel_1_1_center";
				maxCompression = 0.5;
				maxDroop = 0.5;
				sprungMass = 144;
				springStrength = 14366;
				springDamperRate = 3448;
				longitudinalStiffnessPerUnitGravity = 20;
				latStiffX = 10;
				latStiffY = 10;
				frictionVsSlipGraph[] = {{0,1},{0.5,1},{1,1}};
			};
			class Wheel_2: Wheel_1
			{
				boneName = "Wheel_2_1";
				steering = 0;
				center = "Wheel_2_1_center";
				boundary = "Wheel_2_1_boundary";
				width = 0.28;
				sprungMass = 128;
				springStrength = 12757;
				springDamperRate = 3062;
				suspForceAppPointOffset = "Wheel_2_1_center";
				tireForceAppPointOffset = "Wheel_2_1_center";
				maxCompression = 0.1;
				maxDroop = 0.1;
				suspTravelDirection[] = {0,-1,0};
			};
			class Wheel_3: Wheel_2
			{
				boneName = "Wheel_2_2";
				side = "right";
				center = "Wheel_2_2_center";
				boundary = "Wheel_2_2_boundary";
				suspForceAppPointOffset = "Wheel_2_2_center";
				tireForceAppPointOffset = "Wheel_2_2_center";
			};
		};
		gunAimDown = 0.0;
		weapons[] = {"CMFlareLauncher"};
		magazines[] = {"120Rnd_CMFlare_Chaff_Magazine"};
		radarTargetSize = 0.75;
		visualTargetSize = 0.8;
		irTargetSize = 0.5;
		lockDetectionSystem = 8;
		incomingMissileDetectionSystem = "8 + 16";
		soundIncommingMissile[] = {"\A3\Sounds_F\vehicles\air\noises\alarm_locked_by_missile_1",0.31622776,1.0};
		laserScanner = 1;
		showAllTargets = 4;
		nvScanner = 1;
		irScanRangeMin = 100;
		irScanRangeMax = 5500;
		irScanToEyeFactor = 5;
		irScanGround = 1;
		class Exhausts
		{
			class Exhaust_1
			{
				position = "Exhaust_1_source";
				direction = "Exhaust_1_target";
				effect = "ExhaustsEffectHeliComHP";
				engineIndex = 0;
			};
		};
		class WingVortices
		{
			class BodyLeft
			{
				effectName = "BodyVortices";
				position = "pos_Vapour_body_left";
			};
			class BodyRight
			{
				effectName = "BodyVortices";
				position = "pos_Vapour_body_right";
			};
			class WingTipLeft
			{
				effectName = "WingVortices";
				position = "pos_Vapour_wintip_left";
			};
			class WingTipRight
			{
				effectName = "WingVortices";
				position = "pos_Vapour_wintip_right";
			};
		};
		class MarkerLights
		{
			class MarkerLight_wingtip_red
			{
				color[] = {0.8,0.0,0.0};
				ambient[] = {0.08,0.0,0.0};
				intensity = 75;
				name = "CollisionLightA";
				drawLight = 1;
				drawLightSize = 0.15;
				drawLightCenterSize = 0.04;
				activeLight = 0;
				blinking = 0;
				dayLight = 0;
				useFlare = 0;
				class Attenuation
				{
					start = 0;
					constant = 0;
					linear = 25;
					quadratic = 50;
					hardLimitStart = 0.75;
					hardLimitEnd = 1;
				};
			};
			class MarkerLight_wingtip_green: MarkerLight_wingtip_red
			{
				color[] = {0.0,0.8,0.0};
				ambient[] = {0.0,0.08,0.0};
				name = "CollisionLightB";
			};
			class CollisionLightWhite1
			{
				color[] = {1.0,1.0,1.0};
				ambient[] = {0.1,0.1,0.1};
				name = "CollisionLightL";
				intensity = 75;
				drawLight = 1;
				drawLightSize = 0.2;
				drawLightCenterSize = 0.04;
				activeLight = 0;
				dayLight = 0;
				useFlare = 0;
				blinking = 1;
				blinkingPattern[] = {0.1,0.9};
				blinkingStartsOn = 1;
				blinkingPatternGuarantee = 1;
				class Attenuation
				{
					start = 0;
					constant = 0;
					linear = 25;
					quadratic = 50;
					hardLimitStart = 0.75;
					hardLimitEnd = 1;
				};
			};
			class CollisionLightWhite2: CollisionLightWhite1
			{
				name = "CollisionLightR";
			};
		};
		class Reflectors{};
		reportRemoteTargets = 1;
		reportOwnPosition = 1;
		class Components: Components
		{
			class TransportPylonsComponent
			{
				UIPicture = "\a3\Drones_F\Air_F_Gamma\UAV_02\data\ui\UAV_02_base_EDEN_F.paa";
				class pylons
				{
					class pylons1
					{
						hardpoints[] = {"B_BOMB_PYLON","B_MISSILE_PYLON"};
						attachment = "PylonRack_3Rnd_LG_scalpel";
						priority = 5;
						turret[] = {0};
						maxweight = 345;
						UIposition[] = {0.33,0.4};
					};
					class pylons2: pylons1
					{
						UIposition[] = {0.33,0.15};
						mirroredMissilePos = 1;
					};
					class pylons3: pylons1
					{
						UIposition[] = {0.33,0.35};
						mirroredMissilePos = 4;
					};
					class pylons4: pylons1
					{
						UIposition[] = {0.33,0.1};
						mirroredMissilePos = 3;
					};
				};
				class presets
				{
					class empty
					{
						displayName = "Empty";
						attachment[] = {};
					};
					class default
					{
						displayName = "Default";
						attachment[] = {"PylonRack_3Rnd_LG_scalpel","PylonRack_3Rnd_LG_scalpel","PylonRack_3Rnd_LG_scalpel"};
					};
					class CAS
					{
						displayName = "CAS";
						attachment[] = {"PylonMissile_1Rnd_Bomb_04_F","PylonMissile_1Rnd_Bomb_04_F","PylonMissile_1Rnd_Bomb_04_F"};
					};
				};
			};
			class SensorsManagerComponent
			{
				class Components
				{
					class SensorTemplateIR;
					class IRSensorComponent: SensorTemplateIR
					{
						class AirTarget
						{
							minRange = 500;
							maxRange = 4000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							minRange = 500;
							maxRange = 3000;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						maxTrackableSpeed = 50;
						angleRangeHorizontal = 51;
						angleRangeVertical = 37;
						animDirection = "mainGun";
						aimDown = -0.5;
					};
					class SensorTemplateVisual;
					class VisualSensorComponent: SensorTemplateVisual
					{
						class AirTarget
						{
							minRange = 500;
							maxRange = 3000;
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
						maxTrackableSpeed = 50;
						angleRangeHorizontal = 51;
						angleRangeVertical = 37;
						animDirection = "mainGun";
						aimDown = -0.5;
					};
					class SensorTemplatePassiveRadar;
					class PassiveRadarSensorComponent: SensorTemplatePassiveRadar
					{
						class AirTarget
						{
							minRange = 6000;
							maxRange = 6000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 6000;
							maxRange = 6000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
					};
					class SensorTemplateLaser;
					class SensorTemplateNV;
					class LaserSensorComponent: SensorTemplateLaser{};
					class NVSensorComponent: SensorTemplateNV{};
				};
			};
			class DefaultVehicleSystemsDisplayManagerLeft;
			class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft
			{
				class Components
				{
					class EmptyDisplay
					{
						componentType = "EmptyDisplayComponent";
					};
					class MinimapDisplay
					{
						componentType = "MinimapDisplayComponent";
						resource = "RscCustomInfoAirborneMiniMap";
					};
					class UAVDisplay
					{
						componentType = "UAVFeedDisplayComponent";
					};
					class SensorDisplay
					{
						componentType = "SensorsDisplayComponent";
						range[] = {4000,2000,1000,8000};
						resource = "RscCustomInfoSensors";
					};
				};
			};
			class DefaultVehicleSystemsDisplayManagerRight;
			class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight
			{
				defaultDisplay = "SensorDisplay";
				class Components
				{
					class EmptyDisplay
					{
						componentType = "EmptyDisplayComponent";
					};
					class MinimapDisplay
					{
						componentType = "MinimapDisplayComponent";
						resource = "RscCustomInfoAirborneMiniMap";
					};
					class UAVDisplay
					{
						componentType = "UAVFeedDisplayComponent";
					};
					class SensorDisplay
					{
						componentType = "SensorsDisplayComponent";
						range[] = {4000,2000,1000,8000};
						resource = "RscCustomInfoSensors";
					};
				};
			};
		};
		class Turrets
		{
			class MainTurret: NewTurret
			{
				isCopilot = 0;
				minElev = -85;
				maxElev = 10;
				initElev = 0;
				minTurn = -360;
				maxTurn = 360;
				initTurn = 0;
				maxHorizontalRotSpeed = 10.0;
				maxVerticalRotSpeed = 10.0;
				outGunnerMayFire = 1;
				inGunnerMayFire = 1;
				commanding = -1;
				body = "mainTurret";
				gun = "mainGun";
				animationSourceBody = "mainTurret";
				animationSourceGun = "mainGun";
				memoryPointGun = "laserstart";
				memoryPointGunnerOptics = "commanderview";
				gunBeg = "commanderview";
				gunEnd = "laserstart";
				gunnerOpticsModel = "A3\drones_f\Weapons_F_Gamma\Reticle\UGV_01_Optics_Gunner_F.p3d";
				gunnerForceOptics = 1;
				turretInfoType = "RscOptics_UAV_gunner";
				stabilizedInAxes = 3;
				enableManualFire = 0;
				showAllTargets = 4;
				weapons[] = {"missiles_SCALPEL","Laserdesignator_mounted"};
				magazines[] = {"Laserbatteries","6Rnd_LG_scalpel"};
				soundServo[] = {"A3\Sounds_F\vehicles\air\noises\servo_drone_turret_2",0.05623413,1,10};
				soundServoVertical[] = {"A3\Sounds_F\vehicles\air\noises\servo_drone_turret_2",0.05623413,1,10};
				GunnerCompartments = "Compartment1";
				startEngine = 0;
				LODTurnedIn = -1;
				LODTurnedOut = -1;
				class OpticsIn
				{
					class Wide
					{
						opticsDisplayName = "W";
						initAngleX = 0;
						minAngleX = -30;
						maxAngleX = 30;
						initAngleY = 0;
						minAngleY = -100;
						maxAngleY = 100;
						initFov = 0.5;
						minFov = 0.5;
						maxFov = 0.5;
						directionStabilized = 1;
						visionMode[] = {"Normal","NVG","Ti"};
						thermalMode[] = {0,1};
						gunnerOpticsModel = "A3\drones_f\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
					};
					class Medium: Wide
					{
						opticsDisplayName = "M";
						initFov = 0.1;
						minFov = 0.1;
						maxFov = 0.1;
						gunnerOpticsModel = "A3\drones_f\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_medium_F.p3d";
					};
					class Narrow: Wide
					{
						opticsDisplayName = "N";
						initFov = 0.0286;
						minFov = 0.0286;
						maxFov = 0.0286;
						gunnerOpticsModel = "A3\drones_f\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
					};
				};
				class OpticsOut
				{
					class Monocular
					{
						initAngleX = 0;
						minAngleX = -30;
						maxAngleX = 30;
						initAngleY = 0;
						minAngleY = -100;
						maxAngleY = 100;
						initFov = 1.1;
						minFov = 0.133;
						maxFov = 1.1;
						visionMode[] = {"Normal","NVG"};
						gunnerOpticsModel = "";
						gunnerOpticsEffect[] = {};
					};
				};
				class Components
				{
					class DefaultVehicleSystemsDisplayManagerLeft;
					class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft
					{
						class components
						{
							class EmptyDisplay
							{
								componentType = "EmptyDisplayComponent";
							};
							class MinimapDisplay
							{
								componentType = "MinimapDisplayComponent";
								resource = "RscCustomInfoMiniMap";
							};
							class UAVDisplay
							{
								componentType = "UAVFeedDisplayComponent";
							};
							class SensorDisplay
							{
								componentType = "SensorsDisplayComponent";
								range[] = {4000,2000,1000,8000};
								resource = "RscCustomInfoSensors";
							};
						};
					};
					class DefaultVehicleSystemsDisplayManagerRight;
					class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight
					{
						defaultDisplay = "SensorDisplay";
						class components
						{
							class EmptyDisplay
							{
								componentType = "EmptyDisplayComponent";
							};
							class MinimapDisplay
							{
								componentType = "MinimapDisplayComponent";
								resource = "RscCustomInfoMiniMap";
							};
							class UAVDisplay
							{
								componentType = "UAVFeedDisplayComponent";
							};
							class SensorDisplay
							{
								componentType = "SensorsDisplayComponent";
								range[] = {4000,2000,1000,8000};
								resource = "RscCustomInfoSensors";
							};
						};
					};
				};
			};
		};
	};
	class PlaneWreck;
	class UAV_07_wreck_F: PlaneWreck
	{
		class SimpleObject
		{
			eden = false;
			animate[] = {};
			hide[] = {};
			verticalOffset = 1.855;
			verticalOffsetWorld = 0;
			init = "''";
		};
		author = $STR_A3_A_Heliotrope;
		scope = protected;
		class Armory
		{
			disabled = true;
		};
		model = "\A3_Aegis\Air_F_Aegis\UAV_07\MQ9PredatorWreck.p3d";
		typicalCargo[] = {};
		transportAmmo = 0;
		transportRepair = 0;
		transportFuel = 0;
		transportSoldier = 0;
	};
	class I_UAV_07_F: UAV_07_base_F
	{
		author = "$STR_A3_Heliotrope";
		scope = public;
		scopeCurator = public;
		crew = "I_UAV_AI";
		typicalCargo[] = {"I_UAV_AI"};
		side = 2;
		faction = "IND_F";
		accuracy = 1;
		displayName = "$STR_A3_CfgVehicles_UAV_05";
	};
};