/* SFIA */
class Aegis_O_SFIA_AFV_Wheeled_01: AFV_Wheeled_01_base_F
{
    author = $STR_A3_A_AveryTheKitty;
	class SimpleObject
	{
		eden = true;
		animate[] =
        {
            {damagehide,0},
            {damagehidevez,0},
            {damagehidehlaven,0},
            {wheel_1_1_destruct,0},
            {wheel_1_2_destruct,0},
            {wheel_1_3_destruct,0},
            {wheel_1_4_destruct,0},
            {wheel_2_1_destruct,0},
            {wheel_2_2_destruct,0},
            {wheel_2_3_destruct,0},
            {wheel_2_4_destruct,0},
            {wheel_1_1_destruct_unhide,0},
            {wheel_1_2_destruct_unhide,0},
            {wheel_1_3_destruct_unhide,0},
            {wheel_1_4_destruct_unhide,0},
            {wheel_2_1_destruct_unhide,0},
            {wheel_2_2_destruct_unhide,0},
            {wheel_2_3_destruct_unhide,0},
            {wheel_2_4_destruct_unhide,0},
            {wheel_1_1,0},
            {wheel_2_1,0},
            {wheel_1_2,0},
            {wheel_1_3,0},
            {wheel_2_2,0},
            {wheel_2_3,0},
            {wheel_1_4,0},
            {wheel_2_4,0},
            {daylights,0},
            {wheel_1_1_damage,0},
            {wheel_1_2_damage,0},
            {wheel_1_3_damage,0},
            {wheel_1_4_damage,0},
            {wheel_2_1_damage,0},
            {wheel_2_2_damage,0},
            {wheel_2_3_damage,0},
            {wheel_2_4_damage,0},
            {wheel_1_1_damper_damage_backanim,0},
            {wheel_1_2_damper_damage_backanim,0},
            {wheel_1_3_damper_damage_backanim,0},
            {wheel_1_4_damper_damage_backanim,0},
            {wheel_2_1_damper_damage_backanim,0},
            {wheel_2_2_damper_damage_backanim,0},
            {wheel_2_3_damper_damage_backanim,0},
            {wheel_2_4_damper_damage_backanim,0},
            {wheel_1_1_damper,0},
            {wheel_2_1_damper,0},
            {wheel_1_2_damper,0},
            {wheel_1_3_damper,0},
            {wheel_2_2_damper,0},
            {wheel_2_3_damper,0},
            {wheel_1_4_damper,0},
            {wheel_2_4_damper,0},
            {wheel_1_1_damper_rot,0},
            {wheel_2_1_damper_rot,0},
            {wheel_1_2_damper_rot,0},
            {wheel_2_2_damper_rot,0},
            {wheel_1_3_damper_rot,0},
            {wheel_2_3_damper_rot,0},
            {wheel_1_4_damper_rot,0},
            {wheel_2_4_damper_rot,0},
            {steering_1_1,0},
            {steering_2_1,0},
            {steering_1_2,0},
            {steering_2_2,0},
            {wheel_1_1_steering_link,0},
            {wheel_2_1_steering_link,0},
            {wheel_1_2_steering_link,0},
            {wheel_2_2_steering_link,0},
            {hatchdriver,0},
            {mainturret,0},
            {turretbase,0},
            {maingun,0},
            {obsturret,0},
            {obsgun,0},
            {damagehlaven,0},
            {poklop_gunner,0},
            {poklop_commander,0},
            {zasleh_rot,0},
            {zasleh2_rot,502.96},
            {zasleh_hide,0},
            {reverse_light,1},
            {hideturret,0},
            {recoil,0},
            {recoil_inside,0},
            {drivingwheel,0},
            {indicatorvoltammeter_turret,0},
            {indicatorvoltammeter2_turret,0},
            {indicatortempoil,0},
            {indicatortempwater,0},
            {indicatorspeed_mfd_driver,0},
            {indicatorrpm,0},
            {indicatorrpm_mfd_driver,0},
            {engine_damage_indicator,0},
            {main_gun_damage_indicator,0},
            {lights_driver,0},
            {lights_driver_off,0},
            {lights_turret,0},
            {cannon_ready_light,0},
            {ammo_status_slider_translation,1},
            {pedal_thrust,0},
            {pedal_brake,0},
            {turret_control_x,0},
            {turret_control_y,0},
            {com_turret_control_x,0},
            {com_turret_control_y,0},
            {slat_front_normal_hide,0},
            {slat_front_damage_unhide,0},
            {slat_front_damage_hide,0},
            {slat_front_destroyed_unhide,0},
            {slat_front_firegeo_hide,0},
            {slat_back_normal_hide,0},
            {slat_back_damage_unhide,0},
            {slat_back_damage_hide,0},
            {slat_back_destroyed_unhide,0},
            {slat_back_firegeo_hide,0},
            {slat_left_1_normal_hide,0},
            {slat_left_1_damage_unhide,0},
            {slat_left_1_damage_hide,0},
            {slat_left_1_destroyed_unhide,0},
            {slat_left_1_firegeo_hide,0},
            {slat_left_2_normal_hide,0},
            {slat_left_2_damage_unhide,0},
            {slat_left_2_damage_hide,0},
            {slat_left_2_destroyed_unhide,0},
            {slat_left_2_firegeo_hide,0},
            {slat_left_3_normal_hide,0},
            {slat_left_3_damage_unhide,0},
            {slat_left_3_damage_hide,0},
            {slat_left_3_destroyed_unhide,0},
            {slat_left_3_firegeo_hide,0},
            {slat_right_1_normal_hide,0},
            {slat_right_1_damage_unhide,0},
            {slat_right_1_damage_hide,0},
            {slat_right_1_destroyed_unhide,0},
            {slat_right_1_firegeo_hide,0},
            {slat_right_2_normal_hide,0},
            {slat_right_2_damage_unhide,0},
            {slat_right_2_damage_hide,0},
            {slat_right_2_destroyed_unhide,0},
            {slat_right_2_firegeo_hide,0},
            {slat_right_3_normal_hide,0},
            {slat_right_3_damage_unhide,0},
            {slat_right_3_damage_hide,0},
            {slat_right_3_destroyed_unhide,0},
            {slat_right_3_firegeo_hide,0},
            {indicatortempwater_mfd_driver,0},
            {indicatorfuel_mfd_driver,1},
            {indicator_hull_direction_mfd_driver,0},
            {indicator_main_turret_mfd_driver,0},
            {indicator_com_turret_mfd_driver,0},
            {indicator_com_turret_counter_mfd_driver,0},
            {indicator_main_turret_mfd_com,0},
            {indicator_main_turret_onscreen_com,0},
            {indicator_com_turret_mfd_com,0},
            {indicator_com_turret_onscreen_com,0},
            {indicator_com_turret_counter_mfd_com,0},
            {indicator_damage_engine,0},
            {indicator_damage_fuel,0},
            {indicator_damage_track,0},
            {indicator_turret_damage_hull,0},
            {indicator_turret_damage_engine,0},
            {indicator_turret_damage_fuel,0},
            {indicator_turret_damage_main_gun,0},
            {indicator_turret_damage_wheels,0},
            {indicator_turret_damage_turret,0},
            {indicator_turret_damage_com_turret,0},
            {hide_mfd_and_pip_screen_driver,1},
            {hide_mfd_and_pip_screen_gunner,1},
            {hide_mfd_elements,1},
            {com_pos_adjust_to_center,0},
            {driver_turret_indicator_12_show_from_left,0},
            {driver_turret_indicator_12_hide_from_left,0},
            {driver_turret_indicator_11_show,0},
            {driver_turret_indicator_11_hide,0},
            {driver_turret_indicator_10_show,0},
            {driver_turret_indicator_10_hide,0},
            {driver_turret_indicator_9_show,0},
            {driver_turret_indicator_9_hide,0},
            {driver_turret_indicator_8_show,0},
            {driver_turret_indicator_8_hide,0},
            {driver_turret_indicator_7_show,0},
            {driver_turret_indicator_7_hide,0},
            {driver_turret_indicator_6_show_from_left,0},
            {driver_turret_indicator_6_hide_from_left,0},
            {driver_turret_indicator_12_show_from_right,0},
            {driver_turret_indicator_12_hide_from_right,0},
            {driver_turret_indicator_1_show,0},
            {driver_turret_indicator_1_hide,0},
            {driver_turret_indicator_2_show,0},
            {driver_turret_indicator_2_hide,0},
            {driver_turret_indicator_3_show,0},
            {driver_turret_indicator_3_hide,0},
            {driver_turret_indicator_4_show,0},
            {driver_turret_indicator_4_hide,0},
            {driver_turret_indicator_5_show,0},
            {driver_turret_indicator_5_hide,0},
            {driver_turret_indicator_6_show_from_right,0},
            {driver_turret_indicator_6_hide_from_right,0},
            {com_and_gun_turret_indicator_12_show_from_left,0},
            {com_and_gun_turret_indicator_12_hide_from_left,0},
            {com_and_gun_turret_indicator_11_show,0},
            {com_and_gun_turret_indicator_11_hide,0},
            {com_and_gun_turret_indicator_10_show,0},
            {com_and_gun_turret_indicator_10_hide,0},
            {com_and_gun_turret_indicator_9_show,0},
            {com_and_gun_turret_indicator_9_hide,0},
            {com_and_gun_turret_indicator_8_show,0},
            {com_and_gun_turret_indicator_8_hide,0},
            {com_and_gun_turret_indicator_7_show,0},
            {com_and_gun_turret_indicator_7_hide,0},
            {com_and_gun_turret_indicator_6_show_from_left,0},
            {com_and_gun_turret_indicator_6_hide_from_left,0},
            {com_and_gun_turret_indicator_12_show_from_right,0},
            {com_and_gun_turret_indicator_12_hide_from_right,0},
            {com_and_gun_turret_indicator_1_show,0},
            {com_and_gun_turret_indicator_1_hide,0},
            {com_and_gun_turret_indicator_2_show,0},
            {com_and_gun_turret_indicator_2_hide,0},
            {com_and_gun_turret_indicator_3_show,0},
            {com_and_gun_turret_indicator_3_hide,0},
            {com_and_gun_turret_indicator_4_show,0},
            {com_and_gun_turret_indicator_4_hide,0},
            {com_and_gun_turret_indicator_5_show,0},
            {com_and_gun_turret_indicator_5_hide,0},
            {com_and_gun_turret_indicator_6_show_from_right,0},
            {com_and_gun_turret_indicator_6_hide_from_right,0}
        };
		hide[] =
        {
            zasleh2,
            zasleh_1,
            light_l,
            light_r,
            "zadni svetlo",
            "brzdove svetlo",
            clan,
            "podsvit pristroju",
            poskozeni
        };
		verticalOffset = 2.057;
		verticalOffsetWorld = -0.092;
		init = "[this, '', []] call bis_fnc_initVehicle";
	};
	//editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Aegis_O_SFIA_AFV_Wheeled_01.jpg";
    side = TEast;
	faction = OPF_SFIA_lxWS;
	scope = public;
	scopeCurator = public;
    crew = O_SFIA_crew_lxWS;
    typicalCargo[] = {O_SFIA_Soldier_lxWS};
    textureList[] = {SFIA,1,};
    hiddenSelectionsTextures[] = 
    {
		"\lxws\vehicles_f_lxws\data\AFV_Wheeled_01\Rhino_Africa1_CO.paa",
		"\lxws\vehicles_f_lxws\data\AFV_Wheeled_01\Rhino_Africa2_CO.paa",
		"\A3\Armor_F_Tank\AFV_Wheeled_01\Data\AFV_Wheeled_01_wheel_CO.paa",
		"A3\Armor_F\Data\camonet_CSAT_HEX_Desert_CO.paa",
		"A3\Armor_F_Tank\AFV_Wheeled_01\Data\afv_wheeled_01_EXT3_sand_CO.paa"
    };
    /* Inventory */
	class TransportMagazines
	{
		mag_xx(SmokeShell,2);
		mag_xx(SmokeShellRed,2);
		mag_xx(30Rnd_762x39_Mag_F,4);
	};
	class TransportWeapons
	{
		weap_xx(arifle_Galat_lxWS,2);
	};
	class TransportItems
	{
		item_xx(FirstAidKit,10);
		item_xx(Toolkit,1);
		item_xx(Medikit,1);
	};
	class TransportBackpacks
	{
		bag_xx(B_TacticalPack_blk,2);
	};
    /* Turrets */
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
            /* Weapons & Ammunition */
	        magazines[] =
	        {
	            12Rnd_120mm_APFSDS_shells_Tracer_Red,
	            8Rnd_120mm_HE_shells_Tracer_Red,
		        8Rnd_120mm_HEAT_MP_T_Red,
		        mag_5(200Rnd_338_Mag)
	        };
        };
    };
};