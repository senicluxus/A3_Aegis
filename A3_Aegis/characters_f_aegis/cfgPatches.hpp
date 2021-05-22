class CfgPatches
{
    /* Definitions */
    #include "\A3_Aegis\macros_urls.hpp"

	class A3_Aegis_Characters_F_Aegis
	{
		author = $STR_A3_A_AveryTheKitty;
		name = "Arma 3 Aegis - Characters and Clothing";
		url = linkAegis;
		requiredAddons[] =
		{
			A3_Aegis_Data_F_Aegis,
			A3_Characters_F,
			A3_Characters_F_Enoch,
			A3_Characters_F_Exp,
			A3_Characters_F_Heads,
			A3_Characters_F_Jets,
			A3_Characters_F_Oldman_Heads,
			A3_Characters_F_Orange,
			A3_Characters_F_Patrol,
			A3_Characters_F_Tacops,
			A3_Characters_F_Tank,
			A3_Data_F
		};
		requiredVersion = 0.1;
		units[] =
        {
            /* From "cfgBLUFOR.hpp" */
            B_ghillie_spotter_ard_F,
            B_ghillie_spotter_lsh_F,
            B_ghillie_spotter_sard_F,
            B_RadioOperator_F,
            B_recon_AR_F,
            B_recon_CQ_F,
            B_recon_GL_F,
            B_recon_MG_F,
            B_Soldier_CBRN_F,
            B_Soldier_CQ_F,
            B_Soldier_MG_F,

            B_T_Fighter_Pilot_F,
            B_T_ghillie_spotter_tna_F,
            B_T_HeavyGunner_F,
            B_T_RadioOperator_F,
            B_T_Recon_AR_F,
            B_T_Recon_CQ_F,
            B_T_Recon_GL_F,
            B_T_Recon_MG_F,
            B_T_Recon_Sharpshooter_F,
            B_T_Sharpshooter_F,
            B_T_Soldier_CBRN_F,
            B_T_Soldier_CQ_F,
            B_T_Soldier_Lite_F,
            B_T_Soldier_MG_F,
            B_T_soldier_UGV_02_Demining_F,
            B_T_soldier_UGV_02_Science_F,
            B_T_Survivor_F,

            B_W_Fighter_Pilot_F,
            B_W_ghillie_spotter_wdl_F,
            B_W_ghillie_wdl_F,
            B_W_HeavyGunner_F,
            B_W_Pilot_F,
            B_W_Recon_AR_F,
            B_W_Recon_CQ_F,
            B_W_Recon_Exp_F,
            B_W_Recon_F,
            B_W_Recon_GL_F,
            B_W_Recon_JTAC_F,
            B_W_Recon_LAT_F,
            B_W_Recon_Medic_F,
            B_W_Recon_MG_F,
            B_W_Recon_M_F,
            B_W_Recon_Sharpshooter_F,
            B_W_Recon_TL_F,
            B_W_Sharpshooter_F,
            B_W_Sniper_F,
            B_W_Soldier_CQ_F,
            B_W_Soldier_Lite_F,
            B_W_Soldier_MG_F,
            B_W_Soldier_PG_F,
            B_W_soldier_UAV_06_F,
            B_W_soldier_UAV_06_medical_F,
            B_W_Spotter_F,

            B_A_Crew_F,
            B_A_Crew_tna_F,
            B_A_Crew_wdl_F,
            B_A_Diver_Exp_F,
            B_A_Diver_Exp_tna_F,
            B_A_Diver_F,
            B_A_Diver_TL_F,
            B_A_Diver_TL_tna_F,
            B_A_Diver_tna_F,
            B_A_Engineer_F,
            B_A_Engineer_tna_F,
            B_A_Engineer_wdl_F,
            B_A_Fighter_Pilot_F,
            B_A_Fighter_Pilot_tna_F,
            B_A_Fighter_Pilot_wdl_F,
            B_A_ghillie_ard_F,
            B_A_ghillie_lsh_F,
            B_A_ghillie_sard_F,
            B_A_ghillie_spotter_ard_F,
            B_A_ghillie_spotter_lsh_F,
            B_A_ghillie_spotter_sard_F,
            B_A_ghillie_spotter_tna_F,
            B_A_ghillie_spotter_wdl_F,
            B_A_ghillie_tna_F,
            B_A_ghillie_wdl_F,
            B_A_HeavyGunner_F,
            B_A_HeavyGunner_tna_F,
            B_A_HeavyGunner_wdl_F,
            B_A_Helicrew_F,
            B_A_Helicrew_tna_F,
            B_A_Helicrew_wdl_F,
            B_A_Helipilot_F,
            B_A_Helipilot_tna_F,
            B_A_Helipilot_wdl_F,
            B_A_Medic_F,
            B_A_Medic_tna_F,
            B_A_Medic_wdl_F,
            B_A_Officer_F,
            B_A_Officer_tna_F,
            B_A_Officer_wdl_F,
            B_A_Pilot_F,
            B_A_Pilot_tna_F,
            B_A_Pilot_wdl_F,
            B_A_RadioOperator_F,
            B_A_RadioOperator_tna_F,
            B_A_RadioOperator_wdl_F,
            B_A_Recon_AR_F,
            B_A_Recon_AR_tna_F,
            B_A_Recon_AR_wdl_F,
            B_A_Recon_CQ_F,
            B_A_Recon_CQ_tna_F,
            B_A_Recon_CQ_wdl_F,
            B_A_Recon_Exp_F,
            B_A_Recon_Exp_tna_F,
            B_A_Recon_Exp_wdl_F,
            B_A_Recon_F,
            B_A_Recon_GL_F,
            B_A_Recon_GL_tna_F,
            B_A_Recon_GL_wdl_F,
            B_A_Recon_JTAC_F,
            B_A_Recon_JTAC_tna_F,
            B_A_Recon_JTAC_wdl_F,
            B_A_Recon_LAT_F,
            B_A_Recon_LAT_tna_F,
            B_A_Recon_LAT_wdl_F,
            B_A_Recon_Medic_F,
            B_A_Recon_Medic_tna_F,
            B_A_Recon_Medic_wdl_F,
            B_A_Recon_MG_F,
            B_A_Recon_MG_tna_F,
            B_A_Recon_MG_wdl_F,
            B_A_Recon_M_F,
            B_A_Recon_M_tna_F,
            B_A_Recon_M_wdl_F,
            B_A_Recon_Sharpshooter_F,
            B_A_Recon_Sharpshooter_tna_F,
            B_A_Recon_Sharpshooter_wdl_F,
            B_A_Recon_TL_F,
            B_A_Recon_TL_tna_F,
            B_A_Recon_TL_wdl_F,
            B_A_Recon_tna_F,
            B_A_Recon_wdl_F,
            B_A_Soldier_AAA_F,
            B_A_Soldier_AAA_tna_F,
            B_A_Soldier_AAA_wdl_F,
            B_A_Soldier_AAR_F,
            B_A_Soldier_AAR_tna_F,
            B_A_Soldier_AAR_wdl_F,
            B_A_Soldier_AAT_F,
            B_A_Soldier_AAT_tna_F,
            B_A_Soldier_AAT_wdl_F,
            B_A_Soldier_AA_F,
            B_A_Soldier_AA_tna_F,
            B_A_Soldier_AA_wdl_F,
            B_A_Soldier_AR_F,
            B_A_Soldier_AR_tna_F,
            B_A_Soldier_AR_wdl_F,
            B_A_Soldier_AT_F,
            B_A_Soldier_AT_tna_F,
            B_A_Soldier_AT_wdl_F,
            B_A_Soldier_A_F,
            B_A_Soldier_A_tna_F,
            B_A_Soldier_A_wdl_F,
            B_A_Soldier_CBRN_F,
            B_A_Soldier_CBRN_tna_F,
            B_A_Soldier_CBRN_wdl_F,
            B_A_Soldier_CQ_F,
            B_A_Soldier_CQ_tna_F,
            B_A_Soldier_CQ_wdl_F,
            B_A_Soldier_Exp_F,
            B_A_Soldier_Exp_tna_F,
            B_A_Soldier_Exp_wdl_F,
            B_A_Soldier_F,
            B_A_Soldier_GL_F,
            B_A_Soldier_GL_tna_F,
            B_A_Soldier_GL_wdl_F,
            B_A_Soldier_LAT_F,
            B_A_Soldier_LAT_tna_F,
            B_A_Soldier_LAT_wdl_F,
            B_A_Soldier_Lite_F,
            B_A_Soldier_Lite_tna_F,
            B_A_Soldier_Lite_wdl_F,
            B_A_soldier_mine_F,
            B_A_soldier_mine_tna_F,
            B_A_soldier_mine_wdl_F,
            B_A_soldier_M_F,
            B_A_soldier_M_tna_F,
            B_A_soldier_M_wdl_F,
            B_A_Soldier_PG_F,
            B_A_Soldier_PG_tna_F,
            B_A_Soldier_PG_wdl_F,
            B_A_Soldier_Repair_F,
            B_A_Soldier_Repair_tna_F,
            B_A_Soldier_Repair_wdl_F,
            B_A_Soldier_SL_F,
            B_A_Soldier_SL_tna_F,
            B_A_Soldier_SL_wdl_F,
            B_A_Soldier_TL_F,
            B_A_Soldier_TL_tna_F,
            B_A_Soldier_TL_wdl_F,
            B_A_Soldier_tna_F,
            B_A_soldier_UAV_06_F,
            B_A_soldier_UAV_06_medical_F,
            B_A_soldier_UAV_06_medical_tna_F,
            B_A_soldier_UAV_06_medical_wdl_F,
            B_A_soldier_UAV_06_tna_F,
            B_A_soldier_UAV_06_wdl_F,
            B_A_Soldier_UAV_F,
            B_A_Soldier_UAV_tna_F,
            B_A_Soldier_UAV_wdl_F,
            B_A_soldier_UGV_02_Demining_F,
            B_A_soldier_UGV_02_Demining_tna_F,
            B_A_soldier_UGV_02_Demining_wdl_F,
            B_A_soldier_UGV_02_Science_F,
            B_A_soldier_UGV_02_Science_tna_F,
            B_A_soldier_UGV_02_Science_wdl_F,
            B_A_Soldier_unarmed_F,
            B_A_Soldier_unarmed_tna_F,
            B_A_Soldier_unarmed_wdl_F,
            B_A_Soldier_wdl_F,
            B_A_Support_AMG_F,
            B_A_Support_AMG_tna_F,
            B_A_Support_AMG_wdl_F,
            B_A_Support_AMort_F,
            B_A_Support_AMort_tna_F,
            B_A_Support_AMort_wdl_F,
            B_A_Support_GMG_F,
            B_A_Support_GMG_tna_F,
            B_A_Support_GMG_wdl_F,
            B_A_Support_MG_F,
            B_A_Support_MG_tna_F,
            B_A_Support_MG_wdl_F,
            B_A_Support_Mort_F,
            B_A_Support_Mort_tna_F,
            B_A_Support_Mort_wdl_F,
            B_A_Survivor_F,
            B_A_Survivor_tna_F,
            B_A_Survivor_wdl_F,

            /* From "cfgOPFOR.hpp" */
            O_ghillie_spotter_ard_F,
            O_ghillie_spotter_lsh_F,
            O_ghillie_spotter_sard_F,
            O_RadioOperator_F,
            O_recon_AR_F,
            O_recon_CQ_F,
            O_recon_GL_F,
            O_soldierU_CBRN_F,
            O_soldierU_CQ_F,
            O_Soldier_CBRN_F,
            O_Soldier_CQ_F,
            O_soldier_UGV_02_Demining_F,
            O_soldier_UGV_02_Science_F,
            O_Urban_RadioOperator_F,
            O_T_Fighter_Pilot_F,
            O_T_ghillie_spotter_tna_F,
            O_T_HeavyGunner_F,
            O_T_Pathfinder_F,
            O_T_RadioOperator_F,
            O_T_Recon_AR_F,
            O_T_Recon_CQ_F,
            O_T_Recon_GL_F,
            O_T_Sharpshooter_F,
            O_T_Soldier_CBRN_F,
            O_T_Soldier_CQ_F,
            O_T_Soldier_Lite_F,
            O_T_soldier_UGV_02_Demining_F,
            O_T_soldier_UGV_02_Science_F,
            O_T_Survivor_F,
            O_A_crew_F,
            O_A_engineer_F,
            O_A_Fighter_Pilot_F,
            O_A_helicrew_F,
            O_A_helipilot_F,
            O_A_RadioOperator_F,

            /* From "cfgIndep.hpp" */
            I_Soldier_CQ_F,
            I_ghillie_spotter_lsh_F,
            I_ghillie_spotter_sard_F,
            I_ghillie_spotter_ard_F,
            I_Soldier_CBRN_F,
            I_RadioOperator_F,

            /* From "cfgCivil.hpp" */
            C_man_1_1_F_afro,
            C_man_1_1_F_euro,
            C_man_1_1_F_asia,
            C_man_1_2_F_afro,
            C_man_1_2_F_euro,
            C_man_1_2_F_asia,
            C_man_1_3_F_afro,
            C_man_1_3_F_euro,
            C_man_1_3_F_asia,
            C_man_priest_F,
            C_Man_casual_7_F,
            C_Man_casual_7_F_afro,
            C_Man_casual_7_F_euro,
            C_Man_casual_7_F_asia,
            C_Man_casual_7_F_tanoan,
            C_Man_casual_8_F,
            C_Man_casual_8_F_afro,
            C_Man_casual_8_F_euro,
            C_Man_casual_8_F_asia,
            C_Man_casual_8_F_tanoan,
            C_Man_casual_9_F,
            C_Man_casual_9_F_afro,
            C_Man_casual_9_F_euro,
            C_Man_casual_9_F_asia,
            C_Man_casual_9_F_tanoan,

            /* From "cfgGuerrilla.hpp" */
            I_G_crew_F,
            B_G_crew_F,
            O_G_crew_F,
            I_G_Soldier_CQ_F,
            B_G_Soldier_CQ_F,
            O_G_Soldier_CQ_F,

            /* From "cfgSyndikat.hpp" */
            I_C_Sharpshooter_F,

            /* From "cfgCTRG.hpp" */
            B_CTRG_Soldier_TL_F,
            B_CTRG_Soldier_Exp_F,
            B_CTRG_Soldier_Medic_F,
            B_CTRG_Soldier_M_F,
            B_CTRG_Soldier_v2_F,
            B_CTRG_Soldier_LAT_F,
            B_CTRG_Soldier_LAT2_F,
            B_CTRG_Soldier_AR_F,
            B_CTRG_Soldier_JTAC_F,
            B_CTRG_Soldier_TL_arid_F,
            B_CTRG_Soldier_Exp_arid_F,
            B_CTRG_Soldier_Medic_arid_F,
            B_CTRG_Soldier_M_arid_F,
            B_CTRG_Soldier_arid_v2_F,
            B_CTRG_Soldier_LAT_arid_F,
            B_CTRG_Soldier_LAT2_arid_F,
            B_CTRG_Soldier_AR_arid_F,
            B_CTRG_Soldier_JTAC_arid_F,
            B_CTRG_ghillie_lsh_F,
            B_CTRG_ghillie_sard_F,
            B_CTRG_ghillie_ard_F,
            B_CTRG_ghillie_spotter_lsh_F,
            B_CTRG_ghillie_spotter_sard_F,
            B_CTRG_ghillie_spotter_ard_F,
            B_CTRG_Soldier_LAT2_tna_F,
            B_CTRG_Soldier_TL_urb_F,
            B_CTRG_Soldier_Exp_urb_F,
            B_CTRG_Soldier_Medic_urb_F,
            B_CTRG_Soldier_M_urb_F,
            B_CTRG_Soldier_urb_F,
            B_CTRG_Soldier_LAT_urb_F,
            B_CTRG_Soldier_LAT2_urb_F,
            B_CTRG_Soldier_AR_urb_F,
            B_CTRG_Soldier_JTAC_urb_F,
            B_CTRG_ghillie_tna_F,
            B_CTRG_ghillie_spotter_tna_F,

            /* From "cfgGendarmerie.hpp" */
            B_GEN_Soldier_AR_F,
            B_GEN_Soldier_Rifle_F,
            B_GEN_Soldier_SG_F,
            B_GEN_Soldier_LAT_F,

            /* From "cfgIDAP.hpp" */
            C_IDAP_Man_UGV_02_Demining_F,

            /* From "cfgRUS.hpp" */
            O_R_crew_ard_F,
            O_R_crew_F,
            O_R_diver_ard_F,
            O_R_diver_exp_ard_F,
            O_R_diver_exp_F,
            O_R_diver_F,
            O_R_diver_TL_ard_F,
            O_R_diver_TL_F,
            O_R_engineer_ard_F,
            O_R_engineer_F,
            O_R_Fighter_Pilot_ard_F,
            O_R_Fighter_Pilot_F,
            O_R_ghillie_ard_F,
            O_R_ghillie_lsh_F,
            O_R_ghillie_sard_F,
            O_R_ghillie_spotter_ard_F,
            O_R_ghillie_spotter_lsh_F,
            O_R_ghillie_spotter_sard_F,
            O_R_ghillie_spotter_wdl_F,
            O_R_ghillie_wdl_F,
            O_R_helicrew_ard_F,
            O_R_helicrew_F,
            O_R_helipilot_ard_F,
            O_R_helipilot_F,
            O_R_medic_ard_F,
            O_R_officer_ard_F,
            O_R_officer_F,
            O_R_RadioOperator_ard_F,
            O_R_RadioOperator_F,
            O_R_recon_ard_F,
            O_R_recon_AR_ard_F,
            O_R_recon_CQ_ard_F,
            O_R_recon_CQ_F,
            O_R_recon_exp_ard_F,
            O_R_recon_F,
            O_R_recon_GL_ard_F,
            O_R_recon_JTAC_ard_F,
            O_R_recon_LAT_ard_F,
            O_R_recon_medic_ard_F,
            O_R_recon_M_ard_F,
            O_R_recon_TL_ard_F,
            O_R_sniper_ard_F,
            O_R_sniper_F,
            O_R_Soldier_AAA_ard_F,
            O_R_Soldier_AAA_F,
            O_R_Soldier_AAR_ard_F,
            O_R_Soldier_AAR_F,
            O_R_Soldier_AAT_ard_F,
            O_R_Soldier_AAT_F,
            O_R_soldier_AA_ard_F,
            O_R_soldier_AA_F,
            O_R_Soldier_AHAT_ard_F,
            O_R_Soldier_AHAT_F,
            O_R_Soldier_ard_F,
            O_R_soldier_AR_ard_F,
            O_R_soldier_AT_ard_F,
            O_R_soldier_AT_F,
            O_R_Soldier_A_ard_F,
            O_R_Soldier_A_F,
            O_R_Soldier_CBRN_ard_F,
            O_R_Soldier_CBRN_F,
            O_R_Soldier_CQ_ard_F,
            O_R_Soldier_CQ_F,
            O_R_soldier_exp_ard_F,
            O_R_Soldier_F,
            O_R_Soldier_GL_ard_F,
            O_R_Soldier_HAT_ard_F,
            O_R_Soldier_HAT_F,
            O_R_Soldier_LAT_ard_F,
            O_R_Soldier_lite_ard_F,
            O_R_Soldier_lite_F,
            O_R_soldier_mine_ard_F,
            O_R_soldier_mine_F,
            O_R_soldier_M_ard_F,
            O_R_soldier_repair_ard_F,
            O_R_soldier_repair_F,
            O_R_Soldier_SL_ard_F,
            O_R_Soldier_SL_F,
            O_R_Soldier_TL_ard_F,
            O_R_soldier_UAV_06_ard_F,
            O_R_soldier_UAV_06_F,
            O_R_soldier_UAV_06_medical_ard_F,
            O_R_soldier_UAV_06_medical_F,
            O_R_soldier_UAV_ard_F,
            O_R_soldier_UAV_F,
            O_R_soldier_UGV_02_Demining_ard_F,
            O_R_soldier_UGV_02_Demining_F,
            O_R_soldier_UGV_02_Science_ard_F,
            O_R_soldier_UGV_02_Science_F,
            O_R_Soldier_unarmed_ard_F,
            O_R_Soldier_unarmed_F,
            O_R_spotter_ard_F,
            O_R_spotter_F,
            O_R_support_AMG_ard_F,
            O_R_support_AMG_F,
            O_R_support_AMort_ard_F,
            O_R_support_AMort_F,
            O_R_support_GMG_ard_F,
            O_R_support_GMG_F,
            O_R_support_MG_ard_F,
            O_R_support_MG_F,
            O_R_support_Mort_ard_F,
            O_R_support_Mort_F,
            O_R_Survivor_ard_F,
            O_R_Survivor_F,

            /* From "cfgEAF.hpp" */
            I_E_Soldier_CQ_F,
            I_E_JTAC_F,
            I_E_recon_AR_F,
            I_E_recon_exp_F,
            I_E_recon_GL_F,
            I_E_recon_JTAC_F,
            I_E_recon_M_F,
            I_E_recon_medic_F,
            I_E_recon_F,
            I_E_recon_LAT_F,
            I_E_recon_TL_F,
            I_E_ghillie_wdl_F,
            I_E_ghillie_spotter_wdl_F,
            I_E_Fighter_Pilot_F,

            /* From "cfgLooters.hpp" */
            I_L_Militiaman_SMG_F,
            I_L_Militiaman_Rifle_F,
            I_L_Militiaman_Leader_F,
            I_L_Deserter_Rifle_F,
            I_L_Deserter_AR_F,
            I_L_Deserter_GL_F,

            /* From "cfgION.hpp" */
            B_ION_Soldier_AR_F,
            B_ION_Soldier_Medic_F,
            B_ION_Engineer_F,
            B_ION_Soldier_GL_F,
            B_ION_Helipilot_F,
            B_ION_Soldier_M_F,
            B_ION_Soldier_F,
            B_ION_Soldier_LAT_F,
            B_ION_Soldier_CQ_F,
            B_ION_Soldier_TL_F,
            B_ION_RadioOperator_F,
            B_ION_Soldier_UAV_F,
            B_ION_soldier_UAV_06_F,
            B_ION_soldier_UAV_06_medical_F,
            B_ION_soldier_UGV_02_Demining_F,
            B_ION_Soldier_unarmed_F
        };
		weapons[] = {/* Automated */};
	};
};