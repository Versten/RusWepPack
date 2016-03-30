class CfgPatches
{
	class weap_StreetYou_sks_old
	{
		units[]={};
		weapons[]={
			"str_sks_old"
		};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Weapons_F"
		};
	};
};
class Mode_SemiAuto;
class CfgWeapons
{
	class srifle_EBR_F;
	class str_sks_old: srifle_EBR_F
	{
		author="$STR_A3_Bohemia_Interactive";
		displayname="$STR_skso_name";
		model="wpn_r_f3\sks\sks.p3d";
		reloadAction="DZ_GestureReloadSKS";
		reloadMagazineSound[]=
		{
			"wpn_r_f3\sks\snd\SKS_reloading_dz",
			1,
			1,
			10
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\wpn_r_f\anim\skso.rtm"
		};
		initspeed=735;
		dexterity=1.2180001;
		mass=140;
		recoil="recoil_dmr_03";
		discreteDistance[]={100,200,300,400};
		discreteDistanceInitIndex=0;
		maxZeroing=400;
        opticsZoomMin = 0.249;
        opticsZoomMax = 1.1;
        opticsZoomInit = 0.75;
		magazines[]=
		{
			"10rnd_sks_mag"
		};
		picture="\wpn_r_f3\sks\gear_sk_x_ca";
		descriptionshort="$STR_skso_desc";
		drySound[]=
		{
			"wpn_r_f\snd\empty.ogg",
			1,
			1,
			20
		};
		modes[]=
		{
			"Single"
		};
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType
			{
				closure1[]=
				{
					"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\DMR_03_closure_01",
					0.39810699,
					1,
					30
				};
				closure2[]=
				{
					"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\DMR_03_closure_02",
					0.39810699,
					1,
					30
				};
				soundClosure[]=
				{
					"closure1",
					0.5,
					"closure2",
					0.5
				};
			};
			class StandardSound: BaseSoundModeType
			{
				// 762_sks.wav
				begin1[]=
				{
					"wpn_r_f3\sks\snd\SKS_close_0",
					1.3,
					1,
					1300
				};
				begin2[]=
				{
					"wpn_r_f3\sks\snd\SKS_close_0",
					1.3,
					1,
					1300
				};
				begin3[]=
				{
					"wpn_r_f3\sks\snd\SKS_close_0",
					1.3,
					1,
					1300
				};
				soundBegin[]=
				{
					"begin1",
					0.34,
					"begin2",
					0.33000001,
					"begin3",
					0.33000001
				};
				class SoundTails
				{
					class TailInterior
					{
						sound[]=
						{
							"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\DMR_03_tail_interior",
							1.99526,
							1,
							1800
						};
						frequency=1;
						volume="interior";
					};
					class TailTrees
					{
						sound[]=
						{
							"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\DMR_03_tail_trees",
							1,
							1,
							1800
						};
						frequency=1;
						volume="(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[]=
						{
							"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\DMR_03_tail_forest",
							1,
							1,
							1800
						};
						frequency=1;
						volume="(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[]=
						{
							"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\DMR_03_tail_meadows",
							1,
							1,
							1800
						};
						frequency=1;
						volume="(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[]=
						{
							"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\DMR_03_tail_houses",
							1,
							1,
							1800
						};
						frequency=1;
						volume="(1-interior/1.4)*houses";
					};
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[]=
				{
					"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\silencer_DMR_03_short_01",
					1,
					1,
					400
				};
				begin2[]=
				{
					"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\silencer_DMR_03_short_01",
					1,
					1,
					400
				};
				begin3[]=
				{
					"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\silencer_DMR_03_short_01",
					1,
					1,
					400
				};
				soundBegin[]=
				{
					"begin1",
					0.33000001,
					"begin2",
					0.33000001,
					"begin3",
					0.34
				};
				class SoundTails
				{
					class TailInterior
					{
						sound[]=
						{
							"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\silencer_DMR_03_tail_interior",
							1.99526,
							1,
							400
						};
						frequency=1;
						volume="interior";
					};
					class TailTrees
					{
						sound[]=
						{
							"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\silencer_DMR_03_tail_trees",
							1,
							1,
							400
						};
						frequency=1;
						volume="(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[]=
						{
							"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\silencer_DMR_03_tail_forest",
							1,
							1,
							400
						};
						frequency=1;
						volume="(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[]=
						{
							"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\silencer_DMR_03_tail_meadows",
							1,
							1,
							400
						};
						frequency=1;
						volume="(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[]=
						{
							"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\silencer_DMR_03_tail_houses",
							1,
							1,
							400
						};
						frequency=1;
						volume="(1-interior/1.4)*houses";
					};
				};
			};
			reloadTime=0.1;
			dispersion=0.00134;
			recoil="recoil_auto_mx";
			recoilProne="recoil_single_prone_ktb";
			minRange=0;
			minRangeProbab=0.30000001;
			midRange=150;
			midRangeProbab=0.80000001;
			maxRange=340;
			maxRangeProbab=0.059999999;
		};
		class WeaponSlotsInfo
		{
			allowedslots[]={901};
			mass=100;
		};
	};
};