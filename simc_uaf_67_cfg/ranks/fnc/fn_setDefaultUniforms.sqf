/*
    KPR_fnc_setDefaultUniforms

    File: fn_setDefaultUniforms.sqf
    Author: Wyqer - https://github.com/KillahPotatoes
    Date: 2018-07-09
    Last Update: 2018-07-13
    License: GNU General Public License v3.0 - https://www.gnu.org/licenses/gpl-3.0.html

    Description:
    Applies the default list of uniforms which are tested and working.

    Parameter(s):
    NONE

    Returns:
    BOOL
*/

if (!isServer) exitWith {};

KPR_uniforms = [
    // Format:
    // ["Uniform Classname" as string, nation/army as int]
    // Nations:
    // 0 = US Army (
    // 1 = US Army (Subdued)
    // 2 = US Army (Collar)
	
	//US Army 65
    ["U_Simc_OG107_mk1", 0],
    ["U_Simc_TCU_mk1", 0],
	
	//US Army 67
    ["U_Simc_OG107_mk3", 1],
	
	//US Army 69
    ["U_Simc_TCU_mk3", 2],
    ["U_Simc_TCU_mk3_erdl_low", 2]
];

true
