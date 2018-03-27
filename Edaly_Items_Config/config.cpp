class CfgPatches
{
	class Edaly_Items_Config
	{
		author = "Edaly Teams";
		url = "https://www.edaly.fr/";
		requiredAddons[] = {"A3_Weapons_F","Edaly_Items_Assets_1"};
		requiredVersion = 0;
		units[] = {};
		weapons[] = {};
	};
};
class CfgMagazines
{
	class CA_Magazine;
	class Edaly_Items_Base_F: CA_Magazine
	{
		author = "Edaly Teams";
		scope = 1;
		value = 1;
		displayName = "Edaly Items Base";
		descriptionShort = "Non Disponible";
		model = "\A3\weapons_F\ammo\mag_univ.p3d";
		picture = "";
		modelSpecial = "";
		useAction = 0;
		useActionTitle = "";
		reloadAction = "";
		ammo = "";
		count = 1;
		type = 256;
		initSpeed = 900;
		selectionFireAnim = "zasleh";
		nameSound = "magazine";
		maxLeadSpeed = 0;
		weaponpoolavailable = 1;
		mass = 5000;
	};
	class Edaly_Items_Water_Bottle_Empty_01_F: Edaly_Items_Base_F
	{
		scope = 2;
		displayName = "Bouteille d'eau vide";
		model = "\Edaly_Items_Assets_1\WaterBottle_01_empty_F.p3d";
		picture = "\Edaly_Items_Assets_1\UI\Edaly_Items_Water_Bottle_Empty_01_F.paa";
		descriptionShort = "Pensez à recycler cette bouteille";
		mass = 1;
	};
	class Edaly_Items_Water_Bottle_Full_01_F: Edaly_Items_Base_F
	{
		scope = 2;
		displayName = "Bouteille d'eau";
		model = "\Edaly_Items_Assets_1\WaterBottle_01_full_F.p3d";
		picture = "\Edaly_Items_Assets_1\UI\Edaly_Items_Water_Bottle_Full_01_F.paa";
		descriptionShort = "L'eau rare et bienfaisante";
		mass = 2;
	};
	class Edaly_Items_CerealsBox_01_F: Edaly_Items_Base_F
	{
		scope = 2;
		displayName = "Boîte de céréales";
		model = "\Edaly_Items_Assets_1\CerealsBox_F.p3d";
		picture = "\Edaly_Items_Assets_1\UI\Edaly_Items_CerealsBox_01_F.paa";
		descriptionShort = "Céréales pour diabétiques et recette diététique";
		mass = 3;
	};
	class Edaly_Items_CarBattery_01_F: Edaly_Items_Base_F
	{
		scope = 2;
		displayName = "Batterie de voiture";
		model = "a3\structures_f_bootcamp\items\electronics\carbattery_02_f.p3d";
		picture = "\Edaly_Items_Assets_1\UI\Edaly_Items_CarBattery_01_F.paa";
		descriptionShort = "";
		mass = 3;
	};
	class Edaly_Items_TruckBattery_01_F: Edaly_Items_Base_F
	{
		scope = 2;
		displayName = "Batterie de camion";
		model = "a3\structures_f_bootcamp\items\electronics\carbattery_01_f.p3d";
		picture = "\Edaly_Items_Assets_1\UI\Edaly_Items_TruckBattery_01_F.paa";
		descriptionShort = "";
		mass = 3;
	};
	class Edaly_Items_Pile_01_F: Edaly_Items_Base_F
	{
		scope = 2;
		displayName = "Pile";
		model = "a3\structures_f_epa\items\electronics\battery_f.p3d";
		picture = "\Edaly_Items_Assets_1\UI\Edaly_Items_Pile_01_F.paa";
		descriptionShort = "";
		mass = 3;
	};
	class Edaly_Items_AmmoBox_01_F: Edaly_Items_Base_F
	{
		scope = 2;
		displayName = "Caisse de munitions";
		model = "a3\structures_f_epb\items\military\ammobox_rounds_f.p3d";
		picture = "\Edaly_Items_Assets_1\UI\Edaly_Items_AmmoBox_01_F.paa";
		descriptionShort = "";
		mass = 3;
	};
	class Edaly_Items_NotePad_01_F: Edaly_Items_Base_F
	{
		scope = 2;
		displayName = "Bloc-notes";
		model = "a3\structures_f\items\documents\notepad_f.p3d";
		picture = "\Edaly_Items_Assets_1\UI\Edaly_Items_NotePad_01_F.paa";
		descriptionShort = "";
		mass = 3;
	};
	class Edaly_Items_File_01_F: Edaly_Items_Base_F
	{
		scope = 2;
		displayName = "Documents";
		model = "a3\structures_f\items\documents\file1_f.p3d";
		picture = "\Edaly_Items_Assets_1\UI\Edaly_Items_File_01_F.paa";
		descriptionShort = "";
		mass = 3;
	};
	class Edaly_Items_File_02_F: Edaly_Items_Base_F
	{
		scope = 2;
		displayName = "Fichier recherche";
		model = "a3\structures_f\items\documents\file2_f.p3d";
		picture = "\Edaly_Items_Assets_1\UI\Edaly_Items_File_02_F.paa";
		descriptionShort = "";
		mass = 3;
	};
	class Edaly_Items_FilePicture_01_F: Edaly_Items_Base_F
	{
		scope = 2;
		displayName = "Fichier photos";
		model = "a3\structures_f\items\documents\filephotos_f.p3d";
		picture = "\Edaly_Items_Assets_1\UI\Edaly_Items_FilePicture_01_F.paa";
		descriptionShort = "";
		mass = 3;
	};
	class Edaly_Items_BakedBeans_01_F: Edaly_Items_Base_F
	{
		scope = 2;
		displayName = "Fayots (conserve)";
		model = "a3\structures_f_epa\items\food\bakedbeans_f.p3d";
		picture = "\Edaly_Items_Assets_1\UI\Edaly_Items_BakedBeans_01_F.paa";
		descriptionShort = "";
		mass = 3;
	};
	class Edaly_Items_Gourde_Full_01_F: Edaly_Items_Base_F
	{
		scope = 2;
		displayName = "Gourde (pleine)";
		model = "a3\structures_f_epa\items\food\canteen_f.p3d";
		picture = "\Edaly_Items_Assets_1\UI\Edaly_Items_Gourde_Full_01_F.paa";
		descriptionShort = "";
		mass = 3;
	};
	class Edaly_Items_Gourde_Empty_01_F: Edaly_Items_Base_F
	{
		scope = 2;
		displayName = "Gourde (vide)";
		model = "a3\structures_f_epa\items\food\canteen_f.p3d";
		picture = "\Edaly_Items_Assets_1\UI\Edaly_Items_Gourde_Empty_01_F.paa";
		descriptionShort = "";
		mass = 3;
	};
	class Edaly_Items_Orange_01_F: Edaly_Items_Base_F
	{
		scope = 2;
		displayName = "Orange";
		model = "a3\props_f_orange\humanitarian\supplies\orange_01_f.p3d";
		picture = "\Edaly_Items_Assets_1\UI\Edaly_Items_Orange_01_F.paa";
		descriptionShort = "";
		mass = 3;
	};
	class Edaly_Items_Ricebox_01_F: Edaly_Items_Base_F
	{
		scope = 2;
		displayName = "Boîte de riz";
		model = "a3\structures_f_epa\items\food\ricebox_f.p3d";
		picture = "\Edaly_Items_Assets_1\UI\Edaly_Items_Ricebox_01_F.paa";
		descriptionShort = "";
		mass = 3;
	};
	class Edaly_Items_CanisterFuel_01_F: Edaly_Items_Base_F
	{
		scope = 2;
		displayName = "Jerrican";
		model = "a3\structures_f\items\vessels\canisterfuel_f.p3d";
		picture = "\Edaly_Items_Assets_1\UI\Edaly_Items_CanisterFuel_01_F.paa";
		descriptionShort = "";
		mass = 3;
	};
	class Edaly_Items_CanOpener_01_F: Edaly_Items_Base_F
	{
		scope = 2;
		displayName = "Ouvre-boîte";
		model = "a3\structures_f_epa\items\tools\canopener_f.p3d";
		picture = "\Edaly_Items_Assets_1\UI\Edaly_Items_CanOpener_01_F.paa";
		descriptionShort = "";
		mass = 3;
	};
	class Edaly_Items_DuctTape_01_F: Edaly_Items_Base_F ///////////////////////////////////////////////////////
	{
		scope = 2;
		displayName = "Ruban adhésif";
		model = "a3\structures_f_epa\items\tools\ducttape_f.p3d";
		picture = "\Edaly_Items_Assets_1\UI\Edaly_Items_CerealsBox_01_F.paa";
		descriptionShort = "";
		mass = 3;
	};
	class Edaly_Items_ScrewDriver_01_F: Edaly_Items_Base_F
	{
		scope = 2;
		displayName = "Tournevis";
		model = "a3\structures_f\items\tools\screwdriver_v2_f.p3d";
		picture = "\Edaly_Items_Assets_1\UI\Edaly_Items_CerealsBox_01_F.paa";
		descriptionShort = "";
		mass = 3;
	};
	class Edaly_Items_PainKillers_01_F: Edaly_Items_Base_F
	{
		scope = 2;
		displayName = "Analgésique";
		model = "a3\structures_f_epa\items\medical\painkillers_f.p3d";
		picture = "\Edaly_Items_Assets_1\UI\Edaly_Items_CerealsBox_01_F.paa";
		descriptionShort = "";
		mass = 3;
	};
	class Edaly_Items_Antibiotic_01_F: Edaly_Items_Base_F
	{
		scope = 2;
		displayName = "Antibiotiques";
		model = "a3\structures_f_epa\items\medical\antibiotic_f.p3d";
		picture = "\Edaly_Items_Assets_1\UI\Edaly_Items_CerealsBox_01_F.paa";
		descriptionShort = "";
		mass = 3;
	};
	class Edaly_Items_Bandage_01_F: Edaly_Items_Base_F
	{
		scope = 2;
		displayName = "Bandages";
		model = "a3\structures_f_epa\items\medical\bandage_f.p3d";
		picture = "\Edaly_Items_Assets_1\UI\Edaly_Items_CerealsBox_01_F.paa";
		descriptionShort = "";
		mass = 3;
	};
	class Edaly_Items_Heatpack_01_F: Edaly_Items_Base_F
	{
		scope = 2;
		displayName = "Couverture de survie";
		model = "a3\structures_f_epa\items\medical\heatpack_f.p3d";
		picture = "\Edaly_Items_Assets_1\UI\Edaly_Items_CerealsBox_01_F.paa";
		descriptionShort = "";
		mass = 3;
	};
	class Edaly_Items_Pansements_01_F: Edaly_Items_Base_F
	{
		scope = 2;
		displayName = "Pansements";
		model = "a3\Props_F_Orange\Humanitarian\Garbage\MedicalGarbage_01_Bandage_F";
		picture = "\Edaly_Items_Assets_1\UI\Edaly_Items_CerealsBox_01_F.paa";
		descriptionShort = "";
		mass = 3;
	};	
	class Edaly_Items_FirstAidKit_01_F: Edaly_Items_Base_F
	{
		scope = 2;
		displayName = "Kit de premiers secours";
		model = "a3\Props_F_Orange\Humanitarian\Garbage\MedicalGarbage_01_FirstAidKit_F";
		picture = "\Edaly_Items_Assets_1\UI\Edaly_Items_CerealsBox_01_F.paa";
		descriptionShort = "";
		mass = 3;
	};
	class Edaly_Items_FirstAidKit_02_F: Edaly_Items_Base_F
	{
		scope = 2;
		displayName = "Trousse de secours";
		model = "a3\props_f_orange\humanitarian\camps\firstaidkit_01_closed_f.p3d";
		picture = "\Edaly_Items_Assets_1\UI\Edaly_Items_CerealsBox_01_F.paa";
		descriptionShort = "";
		mass = 3;
	};
	class Edaly_Items_Injector_01_F: Edaly_Items_Base_F
	{
		scope = 2;
		displayName = "Seringues";
		model = "a3\Props_F_Orange\Humanitarian\Garbage\MedicalGarbage_01_Injector_F";
		picture = "\Edaly_Items_Assets_1\UI\Edaly_Items_CerealsBox_01_F.paa";
		descriptionShort = "";
		mass = 3;
	};
	class Edaly_Items_Defibrillator_01_F: Edaly_Items_Base_F
	{
		scope = 2;
		displayName = "Défibrilateur";
		model = "\A3\Structures_F_EPA\Items\Medical\Defibrillator_F.p3d";
		picture = "\Edaly_Items_Assets_1\UI\Edaly_Items_CerealsBox_01_F.paa";
		descriptionShort = "";
		mass = 3;
	};	
	class Edaly_Items_VitaminBottle_01_F: Edaly_Items_Base_F
	{
		scope = 2;
		displayName = "Flacon de vitamines";
		model = "a3\structures_f_epa\items\medical\vitaminbottle_f.p3d";
		picture = "\Edaly_Items_Assets_1\UI\Edaly_Items_CerealsBox_01_F.paa";
		descriptionShort = "";
		mass = 3;
	};
	class Edaly_Items_BloodBag_01_F: Edaly_Items_Base_F
	{
		scope = 2;
		displayName = "Poche de sang";
		model = "a3\structures_f_epa\items\medical\bloodbag_f.p3d";
		picture = "\Edaly_Items_Assets_1\UI\Edaly_Items_CerealsBox_01_F.paa";
		descriptionShort = "";
		mass = 3;
	};
	class Edaly_Items_IntravenBag_full_01_F: Edaly_Items_Base_F
	{
		scope = 2;
		displayName = "Poche de transfusion (pleine)";
		model = "a3\props_f_orange\humanitarian\camps\intravenbag_01_full_f.p3d";
		picture = "\Edaly_Items_Assets_1\UI\Edaly_Items_CerealsBox_01_F.paa";
		descriptionShort = "";
		mass = 3;
	};
	class Edaly_Items_IntravenBag_empty_01_F: Edaly_Items_Base_F
	{
		scope = 2;
		displayName = "Poche de transfusion (vide)";
		model = "a3\props_f_orange\humanitarian\camps\intravenbag_01_empty_f.p3d";
		picture = "\Edaly_Items_Assets_1\UI\Edaly_Items_CerealsBox_01_F.paa";
		descriptionShort = "";
		mass = 3;
	};
	class Edaly_Items_BodyBag_01_F: Edaly_Items_Base_F
	{
		scope = 2;
		displayName = "Sac mortuaire";
		model = "a3\props_f_orange\humanitarian\camps\bodybag_01_folded_f.p3d";
		picture = "\Edaly_Items_Assets_1\UI\Edaly_Items_CerealsBox_01_F.paa";
		descriptionShort = "";
		mass = 3;
	};
	class Edaly_Items_Stethoscope_01_F: Edaly_Items_Base_F
	{
		scope = 2;
		displayName = "Stéthoscope";
		model = "a3\props_f_orange\humanitarian\camps\stethoscope_01_f.p3d";
		picture = "\Edaly_Items_Assets_1\UI\Edaly_Items_CerealsBox_01_F.paa";
		descriptionShort = "";
		mass = 3;
	};
	class Edaly_Items_waterpurificationtablets_01_F: Edaly_Items_Base_F
	{
		scope = 2;
		displayName = "Tablettes de potabilisation";
		model = "a3\structures_f_epa\items\medical\waterpurificationtablets_f.p3d";
		picture = "\Edaly_Items_Assets_1\UI\Edaly_Items_CerealsBox_01_F.paa";
		descriptionShort = "";
		mass = 3;
	};
};