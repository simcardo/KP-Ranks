// config.bin - 03:04:06 04/03/20, generated in 0.30 seconds
// Generated by unRap v1.06 by Kegetys
// Separate rootclasses: Disabled, Automatic comments: Enabled

#define private		0
#define protected		1
#define public		2

#define true	1
#define false	0

class CfgPatches {
	class simc_KP_ranks {
		author = "Wyqer";
		name = "KP Ranks";
		url = "https://github.com/KillahPotatoes/KP-Ranks";
		units[] = {"KPR_force"};
		weapons[] = {};
		requiredVersion = 1.84;
		requiredAddons[] = {"A3_Modules_F", "cba_main"};
		versionDesc = "KP Ranks";
		version = 2.0.2;
		versionStr = 2.0.2;
		versionAr[] = {2, 0, 2};
		authors[] = {"Wyqer"};
	};
};

class CfgSettings {
	class CBA {
		class Versioning {
			class KP_Ranks {
				main_addon = "KP_Ranks";
				
				class Dependencies {
					CBA[] = {"cba_main", {3, 7, 1}, "true"};
				};
			};
		};
	};
};

class Extended_PreInit_EventHandlers {
	class KPR_preInit {
		init = "[] call KPR_fnc_initCBA";
	};
};

class Extended_PostInit_EventHandlers {
	class KPR_postInit {
		init = "[] call KPR_fnc_initRanks";
	};
};

class CfgFactionClasses {
	class NO_CATEGORY;	// External class reference
	
	class KPR_Category : NO_CATEGORY {
		displayName = "KP Ranks";
	};
};

class CfgVehicles {
	class Logic;	// External class reference
	
	class Module_F : Logic {
		class AttributesBase {
			class Default;	// External class reference
			class ModuleDescription;	// External class reference
		};
		
		class ModuleDescription {
			class AnyBrain;	// External class reference
		};
	};
	
	class KPR_force : Module_F {
		scope = public;
		displayName = "Force Ranks";
		icon = "simc_uaf_67_preview\icons\US_rank_ca.paa";
		category = "KPR_Category";
		function = "KPR_fnc_forceRanks";
		functionPriority = 1;
		isGlobal = 0;
		isTriggerActivated = 0;
		isDisposable = 0;
		is3DEN = 0;
		
		class Attributes : AttributesBase {
			class ModuleDescription : ModuleDescription {};
		};
		
		class ModuleDescription : ModuleDescription {
			description[] = {$STR_KPR_CONFIG_MODULEDESC1, $STR_KPR_CONFIG_MODULEDESC2};
			position = 0;
			direction = 0;
			optional = 1;
			duplicate = 0;
		};
	};
};

class CfgFunctions {
	class SRP {
		tag = SRP;
		
		class simple_rp {
			file = "\simc_uaf_67_cfg\Ranks\srp";
			
			class setUnitRankPatch {};
			
			class setUnitRank {};
			
			class getUnitRank {};
		};
	};
	class KPR {
		class KP_Ranks {
			file = "\simc_uaf_67_cfg\Ranks\fnc";
			
			class addActions {};
			
			class addPlayer {};
			
			class addScore {};
			
			class applyRank {};
			
			class autoLoop {};
			
			class entityKilled {};
			
			class forceRanks {};
			
			class getAceKiller {};
			
			class getInsigniaData {};
			
			class getPlayerIndex {};
			
			class getPlaytime {};
			
			class getPlaytimePlain {};
			
			class getRank {};
			
			class getRankName {};
			
			class getRankScore {};
			
			class getRankScoreNext {};
			
			class getScore {};
			
			class getUniformIndex {};
			
			class hasRank {};
			
			class initACE {};
			
			class initCBA {};
			
			class initRanks {};
			
			class isAdmin {};
			
			class levelAnnounce {};
			
			class openDialogPlayers {};
			
			class openDialogUniforms {};
			
			class playerAddEdit {};
			
			class playerDeath {};
			
			class playerExport {};
			
			class playerImport {};
			
			class playerSave {};
			
			class playerSaveServer {};
			
			class savePlayers {};
			
			class saveUniforms {};
			
			class scoreUpdate {};
			
			class sendAceKiller {};
			
			class setDefaultUniforms {};
			
			class setRank {};
			
			class setScore {};
			
			class showHint {};
			
