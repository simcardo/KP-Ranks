	class simc_tcu_mk3 : simc_ua_67_base {
		scope = 2;
		author = "smicdaro";
		faction = Simc_UA_69;
		genericNames = "EnglishMen";
		model = "\simc_uaf_67\tcu_mk3.p3d";
		headgearList[] = {"H_Simc_M1_bitch_ns", 1, "H_Simc_M1_bitch_op", 1, "H_Simc_M1_bitch_op_2", 1, "H_Simc_M1_bitch_low", 1, "H_Simc_M1_bitch_low_rot", 1, "H_Simc_M1_bitch_flip_op_2", 0.1, "H_Simc_M1_bitch_flip_op", 0.1, "H_Simc_M1_bitch_flip_low", 0.1, "H_Simc_M1_bitch_flip_ns", 0.1};
		linkedItems[] = {"H_Simc_M1_bitch_ns", "V_Simc_56_bandoleer", "ItemMap", "ItemCompass", "ItemWatch"};
		respawnLinkedItems[] = {"H_Simc_M1_bitch_ns", "V_Simc_56_bandoleer", "ItemMap", "ItemCompass", "ItemWatch"};
		hiddenSelections[] = {"camo", "camo2", "rank", "insignia"};
		hiddenSelectionsTextures[] = {"\simc_uaf_67\data\tcu_mk3_co.paa", "\simc_uaf_67\data\tcu_mk3_co.paa", "", ""};
	};
	
	class simc_tcu_mk3_trop : simc_tcu_mk3 {
		scope = 2;
		author = "smicdaro";
		faction = Simc_UA_69;
		genericNames = "EnglishMen";
		uniformClass = "U_Simc_TCU_mk3_trop";
		model = "\simc_uaf_67\tcu_mk3_roll.p3d";
		hiddenSelections[] = {"camo", "camo2", "rank", "insignia"};
		linkedItems[] = {"H_Simc_M1_bitch_ns", "V_Simc_56_M43", "ItemMap", "ItemCompass", "ItemWatch"};
		respawnLinkedItems[] = {"H_Simc_M1_bitch_ns", "V_Simc_56_M43", "ItemMap", "ItemCompass", "ItemWatch"};
	};
	
	class simc_tcu_mk3_poplijn : simc_tcu_mk3 {
		scope = 2;
		author = "smicdaro";
		faction = Simc_UA_69;
		genericNames = "EnglishMen";
		uniformClass = "U_Simc_TCU_mk3_poplijn";
		model = "\simc_uaf_67\tcu_mk3.p3d";
		hiddenSelections[] = {"camo", "camo2", "rank", "insignia", "bots"};
		linkedItems[] = {"H_Simc_M1_bitch_ns", "V_Simc_flak_M56_open_bandoleer", "ItemMap", "ItemCompass", "ItemWatch"};
		respawnLinkedItems[] = {"H_Simc_M1_bitch_ns", "V_Simc_flak_M56_open_bandoleer", "ItemMap", "ItemCompass", "ItemWatch"};
		hiddenSelectionsTextures[] = {"\simc_uaf_67\data\tcu_mk1_co.paa", "\simc_uaf_67\data\tcu_mk1_co.paa", "", "", "\simc_uaf_67\data\bot_dschungel_primus_co.paa"};
		hiddenSelectionsMaterials[] = {"\simc_uaf_67\data\tcu_mk1.rvmat", "\simc_uaf_67\data\tcu_mk1.rvmat", "", "", "\simc_uaf_67\data\bot_dschungel_primus.rvmat"};
		
		class Wounds {
			tex[] = {};
			mat[] = {"simc_uaf_67\data\tcu_mk1.rvmat", "simc_uaf_67\data\tcu_mk1_verwundet.rvmat", "simc_uaf_67\data\tcu_mk1_verwundet.rvmat", "simc_uaf_67\data\tcu_mk1.rvmat", "simc_uaf_67\data\tcu_mk1_verwundet.rvmat", "simc_uaf_67\data\tcu_mk1_verwundet.rvmat", A3_Verwundet};
		};		
	};
	
	class simc_tcu_mk3_poplijn_trop : simc_tcu_mk3 {
		scope = 2;
		author = "smicdaro";
		faction = Simc_UA_69;
		genericNames = "EnglishMen";
		uniformClass = "U_Simc_TCU_mk3_poplijn_trop";
		model = "\simc_uaf_67\tcu_mk3_trop.p3d";
		hiddenSelections[] = {"camo", "camo2", "rank", "insignia"};
		linkedItems[] = {"H_Simc_M1_bitch_ns", "V_Simc_56_M43", "ItemMap", "ItemCompass", "ItemWatch"};
		respawnLinkedItems[] = {"H_Simc_M1_bitch_ns", "V_Simc_56_M43", "ItemMap", "ItemCompass", "ItemWatch"};
		hiddenSelectionsTextures[] = {"\simc_uaf_67\data\tcu_mk1_co.paa", "\simc_uaf_67\data\tcu_mk1_co.paa", "", ""};
		hiddenSelectionsMaterials[] = {"\simc_uaf_67\data\tcu_mk1.rvmat", "\simc_uaf_67\data\tcu_mk1.rvmat", "", ""};
		
		class Wounds {
			tex[] = {};
			mat[] = {"simc_uaf_67\data\tcu_mk1.rvmat", "simc_uaf_67\data\tcu_mk1_verwundet.rvmat", "simc_uaf_67\data\tcu_mk1_verwundet.rvmat", "simc_uaf_67\data\tcu_mk1.rvmat", "simc_uaf_67\data\tcu_mk1_verwundet.rvmat", "simc_uaf_67\data\tcu_mk1_verwundet.rvmat", A3_Verwundet};
		};			
	};
	
	class simc_tcu_erdl_l : simc_tcu_mk3 {
		author = "smicdaro";
		uniformClass = "U_Simc_TCU_mk3_erdl";
		hiddenSelections[] = {"camo", "camo2", "bots", "nom"};
		hiddenSelectionsTextures[] = {"\simc_uaf_67\data\tcu_mk3_erdl_co.paa", "\simc_uaf_67\data\tcu_mk3_erdl_co.paa", "\simc_uaf_67\data\bot_dschungel_primus_co.paa", ""};
	};
	
	class simc_tcu_erdl_top : simc_tcu_erdl_l {
		author = "smicdaro";
		uniformClass = "U_Simc_TCU_mk3_erdl_top";
		hiddenSelections[] = {"camo", "camo2", "nom"};
		hiddenSelectionsTextures[] = {"\simc_uaf_67\data\tcu_mk3_erdl_co.paa", "\simc_uaf_67\data\tcu_mk3_co.paa", "", ""};
	};
	
	class simc_tcu_erdl_low : simc_tcu_erdl_l {
		author = "smicdaro";
		uniformClass = "U_Simc_TCU_mk3_erdl_top";
		model = "\simc_uaf_67\tcu_mk3_trop.p3d";
		hiddenSelections[] = {"camo", "camo2", "rank", "insignia", "bots", "nom"};
		hiddenSelectionsTextures[] = {"\simc_uaf_67\data\tcu_mk3_co.paa", "\simc_uaf_67\data\tcu_mk3_erdl_co.paa", "", "", "\simc_uaf_67\data\bot_dschungel_primus_co.paa", ""};
	};
	
	class simc_tcu_mk1 : simc_ua_67_base {
		scope = 2;
		author = "smicdaro";
		faction = Simc_UA_65;
		uniformClass = "U_Simc_TCU_mk1";
		genericNames = "EnglishMen";
		model = "\simc_uaf_67\tcu_mk1.p3d";
		linkedItems[] = {"H_Simc_M1_bitch_ns", "V_Simc_flak_open", "ItemMap", "ItemCompass", "ItemWatch"};
		respawnLinkedItems[] = {"H_Simc_M1_bitch_ns", "V_Simc_flak_open", "ItemMap", "ItemCompass", "ItemWatch"};
		headgearList[] = {"H_Simc_M1_bitch_ns", 1, "H_Simc_M1_bitch_op", 1, "H_Simc_M1_bitch_op_2", 1, "H_Simc_M1_bitch_flip_ns", 0.1, "H_Simc_M1_bitch_flip_op_2", 0.1, "H_Simc_M1_bitch_flip_op", 0.1};
		hiddenSelections[] = {"camo", "camo2", "rank", "insignia", "bots"};
		hiddenSelectionsTextures[] = {"\simc_uaf_67\data\tcu_mk1_co.paa", "\simc_uaf_67\data\tcu_mk1_co.paa", "", "", "\simc_uaf_67\data\bot_dschungel_mk2_co.paa"};
	};
	
	class simc_tcu_mk1_trop : simc_tcu_mk1 {
		scope = 2;
		author = "smicdaro";
		uniformClass = "U_Simc_TCU_mk1_trop";
		faction = Simc_UA_65;
		genericNames = "EnglishMen";
		model = "\simc_uaf_67\tcu_mk1_trop.p3d";
		hiddenSelections[] = {"camo", "camo2", "rank", "insignia", "bots"};
		hiddenSelectionsTextures[] = {"\simc_uaf_67\data\tcu_mk1_rdt1_co.paa", "\simc_uaf_67\data\tcu_mk1_rdt1_co.paa", "", "", "\simc_uaf_67\data\bot_dschungel_mk2_primus_co.paa"};
	};
	
	class simc_tcu_mk1_roll : simc_tcu_mk1 {
		scope = 2;
		author = "smicdaro";
		uniformClass = "U_Simc_TCU_mk1_roll";
		faction = Simc_UA_65;
		genericNames = "EnglishMen";
		model = "\simc_uaf_67\tcu_mk1_roll.p3d";
		hiddenSelections[] = {"camo", "camo2", "rank", "insignia", "bots"};
		hiddenSelectionsTextures[] = {"\simc_uaf_67\data\tcu_mk1_co.paa", "\simc_uaf_67\data\tcu_mk1_co.paa", "", "", "\simc_uaf_67\data\bot_dschungel_mk2_primus_co.paa"};
	};
	
	class simc_tcu_mk2 : simc_tcu_mk1 {
		scope = 2;
		author = "smicdaro";
		faction = Simc_UA_67;
		genericNames = "EnglishMen";
		uniformClass = "U_Simc_TCU_mk2_trop";
		linkedItems[] = {"H_Simc_M1_bitch_ns", "V_Simc_56", "ItemMap", "ItemCompass", "ItemWatch"};
		respawnLinkedItems[] = {"H_Simc_M1_bitch_ns", "V_Simc_56", "ItemMap", "ItemCompass", "ItemWatch"};
		model = "\simc_uaf_67\tcu_mk1.p3d";
		hiddenSelections[] = {"camo", "camo2", "rank", "insignia", "bots", "buttons"};
		hiddenSelectionsTextures[] = {"\simc_uaf_67\data\tcu_mk1_rdt1_co.paa", "\simc_uaf_67\data\tcu_mk1_rdt1_co.paa", "", "", "\simc_uaf_67\data\bot_dschungel_mk2_primus_co.paa", ""};
	};
	
	class simc_tcu_mk2_trop : simc_tcu_mk1 {
		scope = 2;
		author = "smicdaro";
		faction = Simc_UA_67;
		genericNames = "EnglishMen";
		uniformClass = "U_Simc_TCU_mk2_trop";
		model = "\simc_uaf_67\tcu_mk1_trop.p3d";
		linkedItems[] = {"H_Simc_M1_bitch_ns", "V_Simc_56_alt", "ItemMap", "ItemCompass", "ItemWatch"};
		respawnLinkedItems[] = {"H_Simc_M1_bitch_ns", "V_Simc_56_alt", "ItemMap", "ItemCompass", "ItemWatch"};
		hiddenSelections[] = {"camo", "camo2", "rank", "insignia", "bots", "buttons", "nom"};
		hiddenSelectionsTextures[] = {"\simc_uaf_67\data\tcu_mk1_co.paa", "\simc_uaf_67\data\tcu_mk1_co.paa", "", "", "\simc_uaf_67\data\bot_dschungel_mk2_co.paa", "", "\simc_uaf_67\data\nom_ua_ca.paa"};
	};
	
	class simc_tcu_mk2_roll : simc_tcu_mk2_trop {
		scope = 2;
		author = "smicdaro";
		faction = Simc_UA_67;
		genericNames = "EnglishMen";
		uniformClass = "U_Simc_TCU_mk2_roll";
		model = "\simc_uaf_67\tcu_mk1_roll.p3d";
		linkedItems[] = {"H_Simc_M1_bitch_ns", "V_Simc_56_alt", "ItemMap", "ItemCompass", "ItemWatch"};
		respawnLinkedItems[] = {"H_Simc_M1_bitch_ns", "V_Simc_56_alt", "ItemMap", "ItemCompass", "ItemWatch"};
		hiddenSelections[] = {"camo", "camo2", "rank", "insignia", "bots", "buttons"};
		hiddenSelectionsTextures[] = {"\simc_uaf_67\data\tcu_mk1_rdt1_co.paa", "\simc_uaf_67\data\tcu_mk1_rdt1_co.paa", "", "", "\simc_uaf_67\data\bot_dschungel_mk2_co.paa", ""};
	};
	
	//Services
		
	class simc_og107_mk1 : simc_ua_67_base {
		scope = 2;
		author = "smicdaro";
		faction = Simc_UA_65;
		model = "\simc_uaf_67\og107_mk1.p3d";
		uniformClass = "U_Simc_OG107_mk1";
		hiddenSelections[] = {"camo", "insignia", "rank"};
		hiddenSelectionsTextures[] = {"\simc_uaf_67\data\og107_mk1_co.paa", ""};
		linkedItems[] = {"H_Simc_M1_bitch_ns", "V_Simc_56_M43_ligt", "ItemMap", "ItemCompass", "ItemWatch"};
		respawnLinkedItems[] = {"H_Simc_M1_bitch_ns", "V_Simc_56_M43_ligt", "ItemMap", "ItemCompass", "ItemWatch"};
		
		class Wounds {
			tex[] = {};
			mat[] = {"simc_uaf_67\data\og107_mk1.rvmat", "simc_uaf_67\data\og107_mk1_verwundet.rvmat", "simc_uaf_67\data\og107_mk1_verwundet.rvmat", A3_Verwundet};
		};
		
		class PlateInfos
		{
		    // name of section where plate number should generated
		     name = "nom";
		     // color used for plate number in (r,g,b,a) format
		     color[] = {0,0,0,0.8};
		     plateFont        = "PuristaSemiBold";
		     // "#" represent number & "$" represents letter
		//   plateFormat        = profileName;
		     plateFormat        = "GAY####";
		     // Required even if you don't use any letters in plateFormat
		     plateLetters    = "ABCDEFHIKLMOPRSTVXYZ";
		};
	};
	
	class simc_og107_mk1_trop : simc_og107_mk1 {
		author = "smicdaro";
		faction = Simc_UA_65;
		uniformClass = "U_Simc_OG107_mk1_trop";
		model = "\simc_uaf_67\og107_mk1_trop.p3d";
		hiddenSelections[] = {"camo", "insignia", "rank"};
		hiddenSelectionsTextures[] = {"\simc_uaf_67\data\og107_mk1_co.paa", ""};
		linkedItems[] = {"H_Simc_M1_bitch_ns", "V_Simc_56_ligt", "ItemMap", "ItemCompass", "ItemWatch"};
		respawnLinkedItems[] = {"H_Simc_M1_bitch_ns", "V_Simc_56_ligt", "ItemMap", "ItemCompass", "ItemWatch"};
	};
	
	class simc_og107_mk3 : simc_og107_mk1 {
		author = "smicdaro";
		faction = Simc_UA_67;
		uniformClass = "U_Simc_OG107_mk3";
		model = "\simc_uaf_67\og107_mk3.p3d";
		hiddenSelections[] = {"camo", "insignia", "rank"};
		hiddenSelectionsTextures[] = {"\simc_uaf_67\data\og107_mk3_co.paa", ""};
		linkedItems[] = {"H_Simc_M1_bitch_ns", "V_Simc_56_ligt", "ItemMap", "ItemCompass", "ItemWatch"};
		respawnLinkedItems[] = {"H_Simc_M1_bitch_ns", "V_Simc_56_ligt", "ItemMap", "ItemCompass", "ItemWatch"};
	};
		
	class simc_tcu_tee : simc_ua_67_base {
		scope = protected;
		author = "smicdaro";
		faction = Simc_UA_67;
		model = "\simc_uaf_67\tee_2.p3d";
		hiddenSelections[] = {"camo", "camo2", "buttons"};
		hiddenSelectionsTextures[] = {"\simc_uaf_67\data\tcu_mk3_tee_co.paa", "\simc_uaf_67\data\tcu_mk3_tee_co.paa", ""};
		
		class Wounds {
			tex[] = {};
			mat[] = {"simc_uaf_67\data\tcu_mk3_tee.rvmat", "simc_uaf_67\data\tcu_mk3_tee_verwundet.rvmat", "simc_uaf_67\data\tcu_mk3_tee_verwundet.rvmat", A3_Verwundet};
		};
	};
	
	class simc_tcu_tee_weiss : simc_tcu_tee {
		scope = protected;
		author = "smicdaro";
		hiddenSelections[] = {"camo", "camo2"};
		hiddenSelectionsTextures[] = {"\simc_uaf_67\data\tcu_mk3_tee_weiss_co.paa", "\simc_uaf_67\data\tcu_mk3_tee_co.paa"};
	};
	
	class simc_tcu_tee_long : simc_tcu_tee {
		scope = protected;
		author = "smicdaro";
		model = "\simc_uaf_67\tee.p3d";
		hiddenSelectionsTextures[] = {"\simc_uaf_67\data\tcu_mk3_tee_co.paa", "\simc_uaf_67\data\tcu_mk3_tee_co.paa", ""};
	};
	
	class simc_tcu_tee_long_weiss : simc_tcu_tee_long {
		scope = protected;
		author = "smicdaro";
		hiddenSelections[] = {"camo", "camo2"};
		hiddenSelectionsTextures[] = {"\simc_uaf_67\data\tcu_mk3_tee_weiss_co.paa", "\simc_uaf_67\data\tcu_mk3_tee_co.paa"};
	};
	
	class simc_tcu_tee_top : simc_tcu_tee {
		scope = protected;
		author = "smicdaro";
		model = "\simc_uaf_67\tee_top.p3d";
		hiddenSelectionsTextures[] = {"\simc_uaf_67\data\tcu_mk3_tee_co.paa", "\simc_uaf_67\data\tcu_mk3_tee_co.paa", ""};
	};
	
	class simc_tcu_tee_top_weiss : simc_tcu_tee_top {
		scope = protected;
		author = "smicdaro";
		hiddenSelections[] = {"camo", "camo2"};
		hiddenSelectionsTextures[] = {"\simc_uaf_67\data\tcu_mk3_tee_weiss_co.paa", "\simc_uaf_67\data\tcu_mk3_tee_co.paa"};
	};
	
	class simc_tcu_tee_erdl : simc_tcu_tee {
		scope = protected;
		author = "smicdaro";
		hiddenSelectionsTextures[] = {"\simc_uaf_67\data\tcu_mk3_tee_co.paa", "\simc_uaf_67\data\tcu_mk3_tee_weiss_co.paa", ""};
	};
	
	class simc_tcu_tee_erdl_weiss : simc_tcu_tee {
		model = "\simc_uaf_67\tee.p3d";
		scope = protected;
		author = "smicdaro";
		hiddenSelectionsTextures[] = {"\simc_uaf_67\data\tcu_mk3_tee_weiss_co.paa", "\simc_uaf_67\data\tcu_mk3_tee_weiss_co.paa", ""};
	};
	
	