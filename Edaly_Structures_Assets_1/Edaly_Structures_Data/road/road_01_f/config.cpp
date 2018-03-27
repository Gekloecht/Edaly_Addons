class CfgPatches
{
	class Edaly_Structures
	{
		requiredAddons[] = {};
		requiredVersion = 0;
		units[] = {};
		weapons[] = {};
	};
};
class CfgEditorCategories
{
	class EdCat_Edaly_Structure
	{
		displayName = "Edaly (Structure)";
	};
};
class CfgEditorSubcategories
{
	class EdSubcat_Edaly_Sol
	{
		displayName = "Sol";
	};
};
class CfgVehicles
{
	class Static;
	class Land_Edaly_Road_01_4x4_F: Static
	{
		author = "Edaly - Hugo";
		editorPreview = "";
		scope = 2;
		displayName = "Sol pavés (1) 4x4";
		model = "Edaly_Structures_Assets_1\Edaly_Structures_Data\road\road_01_f\Land_Edaly_Road_01_4x4_F.p3d";
		editorCategory = "EdCat_Edaly_Structure";
		editorSubcategory = "EdSubcat_Edaly_Sol";
	};
	
	class Land_Edaly_Road_01_8x8_F: Static
	{
		author = "Edaly - Hugo";
		editorPreview = "";
		scope = 2;
		displayName = "Sol pavés (1) 8x8";
		model = "Edaly_Structures_Assets_1\Edaly_Structures_Data\road\road_01_f\Land_Edaly_Road_01_8x8_F.p3d";
		editorCategory = "EdCat_Edaly_Structure";
		editorSubcategory = "EdSubcat_Edaly_Sol";
	};
	
	class Land_Edaly_Road_01_16x16_F: Static
	{
		author = "Edaly - Hugo";
		editorPreview = "";
		scope = 2;
		displayName = "Sol pavés (1) 16x16";
		model = "Edaly_Structures_Assets_1\Edaly_Structures_Data\road\road_01_f\Land_Edaly_Road_01_16x16_F.p3d";
		editorCategory = "EdCat_Edaly_Structure";
		editorSubcategory = "EdSubcat_Edaly_Sol";
	};
};
