class CfgPatches
{
	class CA_AIR_E_MQ9PredatorB
	{
		units[] ={};
		weapons[] = {};
		requiredVersion = 1.04;
		requiredAddons[] = {"CAAir_E","CAAir2_MQ9PredatorB"};
	};
};
class CfgVehicles
{
	class UAV;
	class MQ9PredatorB: UAV
	{
		model = "ca\Air_E\MQ9PREDATORB\MQ9PredatorB";
		destrType=DestructWreck;

		class Damage
		{
			tex[]={};
			mat[]=
			{
				"Ca\Air_E\MQ9PREDATORB\Data\mq9predatorb.rvmat",
				"Ca\Air_E\MQ9PREDATORB\Data\mq9predatorb_damage.rvmat",
				"Ca\Air_E\MQ9PREDATORB\Data\mq9predatorb_destruct.rvmat",

				"Ca\Air_E\MQ9PREDATORB\Data\mq9predatorb_gearbox.rvmat",
				"Ca\Air_E\MQ9PREDATORB\Data\mq9predatorb_gearbox_damage.rvmat",
				"Ca\Air_E\MQ9PREDATORB\Data\mq9predatorb_gearbox_destruct.rvmat",

				"Ca\Ca_E\data\default.rvmat",
				"Ca\Ca_E\data\default.rvmat",
				"Ca\Ca_E\data\default_destruct.rvmat",
			};
		};
		
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"ca\air2\mq9predatorb\data\mq9predatorb_co.paa"};
	};
};