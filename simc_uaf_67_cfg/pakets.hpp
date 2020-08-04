		
	class B_simc_US_Bandoleer_556_1 : B_simc_pack_56 {
		scope = public;		
		displayName = "Bandoleer";
		author = "Smicradeu";
		model = "\simc_uaf_67\bandolier_2.p3d";
		picture = "\simc_uaf_67_preview\icons\bandoiler_ca.paa"; 
		hiddenSelections[] = {"blow"};
		hiddenSelectionsTextures[] = {""};
		descriptionShort = "M1 Ammunition Bandoleer";	
		maximumLoad = 60;
	};
	
	class B_simc_US_Bandoleer_556_2 : B_simc_US_Bandoleer_556_1 {
		scope = 1;		
		author = "Smicradeu";
		model = "\simc_uaf_67\bandolier_2.p3d";
		hiddenSelections[] = {"bleft"};
		hiddenSelectionsTextures[] = {""};
		descriptionShort = "M1 Ammunition Bandoleer";	
	};
	
	class B_simc_US_Bandoleer_556_3 : B_simc_US_Bandoleer_556_1 {
		scope = public;		
		author = "Smicradeu";
		model = "\simc_uaf_67\bandolier_3.p3d";
		hiddenSelections[] = {"bleft", "blow"};
		hiddenSelectionsTextures[] = {""};
		descriptionShort = "M1 Ammunition Bandoleer";	
	};
	
	class B_simc_US_Bandoleer_556_doppel_1 : B_simc_US_Bandoleer_556_1 {
		scope = public;		
		displayName = "Bandoleer (2x)";
		author = "Smicradeu";
		model = "\simc_uaf_67\bandolier_3.p3d";
		hiddenSelections[] = {"bleft"};
		hiddenSelectionsTextures[] = {""};
		descriptionShort = "M1 Ammunition Bandoleer (duplet)";	
		maximumLoad = 100;
	};
	
	class B_simc_US_Bandoleer_556_doppel_2 : B_simc_US_Bandoleer_556_doppel_1 {
		scope = public;		
		author = "Smicradeu";
		model = "\simc_uaf_67\bandolier_3.p3d";
		hiddenSelections[] = {"blow"};
		hiddenSelectionsTextures[] = {""};
		descriptionShort = "M1 Ammunition Bandoleer (duplet)";
	};
	
	class B_simc_US_Bandoleer_556_triplet : B_simc_US_Bandoleer_556_doppel_1 {
		scope = 1;		
		author = "Smicradeu";
		displayName = "Bandoleer (3x)";
		model = "\simc_uaf_67\bandolier_3.p3d";
		hiddenSelections[] = {""};
		hiddenSelectionsTextures[] = {""};
		descriptionShort = "M1 Ammunition Bandoleer (triplet)";	
		maximumLoad = 140;
	};
	
	class B_simc_US_Bandoleer_556_fore : B_simc_US_Bandoleer_556_1 {
		scope = public;		
		author = "Smicradeu";
		model = "\simc_uaf_67\bandolier_fore.p3d";
		hiddenSelections[] = {"lows"};
		hiddenSelectionsTextures[] = {""};
		descriptionShort = "M1 Ammunition Bandoleer";	
	};
	
	class B_simc_US_Bandoleer_4cm : B_simc_pack_56 {
		scope = public;		
		displayName = "Bandoleer (40mm)";
		author = "Smicradeu";
		model = "\simc_uaf_67\bandolier_79.p3d";
		picture = "\simc_uaf_67_preview\icons\bandoiler_ca.paa"; 
		hiddenSelections[] = {""};
		hiddenSelectionsTextures[] = {""};
		descriptionShort = "40mm Ammunition Bandoleer";	
		maximumLoad = 60;
	};
	
	class B_simc_US_asspack : B_simc_pack_56 {
		scope = public;		
		displayName = "[US]M1961 Buttpack";
		author = "Smicradeu";
		model = "\simc_uaf_67\pack_ass.p3d";
		picture = "\simc_uaf_67_preview\icons\pack_ass_ca.paa"; 
		hiddenSelections[] = {"botol", "golok", "roll"};
		hiddenSelectionsTextures[] = {""};
		descriptionShort = "M1961 Buttpack";	
		maximumLoad = 70;
	};
	
	class B_simc_US_asspack_roll : B_simc_US_asspack {
		scope = public;		
		displayName = "[US]M1961 Buttpack";
		author = "Smicradeu";
		hiddenSelections[] = {"botol", "golok"};
		hiddenSelectionsTextures[] = {""};
		descriptionShort = "M1961 Buttpack";	
		maximumLoad = 70;
	};
	
	class B_simc_US_asspack_botol : B_simc_US_asspack {
		scope = public;		
		displayName = "[US]M1961 Buttpack/canteen";
		author = "Smicradeu";
		hiddenSelections[] = {"golok"};
		hiddenSelectionsTextures[] = {""};
		descriptionShort = "M1961 Buttpack";	
		maximumLoad = 70;
	};
	
	class B_simc_US_asspack_machete : B_simc_US_asspack {
		scope = public;		
		displayName = "[US]M1961 Buttpack/Machete";
		author = "Smicradeu";
		hiddenSelections[] = {"botol", "roll"};
		hiddenSelectionsTextures[] = {""};
		descriptionShort = "M1961 Buttpack";	
		maximumLoad = 70;
	};
	
	class B_simc_US_asspack_machete_roll : B_simc_US_asspack {
		scope = public;		
		displayName = "[US]M1961 Buttpack/Machete";
		author = "Smicradeu";
		hiddenSelections[] = {"botol"};
		hiddenSelectionsTextures[] = {""};
		descriptionShort = "M1961 Buttpack";	
		maximumLoad = 70;
	};
	
	class B_simc_US_asspack_full : B_simc_US_asspack {
		scope = public;		
		displayName = "[US]M1961 Buttpack/Machete/Canteen";
		author = "Smicradeu";
		hiddenSelections[] = {"roll"};
		hiddenSelectionsTextures[] = {""};
		descriptionShort = "M1961 Buttpack";	
		maximumLoad = 70;
	};
	
	class B_simc_US_asspack_full_roll : B_simc_US_asspack {
		scope = public;		
		displayName = "[US]M1961 Buttpack/Machete/Canteen";
		author = "Smicradeu";
		hiddenSelections[] = {""};
		hiddenSelectionsTextures[] = {""};
		descriptionShort = "M1961 Buttpack";	
		maximumLoad = 70;
	};
	
	//Luftwaffe
	
	class B_simc_pack_frem_1 : B_simc_pack_56 {
		displayName = "[US] Lightweight Rucksack";
		author = "Smicradeu";
		scope = public;
		descriptionShort = "Rucksack, Lightweight, Framed, 1962";	
		model = "\simc_uaf_67\pack_LW_1.p3d";
		hiddenSelections[] = {"roll", "smonk"};
		hiddenSelectionsTextures[] = {""};
		picture = "\simc_uaf_67_preview\icons\pack_frem_ca.paa";	
		maximumLoad = 180;
	};	
	
	class B_simc_pack_frem_1_alt : B_simc_pack_frem_1 {
		author = "Smicradeu";
		descriptionShort = "Rucksack, Lightweight, Framed, 1962";	
		hiddenSelections[] = {"sekop"};	
		maximumLoad = 180;
	};	
	
	class B_simc_pack_frem_2 : B_simc_pack_frem_1 {
		author = "Smicradeu";
		descriptionShort = "Rucksack, Lightweight, Framed, 1962";	
		model = "\simc_uaf_67\pack_LW_2.p3d";
		hiddenSelections[] = {"smonk", "roll"};	
		maximumLoad = 180;
	};	
	
	class B_simc_pack_frem_2_alt : B_simc_pack_frem_2 {
		author = "Smicradeu";
		descriptionShort = "Rucksack, Lightweight, Framed, 1962";	
		hiddenSelections[] = {"golok"};	
		maximumLoad = 180;
	};	
	
	class B_simc_pack_frem_3 : B_simc_pack_frem_1 {
		author = "Smicradeu";
		displayName = "[US] Lightweight Rucksack";
		descriptionShort = "Rucksack, Lightweight, Framed, 1962";	
		model = "\simc_uaf_67\pack_LW_3.p3d";
		hiddenSelections[] = {"extras", "band", "roll"};	
		maximumLoad = 180;
	};	
	
	class B_simc_pack_frem_3_a : B_simc_pack_frem_3 {
		author = "Smicradeu";
		displayName = "[US] Lightweight Rucksack (Bandoleer)";
		descriptionShort = "Rucksack, Lightweight, Framed, 1962";	
		hiddenSelections[] = {"extras", "smonk"};	
		maximumLoad = 180;
	};	
	
	class B_simc_pack_frem_3_b : B_simc_pack_frem_3 {
		author = "Smicradeu";
		displayName = "[US] Lightweight Rucksack (Bandoleer)";
		descriptionShort = "Rucksack, Lightweight, Framed, 1962";	
		hiddenSelections[] = {""};	
		maximumLoad = 180;
	};	
	
	class B_simc_pack_frem_4 : B_simc_pack_frem_1 {
		author = "Smicradeu";
		displayName = "[US] Lightweight Rucksack (40mm)";
		descriptionShort = "Rucksack, Lightweight, Framed, 1962";	
		model = "\simc_uaf_67\pack_LW_4.p3d";
		hiddenSelections[] = {""};	
		maximumLoad = 180;
	};	
	
	class B_simc_pack_frem_5 : B_simc_pack_frem_1 {
		author = "Smicradeu";
		descriptionShort = "Rucksack, Lightweight, Framed, 1962";	
		model = "\simc_uaf_67\pack_LW_5.p3d";
		hiddenSelections[] = {""};	
		maximumLoad = 180;
	};	
	
	class B_simc_pack_frem_6 : B_simc_pack_frem_1 {
		author = "Smicradeu";
		displayName = "[US] Lightweight Rucksack (Bandoleer)";
		descriptionShort = "Rucksack, Lightweight, Framed, 1962";	
		model = "\simc_uaf_67\pack_LW_6.p3d";
		hiddenSelections[] = {""};	
		maximumLoad = 180;
	};	
	
	class B_simc_pack_frem_6_alt : B_simc_pack_frem_6 {
		author = "Smicradeu";
		displayName = "[US] Lightweight Rucksack";
		descriptionShort = "Rucksack, Lightweight, Framed, 1962";	
		hiddenSelections[] = {"extras"};	
		maximumLoad = 180;
	};	