			class uniformExport {};
			
			class uniformFill {};
			
			class uniformImport {};
			
			class uniformLBChange {};
			
			class uniformMove {};
			
			class uniformSave {};
			
			class updatePlayer {};
		};
	};
};

class CfgUnitRanks {	
	class simc_Insignia_Base {
		displayName = "";
		author = "654wak654";
		texture = "";
	};
	
	class EMPTY_simc : simc_Insignia_Base {
	};
	
	class PRIVATE_SIMC_0 : simc_Insignia_Base {
		displayName = "US Private";
		texture = "\simc_uaf_67\patches\US_PFC_ca.paa";
		material = "\simc_uaf_67\data\fabr.rvmat";
	};
	
	class CORPORAL_SIMC_0 : simc_Insignia_Base {
		displayName = "US Corporal";
		texture = "\simc_uaf_67\patches\US_CPL_ca.paa";
		material = "\simc_uaf_67\data\fabr.rvmat";
	};
	
	class SERGEANT_SIMC_0 : simc_Insignia_Base {
		displayName = "US Sergeant";
		texture = "\simc_uaf_67\patches\US_SSG_ca.paa";
		material = "\simc_uaf_67\data\fabr.rvmat";
	};
	
	class LIEUTENANT_SIMC_0 : simc_Insignia_Base {
		displayName = "US Lieutenant";
		texture = "\simc_uaf_67\patches\US_1LT_ca.paa";
		material = "\simc_uaf_67\data\fabr.rvmat";
	};
	
	class CAPTAIN_SIMC_0 : simc_Insignia_Base {
		displayName = "US Captain";
		texture = "\simc_uaf_67\patches\US_CPT_ca.paa";
		material = "\simc_uaf_67\data\fabr.rvmat";
	};
	
	class MAJOR_SIMC_0 : simc_Insignia_Base {
		displayName = "US Major";
		texture = "\simc_uaf_67\patches\US_MAJ_ca.paa";
		material = "\simc_uaf_67\data\fabr.rvmat";
	};
	
	class COLONEL_SIMC_0 : simc_Insignia_Base {
		displayName = "US Colonel";
		texture = "\simc_uaf_67\patches\US_COL_ca.paa";
		material = "\simc_uaf_67\data\fabr.rvmat";
	};
	
	class Simc_UAE_0 {
		author = "089";
		displayName = "UAE00 Private E1";
		material = "\simc_uaf_67\data\fabr.rvmat";
		texture = "#(rgb,8,8,3)color(0,0,0,0)";
		textureVehicle = "";
	};
	
	class Simc_UAE_1 {
		author = "9315";
		displayName = "UAE01 Private E2";
		material = "\simc_uaf_67\data\fabr.rvmat";
		texture = "\simc_uaf_67\patches\US_PVT_ca.paa";
		textureVehicle = "";
	};
	
	class Simc_UAE_2 {
		author = "089";
		displayName = "UAE02 Private First Class";
		material = "\simc_uaf_67\data\fabr.rvmat";
		texture = "\simc_uaf_67\patches\US_PFC_ca.paa";
		textureVehicle = "";
	};
	
	class Simc_UAE_3 {
		author = "089";
		displayName = "UAE03 Specialist 4";
		material = "\simc_uaf_67\data\fabr.rvmat";
		texture = "\simc_uaf_67\patches\US_SP4_ca.paa";
		textureVehicle = "";
	};
	
	class Simc_UAE_4 {
		author = "089";
		displayName = "UAE04 Corporal";
		material = "\simc_uaf_67\data\fabr.rvmat";
		texture = "\simc_uaf_67\patches\US_CPL_ca.paa";
		textureVehicle = "";
	};
	
	class Simc_UAE_5 {
		author = "089";
		displayName = "UAE05 Specialist 5";
		material = "\simc_uaf_67\data\fabr.rvmat";
		texture = "\simc_uaf_67\patches\US_SP5_ca.paa";
		textureVehicle = "";
	};
	
	class Simc_UAE_6 {
		author = "089";
		displayName = "UAE06 Sergeant";
		material = "\simc_uaf_67\data\fabr.rvmat";
		texture = "\simc_uaf_67\patches\US_SGT_ca.paa";
		textureVehicle = "";
	};
	
