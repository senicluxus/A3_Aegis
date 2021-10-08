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
	class Mortar_01_base_F;
	class Mortar_02_base_F: Mortar_01_base_F
	{
		author = $STR_A3_Heliotrope;
		scope = protected;
		//displayname = $STR_A3_CfgVehicles_Mortar_02_Base0;
		displayname = "! HElp me";
		class Library
		{
			libTextDesc = "$STR_A3_CfgVehicles_Mortar_01_Base_Library0";
		};
		editorSubcategory = "EdSubcat_Turrets";
		//picture = "A3_Aegis\static_f_aegis\Mortar_02\Data\m252_81mm_ca.paa";
		//icon = "A3_Aegis\static_f_aegis\Mortar_02\Data\m252_81mm_CA.paa";
		class Damage
		{
			tex[] = {};
			mat[] = {"A3_Aegis\static_f_aegis\Mortar_02\Data\m252_81mm.rvmat","A3_Aegis\static_f_aegis\Mortar_02\Data\m252_81mm_damage.rvmat","A3_Aegis\static_f_aegis\Mortar_02\Data\m252_81mm_destruct.rvmat"};
		};
		model = "A3_Aegis\static_f_aegis\Mortar_02\81Mortar.p3d";
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