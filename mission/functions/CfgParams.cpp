/*──────────────────────────────────────────────────────┐
│   Author: Connor                                      │
│   Steam:  https://steamcommunity.com/id/_connor       │
│   Github: https://github.com/ConnorAU                 │
│                                                       │
│   Please do not modify or remove this comment block   │
└──────────────────────────────────────────────────────*/

#define SPACER(n) class spacer##n {text=" ";texts[]={" "};values[]={0};};

class Params {
    class WeaponPool {
        title = "Select which mod the weapon pool will be created from";
        texts[] = {
/*    0 */  "Auto-Detect (By map)",
/*    1 */  "Vanilla",
/*    2 */  "Vanilla (DLC)",
/*   10 */  "3CB BAF",
/*   40 */  "CUP",
/*   20 */  "IFA3",
/*   50 */  "OPTRE",
/*   30 */  "RHS (AFRF, USAF, SAF & GREF)"
        };
        values[] = {0,1,2,10,40,20,50,30};
        default = 0;
    };
    class WeaponType {
        title = "Select which weapon type the pool will be comprised of";
        texts[] = {"All","SMG/Shotguns","Rifles","Snipers","Machine Guns","Pistols"};
        values[] = {0,1,2,3,4,5};
        default = 0;
    };
    class Loadout {
        title = "Select which mod the player loadout will be created from";
        texts[] = {
/*    0 */  "Auto-Detect (By map)",
/*    1 */  "Vanilla",
/*    2 */  "Vanilla (DLC)",
/*   10 */  "3CB BAF (Desert)",
/*   11 */  "3CB BAF (Temperate)",
/*   12 */  "3CB BAF (Woodland)",
/*   40 */  "CUP (ACU)",
/*   41 */  "CUP (Desert)",
/*   42 */  "CUP (MTP)",
/*   43 */  "CUP (Winter)",
/*   44 */  "CUP (Woodland)",
/*   20 */  "IFA3",
/*   22 */  "IFA3 (Desert)",
/*   21 */  "IFA3 (Winter)",
/*   50 */  "OPTRE (Spartan)",
/*   51 */  "OPTRE (Urban)",
/*   30 */  "RHS (OCP)",
/*   31 */  "RHS (UCP)"
        };
        values[] = {0,1,2,10,11,12,40,41,42,43,44,20,22,21,50,51,30,31};
        default = 0;
    };
    SPACER(1);
    class DamageModifier {
        title = "Damage modifier";
        texts[] = {"0.25x","0.5x","1x","1.5x","2x","2.5x","5x","10x"};
        values[] = {0.25,0.5,1,1.5,2,2.5,5,10};
        default = 1;
    };
    class KillStreak {
        title = "Kill streak required to advance to next weapon";
        texts[] = {"Auto-Detect (By weapon pool)","1","2","3","4","5","6","7","8","9","10"};
        values[] = {0,1,2,3,4,5,6,7,8,9,10};
        default = 0;
    };
    class MaxRounds {
        title = "Maximum rounds played before the mission ends";
        texts[] = {"Infinite","1","2","3","4","5","6","7","8","9","10"};
        values[] = {0,1,2,3,4,5,6,7,8,9,10};
        default = 0;
    };
    SPACER(2);
    class AIUnits {
        title = "Number of AI enemys";
        texts[] = {"None","1","2","3","4","5","10","15","20"};
        values[] = {0,1,2,3,4,5,10,15,20};
        default = 0;
    };
    class AIDifficulty {
        title = "AI difficulty";
        texts[] = {"Storm Trooper","Rookie","Recruit","Veteran","Wall Hacks & Aim Bot"};
        values[] = {0,0.25,0.5,0.75,1};
        default = 0.25;
    };
    SPACER(3);
    class TimeOfDay {
        title = "Time of day";
        texts[] = {"Random","6 AM","9 AM","12 PM","3 PM","6 PM"};
        values[] = {0,6,9,12,15,18};
        default = 0;
    };
    class WeatherFog {
        title = "Fog density";
        texts[] = {"Random","No Fog","Light Fog","Heavy Fog"};
        values[] = {0,1,2,3};
        default = 1;
    };
    class WeatherRain {
        title = "Rain levels";
        texts[] = {"Random","No Rain","Light Rain","Heavy Rain","Thunder Storm"};
        values[] = {0,1,2,3,4};
        default = 1;
    };
};

#undef SPACER