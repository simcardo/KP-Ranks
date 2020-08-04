/*
	Name: SRP_fnc_setUnitRankPatch

	Author: 654wak654
	
	Version: 1.2

	Description: Internal function, sets given unit's appropiate rank patch
	
	Parameter(s): 0: OBJ - The unit (default: objNull)
		
	Returns: BOOL- true if patch was set
	
 	Example: [player] call SRP_fnc_setUnitRankPatch
*/
private ["_unit", "_rank", "_ranks", "_ap", "_faction", "_patch", "_return"];
_unit = param [0, objNull, [objNull]];
if (!(_unit isKindOf "Man") || (SRP_PO && !isPlayer _unit)) exitWith {
	if ("" != _unit call SRP_fnc_getUnitRank) then {[_unit, "EMPTY_SRP"] call SRP_fnc_setUnitRank};
	false;
};

_rank = rank _unit;
if (SRP_URL && !(squadParams _unit isEqualTo [])) then {
	_rank = toUpper (squadParams _unit select 1 select 4);
	_ranks = ["PRIVATE", "CORPORAL", "SERGEANT", "LIEUTENANT", "CAPTAIN", "MAJOR", "COLONEL"];	
	if !(_rank in _ranks) then {_rank = rank _unit};
};

_ap = 0;
switch (side _unit) do {
	case west: {_ap = SRP_AP select 0};
	case east: {_ap = SRP_AP select 1};
	case independent: {_ap = SRP_AP select 2};
};

_faction = 0;
switch (faction _unit) do {
	case Simc_UA_65: {_faction = SRP_faction select 0};
	case Simc_UA_67: {_faction = SRP_faction select 1};
	case Simc_UA_69: {_faction = SRP_faction select 2};
};

_patch = format ["%1_SIMC_%2", _rank, _ap];

_return = [_unit, _patch] call SRP_fnc_setUnitRank;
_return;