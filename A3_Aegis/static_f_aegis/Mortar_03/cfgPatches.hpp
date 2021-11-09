class CfgPatches
{
	class A3_Aegis_Static_F_Aegis_Mortar_02
	{
		addonRootClass = A3_Aegis_Static_F_Aegis;
		requiredAddons[] =
		{
			A3_Aegis_Static_F_Aegis,
			A3_Static_F_Enoch_Mortar_01,
			A3_Static_F_Exp_Mortar_01,
			A3_Static_F_Mortar_01
		};
		requiredVersion = 0.1;
		units[] =
        {
            B_Mortar_02_F
        };
		weapons[] = {/* Automated */};
	};
};