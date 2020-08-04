	
	class V_Simc_56_basic : Vest_Camo_Base {
		author = "Justin ft. 089";
		scope = protected;
		displayName = "[US] M56 LCE";
		model = "\simc_uaf_67\vest_flak_open.p3d";
		picture = "\simc_uaf_67_preview\icons\sns_wip_ca.paa";
		hiddenSelections[] = {""};
		hiddenSelectionsTextures[] = {""};
		
		class ItemInfo : VestItem {
			uniformModel = "\simc_uaf_67\vest_flak_open.p3d";
			hiddenSelections[] = {""};
			hiddenSelectionsTextures[] = {""};
			containerClass = "Supply90";
			mass = 7;
		};
	};

	class V_Simc_56 : V_Simc_56_basic {
		author = "Justin + Jujurat + 089";
		scope = 2;
		displayName = "[US] M1956 LCE";
		model = "\simc_uaf_67\belt_56_drop.p3d";
		picture = "\simc_uaf_67_preview\icons\belt_56_ca.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\simc_uaf_67\data\gear_56_co.paa"};
		
		class ItemInfo : VestItem {
			uniformModel = "\simc_uaf_67\belt_56.p3d";
			hiddenSelections[] = {"camo"};
			containerClass = "Supply90";
			mass = 7;
		};
	};
	
	class V_Simc_56_alt : V_Simc_56 {
		author = "Justin + Jujurat + 089";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\simc_uaf_67\data\gear_56_laat_co.paa"};
		
		class ItemInfo : VestItem {
			uniformModel = "\simc_uaf_67\belt_56_alt.p3d";
			hiddenSelections[] = {"camo"};
			containerClass = "Supply90";
			mass = 7;
		};
	};
	
	class V_Simc_56_frag : V_Simc_56 {
		author = "Justin + Jujurat + Motta + 089";
		displayName = "[US] M1956 LCE/Frags";
		hiddenSelections[] = {"band"};
		hiddenSelectionsTextures[] = {""};
		
		class ItemInfo : VestItem {
			uniformModel = "\simc_uaf_67\belt_56_frag.p3d";
			hiddenSelections[] = {"band"};
			containerClass = "Supply90";
			mass = 7;
		};
	};
	
	class V_Simc_56_frag_alt : V_Simc_56_frag {
		author = "Justin + Jujurat + Motta + 089";
		hiddenSelections[] = {"band"};
		hiddenSelectionsTextures[] = {""};
		
		class ItemInfo : VestItem {
			uniformModel = "\simc_uaf_67\belt_56_frag_2.p3d";
			hiddenSelections[] = {"band"};
			containerClass = "Supply90";
			mass = 7;
		};
	};
	
	class V_Simc_56_frag_ligt : V_Simc_56_frag {
		displayName = "[US] M1956 LCE/Frags (Light)";
		author = "Justin + Jujurat + Motta + 089";
		hiddenSelections[] = {"band", "botol"};
		hiddenSelectionsTextures[] = {""};
		
		class ItemInfo : VestItem {
			uniformModel = "\simc_uaf_67\belt_56_frag_2.p3d";
			hiddenSelections[] = {"band", "botol"};
			containerClass = "Supply90";
			mass = 7;
		};
	};
	
	class V_Simc_56_frag_ligt_b : V_Simc_56_frag {
		displayName = "[US] M1956 LCE/Frags (Light/Bandoleer)";
		author = "Justin + Jujurat + Motta + 089";
		hiddenSelections[] = {"botol"};
		hiddenSelectionsTextures[] = {""};
		
		class ItemInfo : VestItem {
			uniformModel = "\simc_uaf_67\belt_56_frag.p3d";
			hiddenSelections[] = {"botol"};
			containerClass = "Supply90";
			mass = 7;
		};
	};
	
	class V_Simc_56_bandoleer : V_Simc_56 {
		displayName = "[US] M1956 LCE/Bandoleer";
		author = "schmindtkardeu";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\simc_uaf_67\data\gear_56_co.paa"};
		
		class ItemInfo : VestItem {
			uniformModel = "\simc_uaf_67\belt_56_b.p3d";
			hiddenSelections[] = {"camo"};
			containerClass = "Supply120";
			mass = 7;
		};
	};
	
	class V_Simc_56_ligt : V_Simc_56 {
		author = "Justin + Jujurat + 089";
		hiddenSelections[] = {"camo", "band", "sekop"};
		hiddenSelectionsTextures[] = {"\simc_uaf_67\data\gear_56_co.paa", ""};
		
		class ItemInfo : VestItem {
			uniformModel = "\simc_uaf_67\belt_56_ligt.p3d";
			hiddenSelections[] = {"camo", "band", "sekop"};
			containerClass = "Supply70";
			mass = 7;
		};
	};
	
	class V_Simc_56_ligt_2 : V_Simc_56_ligt {
		displayName = "[US] M1956 LCE (Light)";
		author = "Justin + Jujurat + 089";
		hiddenSelections[] = {"camo", "ass", "sekop", "band"};
		hiddenSelectionsTextures[] = {"\simc_uaf_67\data\gear_56_laat_co.paa", ""};
		
		class ItemInfo : VestItem {
			uniformModel = "\simc_uaf_67\belt_56_ligt.p3d";
			hiddenSelections[] = {"camo", "ass", "sekop", "band"};
			containerClass = "Supply100";
			mass = 7;
		};
	};
	
	class V_Simc_56_M43 : V_Simc_56 {
		author = "Justin + Jujurat + 089";
		displayName = "[US] M1956 LCE/M43";
		hiddenSelections[] = {"camo", "band"};
		hiddenSelectionsTextures[] = {"\simc_uaf_67\data\gear_56_laat_co.paa"};
		
		class ItemInfo : VestItem {
			uniformModel = "\simc_uaf_67\belt_56_M43.p3d";
			hiddenSelections[] = {"camo", "band"};
			containerClass = "Supply90";
			mass = 7;
		};
	};
	
	class V_Simc_56_M43_ligt : V_Simc_56_M43 {
		author = "Justin + Jujurat + 089";
		displayName = "[US] M1956 LCE/M43";
		hiddenSelections[] = {"camo", "botol", "band"};
		hiddenSelectionsTextures[] = {"\simc_uaf_67\data\gear_56_co.paa", ""};
		
		class ItemInfo : VestItem {
			uniformModel = "\simc_uaf_67\belt_56_M43.p3d";
			hiddenSelections[] = {"camo", "botol", "band"};
			containerClass = "Supply90";
			mass = 7;
		};
	};
	
	class V_Simc_56_M43_ligt_2 : V_Simc_56_M43 {
		author = "Justin + Jujurat + 089";
		displayName = "[US] M1956 LCE/M43 (Light)";
		hiddenSelections[] = {"camo", "ass"};
		hiddenSelectionsTextures[] = {"\simc_uaf_67\data\gear_56_co.paa", ""};
		
		class ItemInfo : VestItem {
			uniformModel = "\simc_uaf_67\belt_56_ligt.p3d";
			hiddenSelections[] = {"camo", "ass"};
			containerClass = "Supply90";
			mass = 7;
		};
	};
	
	class V_Simc_56_M43_bandoleer : V_Simc_56_M43 {
		author = "Justin + Jujurat + 089";
		displayName = "[US] M1956 LCE/M43/Bandoleer";
		hiddenSelections[] = {"camo", "botol"};
		hiddenSelectionsTextures[] = {"\simc_uaf_67\data\gear_56_laat_co.paa", ""};
		
		class ItemInfo : VestItem {
			uniformModel = "\simc_uaf_67\belt_56_M43.p3d";
			hiddenSelections[] = {"camo", "botol"};
			containerClass = "Supply90";
			mass = 7;
		};
	};
	
	class V_Simc_56_45 : V_Simc_56 {
		author = "Justin + Jujurat + 089";
		displayName = "[US] M1956 LCE/sidearm";
		hiddenSelections[] = {"nadeban"};
		hiddenSelectionsTextures[] = {""};
		
		class ItemInfo : VestItem {
			uniformModel = "\simc_uaf_67\belt_56_79.p3d";
			hiddenSelections[] = {"nadeban"};
			containerClass = "Supply90";
			mass = 7;
		};
	};
	
	class V_Simc_56_45_alt : V_Simc_56_45 {
		author = "Justin + Jujurat + 089";
		displayName = "[US] M1956 LCE/sidearm";
		hiddenSelections[] = {"nadeban"};
		hiddenSelectionsTextures[] = {""};
		
		class ItemInfo : VestItem {
			uniformModel = "\simc_uaf_67\belt_56_45.p3d";
			hiddenSelections[] = {"nadeban"};
			containerClass = "Supply60";
			mass = 7;
		};
	};
	
	class V_Simc_56_45_ligt : V_Simc_56_45 {
		displayName = "[US] M1956 LCE/sidearm (Light)";
		author = "Justin + Jujurat + Motta + 089";
		hiddenSelections[] = {"botol", "nadeban"};
		hiddenSelectionsTextures[] = {""};
		
		class ItemInfo : VestItem {
			uniformModel = "\simc_uaf_67\belt_56_79.p3d";
			hiddenSelections[] = {"botol", "nadeban"};
			containerClass = "Supply90";
			mass = 7;
		};
	};
	
	class V_Simc_56_45_ligt_alt : V_Simc_56_45_ligt {
		author = "Justin + Jujurat + Motta + 089";
		scope = protected;
		hiddenSelections[] = {"botol", "nadeban"};
		hiddenSelectionsTextures[] = {""};
		
		class ItemInfo : VestItem {
			uniformModel = "\simc_uaf_67\belt_56_45.p3d";
			hiddenSelections[] = {"botol", "nadeban"};
			containerClass = "Supply30";
			mass = 7;
		};
	};
	
	class V_Simc_56_45_ligt_zusp : V_Simc_56_45_ligt {
		author = "Justin + Jujurat + Motta + 089";
		hiddenSelections[] = {"botol", "nadeban","zusp"};
		hiddenSelectionsTextures[] = {""};
		
		class ItemInfo : VestItem {
			uniformModel = "\simc_uaf_67\belt_56_45.p3d";
			hiddenSelections[] = {"botol", "nadeban","zusp"};
			containerClass = "Supply30";
			mass = 7;
		};
	};
	
	class V_Simc_56_4cm : V_Simc_56 {
		author = "Justin + Jujurat + 089";
		displayName = "[US] M1956 LCE/40mm";
		hiddenSelections[] = {""};
		hiddenSelectionsTextures[] = {""};
		
		class ItemInfo : VestItem {
			uniformModel = "\simc_uaf_67\belt_56_79.p3d";
			hiddenSelections[] = {""};
			containerClass = "Supply90";
			mass = 7;
		};
	};
	
	class V_Simc_56_4cm_alt : V_Simc_56_4cm {
		author = "Justin + Jujurat + 089";
		scope = protected;
		hiddenSelections[] = {""};
		hiddenSelectionsTextures[] = {""};
		
		class ItemInfo : VestItem {
			uniformModel = "\simc_uaf_67\belt_56_45.p3d";
			hiddenSelections[] = {""};
			containerClass = "Supply90";
			mass = 7;
		};
	};
	
	class V_Simc_56_4cm_ligt : V_Simc_56_4cm {
		displayName = "[US] M1956 LCE/40mm (Light)";
		author = "Justin + Jujurat + Motta + 089";
		hiddenSelections[] = {"botol"};
		hiddenSelectionsTextures[] = {""};
		
		class ItemInfo : VestItem {
			uniformModel = "\simc_uaf_67\belt_56_79.p3d";
			hiddenSelections[] = {"botol"};
			containerClass = "Supply60";
			mass = 7;
		};
	};
	
	class V_Simc_56_4cm_ligt_alt : V_Simc_56_4cm_ligt {
		author = "Justin + Jujurat + 089";
		hiddenSelections[] = {"botol", "zusp"};
		hiddenSelectionsTextures[] = {""};
		
		class ItemInfo : VestItem {
			uniformModel = "\simc_uaf_67\belt_56_45.p3d";
			hiddenSelections[] = {"botol", "zusp"};
			containerClass = "Supply60";
			mass = 7;
		};
	};
	
	class V_Simc_556_bandoleer : V_Simc_56_M43 {
		author = "Justin + Jujurat + 089";
		displayName = "[US] Bandoleer";
		picture = "\simc_uaf_67_preview\icons\bandoiler_ca.paa";
		model = "\simc_uaf_67\bandolier_drop.p3d";
		hiddenSelections[] = {"lows", "top"};
		hiddenSelectionsTextures[] = {"\simc_uaf_67\data\gear_56_laat_co.paa", ""};
		
		class ItemInfo : VestItem {
			uniformModel = "\simc_uaf_67\bandolier_fore.p3d";
			hiddenSelections[] = {"lows", "top"};
			containerClass = "Supply60";
			mass = 4;
		};
	};
	
	class V_Simc_flak : V_Simc_56_basic {
		author = "089";
		scope = 2s;
		displayName = "[US] M1952A Vest";
		model = "\simc_uaf_67\suitpack_falk.p3d";
		picture = "\simc_uaf_67_preview\icons\falk_ca.paa";
		hiddenSelections[] = {""};
		hiddenSelectionsTextures[] = {""};
		
		class ItemInfo : VestItem {
			uniformModel = "\simc_uaf_67\vest_flak.p3d";
			hiddenSelections[] = {""};
			containerClass = "Supply60";
			mass = 20;
		};
	};
	
	class V_Simc_flak_open : V_Simc_flak {
		author = "9315";
		displayName = "[US] M1952A Vest";
		model = "\simc_uaf_67\suitpack_falk.p3d";
		hiddenSelections[] = {""};
		hiddenSelectionsTextures[] = {""};
		
		class ItemInfo : VestItem {
			uniformModel = "\simc_uaf_67\vest_flak_open.p3d";
			hiddenSelections[] = {""};
			containerClass = "Supply60";
			mass = 7;
		};
	};
	
	class V_Simc_flak_bandoleer : V_Simc_flak {
		author = "089";
		displayName = "[US] M1952A Vest/Bandoleer";
		model = "\simc_uaf_67\suitpack_falk.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {""};
		
		class ItemInfo : VestItem {
			uniformModel = "\simc_uaf_67\vest_flak_belt.p3d";
			hiddenSelections[] = {"camo"};
			containerClass = "Supply90";
			mass = 7;
		};
	};
	
	class V_Simc_flak_bandoleer_79 : V_Simc_flak {
		author = "089";
		scope = 1;
		displayName = "[US] M1952A Vest/40mm";
		model = "\simc_uaf_67\suitpack_falk.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {""};
		
		class ItemInfo : VestItem {
			uniformModel = "\simc_uaf_67\vest_flak_belt_79.p3d";
			hiddenSelections[] = {"camo"};
			containerClass = "Supply90";
			mass = 7;
		};
	};
	
	class V_Simc_flak_M56 : V_Simc_flak {
		author = "089 + Justin + Jujurat";
		displayName = "[US] M1952A Vest/LCE";
		model = "\simc_uaf_67\suitpack_falk.p3d";
		hiddenSelections[] = {"camo", "band"};
		hiddenSelectionsTextures[] = {"\simc_uaf_67\data\gear_56_laat_co.paa", ""};
		
		class ItemInfo : VestItem {
			uniformModel = "\simc_uaf_67\vest_flak_belt.p3d";
			hiddenSelections[] = {"camo", "band"};
			containerClass = "Supply90";
			mass = 7;
		};
	};
	
	class V_Simc_flak_M56_bandoleer : V_Simc_flak {
		author = "089 + Justin + Jujurat";
		displayName = "[US] M1952A Vest/LCE/Bandoleer";
		model = "\simc_uaf_67\suitpack_falk.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\simc_uaf_67\data\gear_56_co.paa"};
		
		class ItemInfo : VestItem {
			uniformModel = "\simc_uaf_67\vest_flak_belt.p3d";
			hiddenSelections[] = {"camo"};
			containerClass = "Supply120";
			mass = 7;
		};
	};
	
	class V_Simc_flak_M56_open : V_Simc_flak_M56 {
		author = "089 + Justin + Jujurat";
		model = "\simc_uaf_67\suitpack_falk.p3d";
		hiddenSelections[] = {"camo", "band"};
		hiddenSelectionsTextures[] = {"\simc_uaf_67\data\gear_56_co.paa", ""};
		
		class ItemInfo : VestItem {
			uniformModel = "\simc_uaf_67\vest_flak_belt_open.p3d";
			hiddenSelections[] = {"camo", "band"};
			containerClass = "Supply90";
			mass = 7;
		};
	};
	
	class V_Simc_flak_M56_open_bandoleer : V_Simc_flak_M56_open {
		author = "089 + Justin + Jujurat";
		displayName = "[US] M1952A Vest/LCE/Bandoleer";
		model = "\simc_uaf_67\suitpack_falk.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\simc_uaf_67\data\gear_56_laat_co.paa"};
		
		class ItemInfo : VestItem {
			uniformModel = "\simc_uaf_67\vest_flak_belt_open.p3d";
			hiddenSelections[] = {"camo"};
			containerClass = "Supply120";
			mass = 7;
		};
	};
	
	class V_Simc_flak_M56_open_45 : V_Simc_flak_M56_open {
		author = "089 + Justin + Jujurat";
		displayName = "[US] M1952A Vest/LCE/Sidearm";
		model = "\simc_uaf_67\suitpack_falk.p3d";
		hiddenSelections[] = {"band"};
		hiddenSelectionsTextures[] = {""};
		
		class ItemInfo : VestItem {
			uniformModel = "\simc_uaf_67\vest_flak_belt_45.p3d";
			hiddenSelections[] = {"band"};
			containerClass = "Supply90";
			mass = 7;
		};
	};
	
	class V_Simc_flak_M56_open_45_bandoleer : V_Simc_flak_M56_open_45 {
		author = "089 + Justin + Jujurat";
		displayName = "[US] M1952A Vest/LCE/Sidearm";
		model = "\simc_uaf_67\suitpack_falk.p3d";
		hiddenSelections[] = {""};
		hiddenSelectionsTextures[] = {""};
		
		class ItemInfo : VestItem {
			uniformModel = "\simc_uaf_67\vest_flak_belt_45.p3d";
			hiddenSelections[] = {""};
			containerClass = "Supply120";
			mass = 7;
		};
	};
	
	class V_Simc_flak_M56_open_45_alt : V_Simc_flak_M56_open_45 {
		author = "089 + Justin + Jujurat";
		scope = protected;
		displayName = "[US] M1952A Vest/LCE/Sidearm";
		model = "\simc_uaf_67\suitpack_falk.p3d";
		hiddenSelections[] = {"nadeban"};
		hiddenSelectionsTextures[] = {""};
		
		class ItemInfo : VestItem {
			uniformModel = "\simc_uaf_67\vest_flak_belt_79.p3d";
			hiddenSelections[] = {"nadeban"};
			containerClass = "Supply120";
			mass = 7;
		};
	};
	
	class V_Simc_flak_M56_open_79 : V_Simc_flak_M56_open_45 {
		author = "089 + Justin + Jujurat";
		displayName = "[US] M1952A Vest/LCE/40mm";
		model = "\simc_uaf_67\suitpack_falk.p3d";
		hiddenSelections[] = {""};
		hiddenSelectionsTextures[] = {""};
		
		class ItemInfo : VestItem {
			uniformModel = "\simc_uaf_67\vest_flak_belt_79.p3d";
			hiddenSelections[] = {""};
			containerClass = "Supply120";
			mass = 7;
		};
	};
	
