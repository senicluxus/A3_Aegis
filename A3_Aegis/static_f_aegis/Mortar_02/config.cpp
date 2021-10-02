////////////////////////////////////////////////////////////////////
//DeRap: static_f\Mortar_01\config.bin
//Produced from mikero's Dos Tools Dll version 8.23
//https://mikero.bytex.digital/Downloads
//'now' is Mon Sep 20 18:56:49 2021 : 'file' last modified on Wed Dec 31 19:00:01 1969
////////////////////////////////////////////////////////////////////
#include "cfgPatches.hpp"

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
#include "cfgVehicles.hpp"