	class Simc_UAE_7 {
		author = "089";
		displayName = "UAE07 Staff Sergeant";
		material = "\simc_uaf_67\data\fabr.rvmat";
		texture = "\simc_uaf_67\patches\US_SSG_ca.paa";
		textureVehicle = "";
	};
	
	class Simc_UAE_8 {
		author = "Nils";
		displayName = "UAE08 Sergeant First Class";
		material = "\simc_uaf_67\data\fabr.rvmat";
		texture = "\simc_uaf_67\patches\US_SFC_ca.paa";
		textureVehicle = "";
	};
	
	class Simc_UAE_9 {
		author = "089";
		displayName = "UAE09 Master Sergeant";
		material = "\simc_uaf_67\data\fabr.rvmat";
		texture = "\simc_uaf_67\patches\US_MSG_ca.paa";
		textureVehicle = "";
	};
	
	class Simc_UAE_10 {
		author = "Nils";
		displayName = "UAE10 First Sergeant";
		material = "\simc_uaf_67\data\fabr.rvmat";
		texture = "\simc_uaf_67\patches\US_1SG_ca.paa";
		textureVehicle = "";
	};
	
	class Simc_UAE_11 {
		author = "089";
		displayName = "UAE13 Second Lieutenant";
		material = "\simc_uaf_67\data\fabr.rvmat";
		texture = "\simc_uaf_67\patches\US_2LT_ca.paa";
		textureVehicle = "";
	};
	
	class Simc_UAE_12 {
		author = "Nils";
		displayName = "UAE12 First Lieutenant";
		material = "\simc_uaf_67\data\fabr.rvmat";
		texture = "\simc_uaf_67\patches\US_1LT_ca.paa";
		textureVehicle = "";
	};
	
	class Simc_UAE_13 {
		author = "089";
		displayName = "UAE13 Captain";
		material = "\simc_uaf_67\data\fabr.rvmat";
		texture = "\simc_uaf_67\patches\US_CPT_ca.paa";
		textureVehicle = "";
	};
	
	class Simc_UAE_14 {
		author = "089";
		displayName = "UAE14 Major";
		material = "\simc_uaf_67\data\fabr.rvmat";
		texture = "\simc_uaf_67\patches\US_MAJ_ca.paa";
		textureVehicle = "";
	};
	
	class Simc_UAE_15 {
		author = "089";
		displayName = "UAE15 Lieutenant Colonel";
		material = "\simc_uaf_67\data\fabr.rvmat";
		texture = "\simc_uaf_67\patches\US_LTC_ca.paa";
		textureVehicle = "";
	};
	
	class Simc_UAE_16 {
		author = "9315";
		displayName = "UAE16 Colonel";
		material = "\simc_uaf_67\data\fabr.rvmat";
		texture = "\simc_uaf_67\patches\US_COL_ca.paa";
		textureVehicle = "";
	};	
	
	class Simc_UAL_0 {
		author = "Frenchy56";
		displayName = "UAL00 Private E1";
		material = "\simc_uaf_67\data\fabr.rvmat";
		texture = "#(rgb,8,8,3)color(0,0,0,0)";
		textureVehicle = "";
	};
	
	class Simc_UAS_0 {
		author = "0779";
		displayName = "UAS00 Private E1";
		material = "\simc_uaf_67\data\fabr.rvmat";
		texture = "#(rgb,8,8,3)color(0,0,0,0)";
		textureVehicle = "";
	};
	
	class Simc_UAS_1 {
		author = "0779";
		displayName = "UAS01 Private E2";
		material = "\simc_uaf_67\data\fabr.rvmat";
		texture = "\simc_uaf_67\patches\US_PVT_sub_ca.paa";
		textureVehicle = "";
	};
	
	class Simc_UAS_2 {
		author = "0779";
		displayName = "UAS02 Private First Class";
		material = "\simc_uaf_67\data\fabr.rvmat";
		texture = "\simc_uaf_67\patches\US_PFC_sub_ca.paa";
		textureVehicle = "";
	};
	
	class Simc_UAS_3 {
		author = "0779";
		displayName = "UAS03 Specialist 4";
		material = "\simc_uaf_67\data\fabr.rvmat";
		texture = "\simc_uaf_67\patches\US_SP4_sub_ca.paa";
		textureVehicle = "";
	};
	