//	picture = "\simc_uaf_67_preview\icons\falk_od7_ca.paa";
	
	class V_Simc_flak_M69 : V_Simc_flak {
		author = "089";
		displayName = "[US] M1969 Vest";
		model = "\simc_uaf_67\suitpack_falk.p3d";
		picture = "\simc_uaf_67_preview\icons\sns_wip_ca.paa";
		hiddenSelections[] = {"camo", "band"};
		hiddenSelectionsTextures[] = {"", ""};
		
		class ItemInfo : VestItem {
			uniformModel = "\simc_uaf_67\vest_flak_69_belt.p3d";
			hiddenSelections[] = {"camo", "band"};
			containerClass = "Supply60";
			mass = 7;
		};
	};
	
	class V_Simc_flak_M69_bandoleer : V_Simc_flak_M69 {
		author = "089";
		displayName = "[US] M1969 Vest/Bandoleer";
		model = "\simc_uaf_67\suitpack_falk.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {""};
		
		class ItemInfo : VestItem {
			uniformModel = "\simc_uaf_67\vest_flak_69_belt.p3d";
			hiddenSelections[] = {"camo"};
			containerClass = "Supply90";
			mass = 7;
		};
	};
	
	class V_Simc_flak_M69_belt : V_Simc_flak_M69 {
		author = "089 + Justin + Jujurat";
		displayName = "[US] M1969 Vest/LCE";
		model = "\simc_uaf_67\suitpack_falk.p3d";
		hiddenSelections[] = {"camo", "band"};
		hiddenSelectionsTextures[] = {"\simc_uaf_67\data\gear_56_laat_co.paa", ""};
		
		class ItemInfo : VestItem {
			uniformModel = "\simc_uaf_67\vest_flak_69_belt.p3d";
			hiddenSelections[] = {"camo", "band"};
			containerClass = "Supply90";
			mass = 7;
		};
	};
	
	class V_Simc_flak_M69_bandoleer_belt : V_Simc_flak_M69_belt {
		author = "089 + Justin + Jujurat";
		displayName = "[US] M1969 Vest/LCE/Bandoleer";
		model = "\simc_uaf_67\suitpack_falk.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\simc_uaf_67\data\gear_56_co.paa"};
		
		class ItemInfo : VestItem {
			uniformModel = "\simc_uaf_67\vest_flak_69_belt.p3d";
			hiddenSelections[] = {"camo"};
			containerClass = "Supply120";
			mass = 7;
		};
	};
	
	class V_Simc_flak_M69_alt : V_Simc_flak_M69_belt {
		author = "089 + Justin + Jujurat";
		displayName = "[US] M1969 Vest/LCE";
		model = "\simc_uaf_67\suitpack_falk.p3d";
		hiddenSelections[] = {"camo", "band"};
		hiddenSelectionsTextures[] = {"\simc_uaf_67\data\gear_56_laat_co.paa", ""};
		
		class ItemInfo : VestItem {
			uniformModel = "\simc_uaf_67\vest_flak_69_alt.p3d";
			hiddenSelections[] = {"camo", "band"};
			containerClass = "Supply90";
			mass = 7;
		};
	};