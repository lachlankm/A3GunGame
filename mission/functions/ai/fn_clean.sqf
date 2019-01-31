/*──────────────────────────────────────────────────────┐
│   Author: Connor                                      │
│   Steam:  https://steamcommunity.com/id/_connor       │
│   Github: https://github.com/ConnorAU                 │
│                                                       │
│   Please do not modify or remove this comment block   │
└──────────────────────────────────────────────────────*/

#define GG_ai_fnc_clean

#include "..\defines.inc"

{
	if (!isPlayer _x) then {
		deleteVehicle _x;
	};
} foreach allUnits;
{
	if ((GVAR(_x,"GG_s_group_AI",false)) && {count units _x == 0}) then {
		deleteGroup _x;
	};
} foreach allGroups;