	class Simc_UAS_4 {
		author = "0779";
		displayName = "UAS04 Corporal";
		material = "\simc_uaf_67\data\fabr.rvmat";
		texture = "\simc_uaf_67\patches\US_CPL_sub_ca.paa";
		textureVehicle = "";
	};
	
	class Simc_UAS_5 {
		author = "0779";
		displayName = "UAS05 Specialist 5";
		material = "\simc_uaf_67\data\fabr.rvmat";
		texture = "\simc_uaf_67\patches\US_SP5_sub_ca.paa";
		textureVehicle = "";
	};
	
	class Simc_UAS_6 {
		author = "0779";
		displayName = "UAS06 Sergeant";
		material = "\simc_uaf_67\data\fabr.rvmat";
		texture = "\simc_uaf_67\patches\US_SGT_sub_ca.paa";
		textureVehicle = "";
	};
	
	class Simc_UAS_7 {
		author = "0779";
		displayName = "UAS07 Staff Sergeant";
		material = "\simc_uaf_67\data\fabr.rvmat";
		texture = "\simc_uaf_67\patches\US_SSG_sub_ca.paa";
		textureVehicle = "";
	};
	
	class Simc_UAS_8 {
		author = "0779";
		displayName = "UAS08 Sergeant First Class";
		material = "\simc_uaf_67\data\fabr.rvmat";
		texture = "\simc_uaf_67\patches\US_SFC_sub_ca.paa";
		textureVehicle = "";
	};
	
	class Simc_UAS_9 {
		author = "0779";
		displayName = "UAS09 Master Sergeant";
		material = "\simc_uaf_67\data\fabr.rvmat";
		texture = "\simc_uaf_67\patches\US_MSG_sub_ca.paa";
		textureVehicle = "";
	};
	
	class Simc_UAS_10 {
		author = "0779";
		displayName = "UAS10 First Sergeant";
		material = "\simc_uaf_67\data\fabr.rvmat";
		texture = "\simc_uaf_67\patches\US_1SG_sub_ca.paa";
		textureVehicle = "";
	};
	
	class Simc_UAS_11 {
		author = "089";
		displayName = "UAS11 Second Lieutenant";
		material = "\simc_uaf_67\data\fabr.rvmat";
		texture = "\simc_uaf_67\patches\US_2LT_ca.paa";
		textureVehicle = "";
	};
	
	class Simc_UAS_12 {
		author = "Nils";
		displayName = "UAS12 First Lieutenant";
		material = "\simc_uaf_67\data\fabr.rvmat";
		texture = "\simc_uaf_67\patches\US_1LT_ca.paa";
		textureVehicle = "";
	};
	
	class Simc_UAS_13 {
		author = "089";
		displayName = "UAS13 Captain";
		material = "\simc_uaf_67\data\fabr.rvmat";
		texture = "\simc_uaf_67\patches\US_CPT_ca.paa";
		textureVehicle = "";
	};
	
	class Simc_UAS_14 {
		author = "089";
		displayName = "UAS14 Major";
		material = "\simc_uaf_67\data\fabr.rvmat";
		texture = "\simc_uaf_67\patches\US_MAJ_ca.paa";
		textureVehicle = "";
	};
	
	class Simc_UAS_15 {
		author = "089";
		displayName = "UAS15 Lieutenant Colonel";
		material = "\simc_uaf_67\data\fabr.rvmat";
		texture = "\simc_uaf_67\patches\US_LTC_ca.paa";
		textureVehicle = "";
	};
	
	class Simc_UAS_16 {
		author = "9315";
		displayName = "UAS16 Colonel";
		material = "\simc_uaf_67\data\fabr.rvmat";
		texture = "\simc_uaf_67\patches\US_COL_ca.paa";
		textureVehicle = "";
	};
	
	class Simc_UAL_1 {
		author = "Frenchy56";
		displayName = "UAL01 Private E2";
		material = "\simc_uaf_67\data\fabr.rvmat";
		texture = "\simc_uaf_67\patches\US_PVT_spat_ca.paa";
		textureVehicle = "";
	};
	
	class Simc_UAL_2 {
		author = "Frenchy56";
		displayName = "UAL02 Private First Class";
		material = "\simc_uaf_67\data\fabr.rvmat";
		texture = "\simc_uaf_67\patches\US_PFC_spat_ca.paa";
		textureVehicle = "";
	};
	
