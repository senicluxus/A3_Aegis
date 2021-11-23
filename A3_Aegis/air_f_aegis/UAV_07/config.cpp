class CfgPatches
{
	class A3_Aegis_Air_F_Aegis_UAV_07
	{
		addonRootClass = A3_Aegis_Air_F_Aegis;
		requiredAddons[] = {A3_Aegis_Air_F_Aegis};
		requiredVersion = 0.1;
		units[] =
        {

        };
		weapons[] = {/* Automated */};
	};
};

class CfgVehicles
{
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
				name = "HitHull";
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
				name = "HitEngine";
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
				name = "HitFuel";
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
				name = "HitLCRudder";
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
				name = "HitRRudder";
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
		//uavCameraDriverDir = "pos_pip0_dir";    						 idk what this is
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
			// Absolutely no idea what im doing 
			/*class CollisionLightWhite_source
			{
				source = "MarkerLight";
				markerLight = "CollisionLightWhite1";
			};*/
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
				boneName = "Wheel_1";
				steering = 0;
				side = "left";
				center = "Wheel_1_center";
				boundary = "Wheel_1_rim";
				width = 0.16;
				mass = 20;
				MOI = 1;
				dampingRate = 0.1;
				dampingRateDamaged = 1;
				dampingRateDestroyed = 1000;
				maxBrakeTorque = 1500;
				maxHandBrakeTorque = 0;
				suspTravelDirection[] = {0,-1,0};
				suspForceAppPointOffset = "Wheel_1_center";
				tireForceAppPointOffset = "Wheel_1_center";
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
				boneName = "Wheel_2";
				steering = 0;
				center = "Wheel_2_center";
				boundary = "Wheel_2_rim";
				width = 0.28;
				sprungMass = 128;
				springStrength = 12757;
				springDamperRate = 3062;
				suspForceAppPointOffset = "Wheel_2_center";
				tireForceAppPointOffset = "Wheel_2_center";
				maxCompression = 0.1;
				maxDroop = 0.1;
				suspTravelDirection[] = {0,-1,0};
			};
			class Wheel_3: Wheel_2
			{
				boneName = "Wheel_3";
				side = "right";
				center = "Wheel_3_center";
				boundary = "Wheel_3_rim";
				suspForceAppPointOffset = "Wheel_3_center";
				tireForceAppPointOffset = "Wheel_3_center";
			};
		};
		gunAimDown = 0.0;
		weapons[] = {"CMFlareLauncher"};
		magazines[] = {"120Rnd_CMFlare_Chaff_Magazine"};
		radarTargetSize = 0.5;
		visualTargetSize = 0.7;
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
			class Exhaust_center
			{
				position = "pos_Exhausts_start_center";
				direction = "pos_Exhausts_end_center";
				effect = "ExhaustsEffectHeliComHP";
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
				name = "marker_light_wingtip_l";
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
				name = "marker_light_wingtip_r";
			};
			class CollisionLightWhite1
			{
				color[] = {1.0,1.0,1.0};
				ambient[] = {0.1,0.1,0.1};
				name = "marker_light_b_white";
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
				name = "marker_light_t_white";
			};
		};
		class Reflectors{};
		reportRemoteTargets = 1;
		reportOwnPosition = 1;
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
					class LaserSensorComponent: SensorTemplateLaser{};
					class NVSensorComponent: SensorTemplateNV{};
				};
			};
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
				minElev = -90;
				maxElev = 5;
				initElev = -45;
				minTurn = -360;
				maxTurn = 360;
				initTurn = 0;
				outGunnerMayFire = 1;
				inGunnerMayFire = 1;
				commanding = -1;
				body = "mainturret";
				gun = "maingun";
				animationSourceBody = "mainturret";
				animationSourceGun = "maingun";
				memoryPointGun = "pos_pip1";
				memoryPointGunnerOptics = "pos_pip1_dir";
				gunBeg = "pos_pip1_dir";
				gunEnd = "pos_pip1";
				gunnerOpticsModel = "A3\drones_f\Weapons_F_Gamma\Reticle\UGV_01_Optics_Gunner_F.p3d";
				gunnerForceOptics = 1;
				turretInfoType = "RscOptics_UAV_gunner";
				stabilizedInAxes = 3;
				enableManualFire = 0;
				showAllTargets = 4;
				weapons[] = {"missiles_Jian","Laserdesignator_mounted"};
				magazines[] = {"4Rnd_LG_Jian","Laserbatteries"};
				GunnerCompartments = "Compartment1";
				startEngine = 0;
				soundServo[] = {"A3\Sounds_F\vehicles\air\noises\servo_drone_turret_2",0.099999994,1,10};
				soundServoVertical[] = {"A3\Sounds_F\vehicles\air\noises\servo_drone_turret_2",0.099999994,1,10};
				class OpticsIn
				{
					class Wide
					{
						opticsDisplayName = "W";
						initAngleX = 0;
						minAngleX = -35;
						maxAngleX = 85;
						initAngleY = 0;
						minAngleY = -130;
						maxAngleY = 130;
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
			};
		};
	};
};