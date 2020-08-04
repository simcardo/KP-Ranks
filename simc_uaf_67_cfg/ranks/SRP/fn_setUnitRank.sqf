/*
	Author: 
		Karel Moricky, optimised by Killzone_Kid

	Description:
		Sets unit insignia (e.g., shoulder insignia on soldiers)

	Parameter(s):
		0: OBJECT - unit
		1: STRING - CfgUnitInsignia class. Use an empty string to remove current insignia.

	Returns:
		BOOL - true if insignia was set
*/

/// --- validate input
#include "paramsCheck.inc"
#define arr [objNull,""]
paramsCheck(_this,isEqualTypeParams,arr)

#define DEFAULT_MATERIAL "\a3\data_f\default.rvmat"
#define DEFAULT_TEXTURE "#(rgb,8,8,3)color(0,0,0,0)"

params ["_unit", "_class"];

// --- load texture from config.cpp or description.ext
private _cfgRanks = [["CfgUnitRanks", _class], configNull] call BIS_fnc_loadClass;

// --- check if Rank exists
if (configName _cfgRanks != _class) exitWith 
{
	[
		"'%1' is not found in CfgUnitRanks. Available classes: %2", 
		_class, 
		("true" configClasses (configFile >> "CfgUnitRanks") apply {configName _x}) 
		+ 
		("true" configClasses (missionConfigFile >> "CfgUnitRanks") apply {configName _x})
		+
		("true" configClasses (campaignConfigFile >> "CfgUnitRanks") apply {configName _x})
	] 
	call BIS_fnc_error; 
	false
};

private _set = false;

// --- find Rank index in hidden textures
{
	if (_x == "rank") exitWith 
	{ 	
		isNil // --- make it safe in scheduled
		{
			// --- set Rank if not set
			if (_unit call SRP_fnc_getUnitRank != _class) then
			{
				_unit setVariable ["SRP_fnc_setUnitRanks_class", [_class, nil] select (_class isEqualTo ""), true];			
				_unit setObjectMaterialGlobal [_forEachIndex, getText (_cfgRanks >> "material") call {[_this, DEFAULT_MATERIAL] select (_this isEqualTo "")}];
				_unit setObjectTextureGlobal [_forEachIndex, getText (_cfgRanks >> "texture") call {[_this, DEFAULT_TEXTURE] select (_this isEqualTo "")}];
				_set = true;
			};
		};
	};
} 
forEach getArray (configFile >> "CfgVehicles" >> getText (configFile >> "CfgWeapons" >> uniform _unit >> "ItemInfo" >> "uniformClass") >> "hiddenSelections");

_set 