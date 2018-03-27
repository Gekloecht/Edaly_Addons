class CfgPatches
{
	class Edaly_Projets_Template
	{
		units[] = {};
		weapons[] = {};
		requiredAddons[] = {"A3_Data_F","A3_Structures_F"};
		requiredVersion = 1.0;
		author = "KeviinSkyline";
	};
};
class CfgEditorCategories
{
	class EdCat_Edaly_Vegetation
	{
		displayName = "Edaly (Végétation)";
	};
	class EdCat_Edaly_Structure
	{
		displayName = "Edaly (Structure)";
	};
	class EdCat_Edaly_Infrastructure
	{
		displayName = "Edaly (Infrastructure)";
	};
	class EdCat_Edaly_Routes
	{
		displayName = "Edaly (Routes)";
	};
	class EdCat_Edaly_Panneaux
	{
		displayName = "Edaly (Panneaux)";
	};
};
class CfgEditorSubcategories
{
	class EdSubcat_Edaly_Culture
	{
		displayName = "Culture";
	};
	class EdSubcat_Edaly_Tree_Tanoa
	{
		displayName = "Arbre (Tanoa)";
	};	
	class EdSubcat_Edaly_Tree_Altis
	{
		displayName = "Arbre (Altis)";
	};
	class EdSubcat_Edaly_Arbuste_Tanoa
	{
		displayName = "Arbuste (Tanoa)";
	};
	class EdSubcat_Edaly_Arbuste_Altis
	{
		displayName = "Arbuste (Altis)";
	};
	class EdSubcat_Edaly_Structure_Sport
	{
		displayName = "Sport";
	};
	class EdSubcat_Edaly_Pont
	{
		displayName = "Pont";
	};
	class EdSubcat_Edaly_Decals
	{
		displayName = "Decals";
	};
	class EdSubcat_Edaly_Panneaux_Routiers
	{
		displayName = "Panneaux Routiers";
	};
};
class CfgVehicles
{
	class Static;
	#include "A3_Tree_Culture_EXP.hpp"
	#include "A3_Tree_EXP.hpp"
	#include "A3_Tree_Altis.hpp"
	#include "A3_Arbuste_EXP.hpp"
	#include "A3_Arbuste_Altis.hpp"
	#include "A3_Structure.hpp"
	#include "A3_Infrastructure_Pont_EXP.hpp"
	#include "A3_Roads_Decals.hpp"
	#include "A3_Panneau_EXP.hpp"
};