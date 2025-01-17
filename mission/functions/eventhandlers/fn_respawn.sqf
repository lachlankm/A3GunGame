/*──────────────────────────────────────────────────────┐
│   Author: Connor                                      │
│   Steam:  https://steamcommunity.com/id/_connor       │
│   Github: https://github.com/ConnorAU                 │
│                                                       │
│   Please do not modify or remove this comment block   │
└──────────────────────────────────────────────────────*/

#include "..\defines.inc"

params ["_unit","_corpse"];

_unit disableConversation true;
_unit enableStamina false;
_unit setCustomAimCoef 0;
_unit switchCamera GG_c_cameraView;

_unit setVariable ["GG_c_kills",GG_c_kills,true];
_unit setVariable ["GG_c_deaths",GG_c_deaths,true];
_unit setVariable ["GG_c_score",GG_c_score,true];
_unit setVariable ["GG_c_name",name _unit,true];

deleteVehicle _corpse;

[] call GG_system_fnc_applyLoadout;
[] call GG_system_fnc_applyWeapon;
[] spawn GG_system_fnc_moveToSpawn;