	class Simc_UAL_3 {
		author = "Frenchy56";
		displayName = "UAL03 Specialist 4";
		material = "\simc_uaf_67\data\fabr.rvmat";
		texture = "\simc_uaf_67\patches\US_SP4_spat_ca.paa";
		textureVehicle = "";
	};
	
	class Simc_UAL_4 {
		author = "Frenchy56";
		displayName = "UAL04 Corporal";
		material = "\simc_uaf_67\data\fabr.rvmat";
		texture = "\simc_uaf_67\patches\US_CPL_spat_ca.paa";
		textureVehicle = "";
	};
	
	class Simc_UAL_5 {
		author = "Frenchy56";
		displayName = "UAL05 Specialist 5";
		material = "\simc_uaf_67\data\fabr.rvmat";
		texture = "\simc_uaf_67\patches\US_SP5_spat_ca.paa";
		textureVehicle = "";
	};
	
	class Simc_UAL_6 {
		author = "Frenchy56";
		displayName = "UAL06 Sergeant";
		material = "\simc_uaf_67\data\fabr.rvmat";
		texture = "\simc_uaf_67\patches\US_SGT_spat_ca.paa";
		textureVehicle = "";
	};
	
	class Simc_UAL_7 {
		author = "Frenchy56";
		displayName = "UAL07 Staff Sergeant";
		material = "\simc_uaf_67\data\fabr.rvmat";
		texture = "\simc_uaf_67\patches\US_SSG_spat_ca.paa";
		textureVehicle = "";
	};
	
	class Simc_UAL_8 {
		author = "Frenchy56";
		displayName = "UAL08 Sergeant First Class";
		material = "\simc_uaf_67\data\fabr.rvmat";
		texture = "\simc_uaf_67\patches\US_SFC_spat_ca.paa";
		textureVehicle = "";
	};
	
	class Simc_UAL_9 {
		author = "Frenchy56";
		displayName = "UAL09 Master Sergeant";
		material = "\simc_uaf_67\data\fabr.rvmat";
		texture = "\simc_uaf_67\patches\US_MSG_spat_ca.paa";
		textureVehicle = "";
	};
	
	class Simc_UAL_10 {
		author = "Frenchy56";
		displayName = "UAL10 First Sergeant";
		material = "\simc_uaf_67\data\fabr.rvmat";
		texture = "\simc_uaf_67\patches\US_1SG_spat_ca.paa";
		textureVehicle = "";
	};
	
	class Simc_UAL_11 {
		author = "089";
		displayName = "UAL11 Second Lieutenant";
		material = "\simc_uaf_67\data\fabr.rvmat";
		texture = "\simc_uaf_67\patches\US_2LT_ca.paa";
		textureVehicle = "";
	};
	
	class Simc_UAL_12 {
		author = "Nils";
		displayName = "UAL12 First Lieutenant";
		material = "\simc_uaf_67\data\fabr.rvmat";
		texture = "\simc_uaf_67\patches\US_1LT_ca.paa";
		textureVehicle = "";
	};
	
	class Simc_UAL_13 {
		author = "089";
		displayName = "UAL13 Captain";
		material = "\simc_uaf_67\data\fabr.rvmat";
		texture = "\simc_uaf_67\patches\US_CPT_ca.paa";
		textureVehicle = "";
	};
	
	class Simc_UAL_14 {
		author = "089";
		displayName = "UAL14 Major";
		material = "\simc_uaf_67\data\fabr.rvmat";
		texture = "\simc_uaf_67\patches\US_MAJ_ca.paa";
		textureVehicle = "";
	};
	
	class Simc_UAL_15 {
		author = "089";
		displayName = "UAL15 Lieutenant Colonel";
		material = "\simc_uaf_67\data\fabr.rvmat";
		texture = "\simc_uaf_67\patches\US_LTC_ca.paa";
		textureVehicle = "";
	};
	
	class Simc_UAL_16 {
		author = "9315";
		displayName = "UAL16 Colonel";
		material = "\simc_uaf_67\data\fabr.rvmat";
		texture = "\simc_uaf_67\patches\US_COL_ca.paa";
		textureVehicle = "";
	};
};

/*
    --- UI Defines ---
*/
#include "KP_uiDefines.hpp"
#include "KPR_dialogs.hpp"

