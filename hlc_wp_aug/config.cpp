#define private        0
#define protected        1
#define public        2

#define true    1
#define false    0

#include "cfgsoundshaders.hpp"
#include "cfgsoundset.hpp"

class CfgPatches {
    class hlcweapons_AUG {
        requiredaddons[] = {"A3_Data_F","A3_UI_F","A3_Anims_F","A3_Anims_F_Config_Sdr","A3_Weapons_F","asdg_jointrails","hlcweapons_core"};
        units[] = { "HLC_AUG_ammobox", "HLC_AUG_Weaponbox1", 
            "Weapon_hlc_rifle_aug", "Weapon_hlc_rifle_auga1_t", "Weapon_hlc_rifle_auga1_b", 
            "Weapon_hlc_rifle_auga1carb", "Weapon_hlc_rifle_auga1carb_t", "Weapon_hlc_rifle_auga1carb_b", 
            "Weapon_hlc_rifle_aughbar", "Weapon_hlc_rifle_aughbar_t", "Weapon_hlc_rifle_aughbar_b",
            "Weapon_hlc_rifle_augpara", "Weapon_hlc_rifle_augpara_t", "Weapon_hlc_rifle_augpara_b",
            "Weapon_hlc_rifle_auga2", "Weapon_hlc_rifle_auga2_t", "Weapon_hlc_rifle_auga2_b",
            "Weapon_hlc_rifle_auga2carb", "Weapon_hlc_rifle_auga2carb_t", "Weapon_hlc_rifle_auga2carb_b",
            "Weapon_hlc_rifle_auga2lsw", "Weapon_hlc_rifle_auga2lsw_t", "Weapon_hlc_rifle_auga2lsw_b",
            "Weapon_hlc_rifle_auga2para", "Weapon_hlc_rifle_auga2para_t", "Weapon_hlc_rifle_auga2para_b",
            "Weapon_hlc_rifle_augsr", "Weapon_hlc_rifle_augsr_t", "Weapon_hlc_rifle_augsr_b",
            "Weapon_hlc_rifle_augsrcarb", "Weapon_hlc_rifle_augsrcarb_t", "Weapon_hlc_rifle_augsrcarb_b",
            "Weapon_hlc_rifle_augsrhbar", "Weapon_hlc_rifle_augsrhbar_t", "Weapon_hlc_rifle_augsrhbar_b",
            "Weapon_hlc_rifle_auga3", "Weapon_hlc_rifle_auga3_bl", "Weapon_hlc_rifle_auga3_b",
            "Weapon_hlc_rifle_auga3_GL", "Weapon_hlc_rifle_auga3_GL_bl", "Weapon_hlc_rifle_auga3_GL_b"
        };
        weapons[] = { "hlc_barrel_standard", "hlc_barrel_carbine", "hlc_barrel_hbar", "hlc_barrel_9mm",
            "hlc_rifle_aug", "hlc_rifle_auga1_t", "hlc_rifle_auga1_B",
            "hlc_rifle_auga1carb", "hlc_rifle_auga1carb_t", "hlc_rifle_auga1carb_b", 
            "hlc_rifle_aughbar", "hlc_rifle_aughbar_b", "hlc_rifle_aughbar_t",
            "hlc_rifle_augpara", "hlc_rifle_augpara_b", "hlc_rifle_augpara_t",
            "hlc_rifle_auga2", "hlc_rifle_auga2_b", "hlc_rifle_auga2_t",
            "hlc_rifle_augsr", "hlc_rifle_augsr_b", "hlc_rifle_augsr_t",
            "hlc_rifle_auga2para", "hlc_rifle_auga2para_b", "hlc_rifle_auga2para_t", 
            "hlc_rifle_auga2carb", "hlc_rifle_auga2carb_t", "hlc_rifle_auga2carb_b", 
            "hlc_rifle_augsrcarb", "hlc_rifle_augsrcarb_t", "hlc_rifle_augsrcarb_b", 
            "hlc_rifle_auga2lsw", "hlc_rifle_auga2lsw_t", "hlc_rifle_auga2lsw_b", 
            "hlc_rifle_augsrhbar", "hlc_rifle_augsrhbar_b", "hlc_rifle_augsrhbar_t", 
            "hlc_rifle_auga3", "hlc_rifle_auga3_bl", "hlc_rifle_auga3_b",
            "hlc_rifle_auga3_GL", "hlc_rifle_auga3_GL_BL", "hlc_rifle_auga3_GL_B"
        };
        magazines[] = { "hlc_30Rnd_556x45_B_AUG", "hlc_30Rnd_556x45_SOST_AUG", "hlc_30Rnd_556x45_SPR_AUG", "hlc_30Rnd_556x45_T_AUG", "hlc_40Rnd_556x45_B_AUG", "hlc_40Rnd_556x45_SOST_AUG", "hlc_40Rnd_556x45_SPR_AUG", "hlc_25Rnd_9x19mm_M882_AUG", "hlc_25Rnd_9x19mm_JHP_AUG","hlc_25Rnd_9x19mm_subsonic_AUG" };
        author="toadie";
        version = "1.5";
    };
};

class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;

class CfgSounds {
    class hlc_barrelswapaug {
        name = "hlc_barrelswapaug";
        Sound[] = { "\hlc_wp_aug\snd\aug_swapbarrel.wss", 1, 1, 15 };
        titles[] = {};
    };
};

class asdg_FrontSideRail;
class asdg_OpticRail1913;
class asdg_OpticRail1913_short;
class asdg_UnderSlot;
class asdg_MuzzleSlot;
class asdg_MuzzleSlot_556: asdg_MuzzleSlot {
    class compatibleItems {
        hlc_muzzle_snds_AUG = 1;
    };
};
class niarms_MuzzleSlot_augpara: asdg_MuzzleSlot {
    class compatibleItems {
        hlc_muzzle_snds_a6aug = 1;
    };
};

class CfgFunctions {
    class HLC {
        class common {
            class barrel_init {
                file = "\hlc_wp_aug\pre_init.sqf";
                preInit = 1;
            };
            class getmagazinesprimary { file = "\hlc_wp_aug\scripts\fnc_getmagazinesprimary.sqf"; };
            class barrelswitch { file = "\hlc_wp_aug\scripts\fnc_barrelswitch.sqf"; };
        };
    };
};

class cfgMods {
    class Mod_Base;
    class Niarms_AUG : Mod_Base {
        name = "NIArsenal: AR15 Rifles";
        picture = "hlc_wp_aug\tex\ui\NIArms1_ca.paa";
        dir = "@NIArsenal";
        hideName = 1;
        hidePicture = 0;
        action = "http://credmo.updatedtuesdays.com/tier1";
        author = "Toadie";
        logo = "hlc_wp_aug\tex\ui\NIArms1_ca.paa";
        logoOver = "hlc_wp_aug\tex\ui\NIArms1_ca.paa";
        logoSmall = "hlc_wp_aug\tex\ui\NIArms1_ca.paa";
    };
};

class CfgVehicles {
    class Man;
	class CAManBase : Man {/*
        class AGM_SelfActions {
            class HLC_BarrelSwap {
                displayName = "Change AUG Barrel";
                condition = "((currentweapon _player) == (primaryweapon _player)) && (primaryweapon _player in hlc_augs_weapons)";
                statement = "";
                showDisabled = 0;
                enableInside = 0;
                priority = -5;
                icon = "\hlc_wp_aug\tex\ui\AUGswap_ca.paa";
                subMenu[] = { "HLC_BarrelSwap", 1 };

                class hlc_switch_barrel_standard {
                    displayName = "Change Barrel (Standard)";
                    showDisabled = 0;
                    enableInside = 0;
                    priority = 1;
                    icon = "\AGM_Interaction\UI\dot_ca.paa";
                    condition = "(primaryweapon _player in hlc_barrel_standard_compatible_weapons) && ('hlc_barrel_standard' in items _player)";
                    statement = "[_player,'hlc_barrel_standard'] spawn hlc_fnc_barrelswitch";
                };
                class hlc_switch_barrel_carbine {
                    displayName = "Change Barrel (Carbine)";
                    showDisabled = 0;
                    enableInside = 0;
                    priority = 2;
                    icon = "\AGM_Interaction\UI\dot_ca.paa";
                    condition = "(primaryweapon _player in hlc_barrel_carbine_compatible_weapons) && ('hlc_barrel_carbine' in items _player)";
                    statement = "[_player,'hlc_barrel_carbine'] spawn hlc_fnc_barrelswitch";
                };
                class hlc_switch_barrel_hbar {
                    displayName = "Change Barrel (HBAR)";
                    showDisabled = 0;
                    enableInside = 0;
                    priority = 3;
                    icon = "\AGM_Interaction\UI\dot_ca.paa";
                    condition = "(primaryweapon _player in hlc_barrel_hbar_compatible_weapons) && ('hlc_barrel_hbar' in items _player)";
                    statement = "[_player,'hlc_barrel_hbar'] spawn hlc_fnc_barrelswitch";
                };
                class hlc_switch_barrel_9mm {
                    displayName = "Change Barrel (9MM PARA)";
                    showDisabled = 0;
                    enableInside = 0;
                    priority = 4;
                    icon = "\AGM_Interaction\UI\dot_ca.paa";
                    condition = "(primaryweapon _player in hlc_barrel_9mm_compatible_weapons) && ('hlc_barrel_9mm' in items _player)";
                    statement = "[_player,'hlc_barrel_9mm'] spawn hlc_fnc_barrelswitch";
                };
            };
        };*/
        class UserActions {
            class hlc_switch_barrel_standard {
                displayName = "Change Barrel (Standard)";
                priority = 1;
                radius = 1;
                position = "pilot";
                showWindow = 0;
                onlyForPlayer = 0;
                condition = "HLC_ShowBarrelActions && player == this && ((currentweapon player) == (primaryweapon player)) && {(primaryweapon player in hlc_barrel_standard_compatible_weapons) && ('hlc_barrel_standard' in items player)}";
                statement = "[this,'hlc_barrel_standard'] spawn hlc_fnc_barrelswitch";
            };
            class hlc_switch_barrel_carbine {
                displayName = "Change Barrel (Carbine)";
                priority = 1;
                radius = 1;
                position = "pilot";
                showWindow = 0;
                onlyForPlayer = 0;
                condition = "HLC_ShowBarrelActions && player == this && ((currentweapon player) == (primaryweapon player)) && {(primaryweapon player in hlc_barrel_carbine_compatible_weapons) && ('hlc_barrel_carbine' in items player)}";
                statement = "[this,'hlc_barrel_carbine'] spawn hlc_fnc_barrelswitch";
            };
            class hlc_switch_barrel_hbar {
                displayName = "Change Barrel (HBAR)";
                priority = 1;
                radius = 1;
                position = "pilot";
                showWindow = 0;
                onlyForPlayer = 0;
                condition = "HLC_ShowBarrelActions && player == this && ((currentweapon player) == (primaryweapon player)) && {(primaryweapon player in hlc_barrel_hbar_compatible_weapons) && ('hlc_barrel_hbar' in items player)}";
                statement = "[this,'hlc_barrel_hbar'] spawn hlc_fnc_barrelswitch";
            };
            class hlc_switch_barrel_9mm {
                displayName = "Change Barrel (9MM PARA)";
                priority = 1;
                radius = 1;
                position = "pilot";
                showWindow = 0;
                onlyForPlayer = 0;
                condition = "HLC_ShowBarrelActions && player == this && ((currentweapon player) == (primaryweapon player)) && {(primaryweapon player in hlc_barrel_9mm_compatible_weapons) && ('hlc_barrel_9mm' in items player)}";
                statement = "[this,'hlc_barrel_9mm'] spawn hlc_fnc_barrelswitch";
            };
        };
    };
    class NATO_Box_Base;
    class HLC_AUG_ammobox : NATO_Box_Base {
        dlc = "Niarms_AUG";
        scope = 2;
        vehicleClass = "Ammo";
        displayName = "HLC AUG Ammo";
        model = "\A3\weapons_F\AmmoBoxes\WpnsBox_large_F";
        icon = "iconCrateWpns";
        transportMaxWeapons = 25;
        transportMaxMagazines = 250;
        class TransportMagazines {
            class xhlc_20Rnd_762x51_B_fal {
                magazine = "hlc_30Rnd_556x45_B_AUG";
                count = 20;
            };
            class xhlc_20Rnd_762x51_t_fal {
                magazine = "hlc_30Rnd_556x45_SOST_AUG";
                count = 20;
            };
            class xhlc_50rnd_762x51_M_FAL7 {
                magazine = "hlc_30Rnd_556x45_SPR_AUG";
                count = 20;
            };
            class xhlc_20Rnd_762x51_S_fal7 {
                magazine = "hlc_30Rnd_556x45_T_AUG";
                count = 20;
            };
            class xhlc_20Rnd_762x51_S_fal6 {
                magazine = "hlc_40Rnd_556x45_B_AUG";
                count = 20;
            };
            class xhlc_20Rnd_762x51_S_fal5 {
                magazine = "hlc_40Rnd_556x45_SOST_AUG";
                count = 20;
            };
            class xhlc_20Rnd_762x51_S_fal4 {
                magazine = "hlc_40Rnd_556x45_SPR_AUG";
                count = 20;
            };
            class xhlc_20Rnd_762x51_S_fal3 {
                magazine = "hlc_25Rnd_9x19mm_M882_AUG";
                count = 20;
            };
            class xhlc_20Rnd_762x51_S_fal2 {
                magazine = "hlc_25Rnd_9x19mm_JHP_AUG";
                count = 20;
            };
            class xhlc_20Rnd_762x51_S_fal1 {
                magazine = "hlc_25Rnd_9x19mm_subsonic_AUG";
                count = 20;
            };
        };/*
        class TransportWeapons {
            class _xhlc_rifle_falosw {
                weapon = "hlc_rifle_falosw";
                count = 20;
            };
            class _xhlc_rifle_osw_GL {
                weapon = "hlc_rifle_osw_GL";
                count = 20;
            };
            class _xhhlc_rifle_L1A1 {
                weapon = "hlc_rifle_L1A1slr";
                count = 20;
            };
            class _xhlc_rifle_SLR {
                weapon = "hlc_rifle_SLR";
                count = 20;
            };
            class _xhlc_rifle_STG58F {
                weapon = "hlc_rifle_STG58F";
                count = 20;
            };
            class _xhlc_rifle_FAL5061 {
                weapon = "hlc_rifle_FAL5061";
                count = 20;
            };
            class _xhlc_rifle_c1A1 {
                weapon = "hlc_rifle_c1A1";
                count = 20;
            };
            class _xhlc_rifle_LAR {
                weapon = "hlc_rifle_LAR";
                count = 20;
            };
            class _xhlc_rifle_SLRchopmod {
                weapon = "hlc_rifle_SLRchopmod";
                count = 20;
            };
        };*/
        class TransportItems {
            class _xhlc_muzzle_snds_fal {
                name = "hlc_muzzle_snds_AUG";
                count = 10;
            };
            class _xhlc_muzzle_snds_fal2 {
                name = "hlc_muzzle_snds_a6AUG";
                count = 10;
            };
            class _xhlc_optic_suit {
                name = "hlc_barrel_standard";
                count = 5;
            };
            class _xhlc_optic_PVS4FAL {
                name = "hlc_barrel_carbine";
                count = 5;
            };
            class _xhlc_optic_PVS4FAL2 {
                name = "hlc_barrel_hbar";
                count = 5;
            };
            class _xhlc_optic_PVS4FAL3 {
                name = "hlc_barrel_9mm";
                count = 5;
            };
            class _xx_optic_Holosight {
                name = "optic_Holosight";
                count = 10;
            };
            class _xx_optic_hamr {
                name = "optic_hamr";
                count = 10;
            };
            class _xx_optic_rco {
                name = "optic_rco";
                count = 10;
            };
            class _xx_optic_ACO_grn {
                name = "optic_ACO_grn";
                count = 10;
            };
        };
    };
    class Weapon_Base_F;
    class Weapon_hlc_rifle_aug : Weapon_Base_F {
        dlc = "Niarms_AUG";
        scope = 2;
        scopeCurator = 2;
        displayName = "AUGA1(OD)";
        author = "Toadie";
        vehicleClass = "WeaponsPrimary";
        class TransportWeapons {
            class srifle_EBR_F {
                weapon = "hlc_rifle_aug";
                count = 1;
            };
        };
        class TransportMagazines {
            class 20Rnd_762x51_Mag {
                magazine = "hlc_30Rnd_556x45_B_AUG";
                count = 1;
            };
        };
    };
    class Weapon_hlc_rifle_auga1_t : Weapon_Base_F {
        dlc = "Niarms_AUG";
        scope = 2;
        scopeCurator = 2;
        displayName = "AUGA1(Tan)";
        author = "Toadie";
        vehicleClass = "WeaponsPrimary";
        class TransportWeapons {
            class srifle_EBR_F {
                weapon = "hlc_rifle_auga1_t";
                count = 1;
            };
        };
        class TransportMagazines {
            class 20Rnd_762x51_Mag {
                magazine = "hlc_30Rnd_556x45_B_AUG";
                count = 1;
            };
        };
    };
    class Weapon_hlc_rifle_auga1_b : Weapon_Base_F {
        dlc = "Niarms_AUG";
        scope = 2;
        scopeCurator = 2;
        displayName = "AUGA1(Black)";
        author = "Toadie";
        vehicleClass = "WeaponsPrimary";
        class TransportWeapons {
            class srifle_EBR_F {
                weapon = "hlc_rifle_auga1_b";
                count = 1;
            };
        };
        class TransportMagazines {
            class 20Rnd_762x51_Mag {
                magazine = "hlc_30Rnd_556x45_B_AUG";
                count = 1;
            };
        };
    };
    class Weapon_hlc_rifle_auga1carb : Weapon_Base_F {
        dlc = "Niarms_AUG";
        scope = 2;
        scopeCurator = 2;
        displayName = "AUGA1 Carbine(OD)";
        author = "Toadie";
        vehicleClass = "WeaponsPrimary";
        class TransportWeapons {
            class srifle_EBR_F {
                weapon = "hlc_rifle_auga1carb";
                count = 1;
            };
        };
        class TransportMagazines {
            class 20Rnd_762x51_Mag {
                magazine = "hlc_30Rnd_556x45_B_AUG";
                count = 1;
            };
        };
    };
    class Weapon_hlc_rifle_auga1carb_t : Weapon_Base_F {
        dlc = "Niarms_AUG";
        scope = 2;
        scopeCurator = 2;
        displayName = "AUGA1 Carbine(Tan)";
        author = "Toadie";
        vehicleClass = "WeaponsPrimary";
        class TransportWeapons {
            class srifle_EBR_F {
                weapon = "hlc_rifle_auga1carb_t";
                count = 1;
            };
        };
        class TransportMagazines {
            class 20Rnd_762x51_Mag {
                magazine = "hlc_30Rnd_556x45_B_AUG";
                count = 1;
            };
        };
    };
    class Weapon_hlc_rifle_auga1carb_b : Weapon_Base_F {
        dlc = "Niarms_AUG";
        scope = 2;
        scopeCurator = 2;
        displayName = "AUGA1 Carbine(Black)";
        author = "Toadie";
        vehicleClass = "WeaponsPrimary";
        class TransportWeapons {
            class srifle_EBR_F {
                weapon = "hlc_rifle_auga1carb_b";
                count = 1;
            };
        };
        class TransportMagazines {
            class 20Rnd_762x51_Mag {
                magazine = "hlc_30Rnd_556x45_B_AUG";
                count = 1;
            };
        };
    };
    class Weapon_hlc_rifle_aughbar : Weapon_Base_F {
        dlc = "Niarms_AUG";
        scope = 2;
        scopeCurator = 2;
        displayName = "AUGA1 HBAR(OD)";
        author = "Toadie";
        vehicleClass = "WeaponsPrimary";
        class TransportWeapons {
            class srifle_EBR_F {
                weapon = "hlc_rifle_aughbar";
                count = 1;
            };
        };
        class TransportMagazines {
            class 20Rnd_762x51_Mag {
                magazine = "hlc_30Rnd_556x45_B_AUG";
                count = 1;
            };
        };
    };
    class Weapon_hlc_rifle_aughbar_t : Weapon_Base_F {
        dlc = "Niarms_AUG";
        scope = 2;
        scopeCurator = 2;
        displayName = "AUGA1 HBAR(Tan)";
        author = "Toadie";
        vehicleClass = "WeaponsPrimary";
        class TransportWeapons {
            class srifle_EBR_F {
                weapon = "hlc_rifle_aughbar_t";
                count = 1;
            };
        };
        class TransportMagazines {
            class 20Rnd_762x51_Mag {
                magazine = "hlc_30Rnd_556x45_B_AUG";
                count = 1;
            };
        };
    };
    class Weapon_hlc_rifle_aughbar_b : Weapon_Base_F {
        dlc = "Niarms_AUG";
        scope = 2;
        scopeCurator = 2;
        displayName = "AUGA1 HBAR(Black)";
        author = "Toadie";
        vehicleClass = "WeaponsPrimary";
        class TransportWeapons {
            class srifle_EBR_F {
                weapon = "hlc_rifle_aughbar_b";
                count = 1;
            };
        };
        class TransportMagazines {
            class 20Rnd_762x51_Mag {
                magazine = "hlc_30Rnd_556x45_B_AUG";
                count = 1;
            };
        };
    };
    class Weapon_hlc_rifle_augpara : Weapon_Base_F {
        dlc = "Niarms_AUG";
        scope = 2;
        scopeCurator = 2;
        displayName = "AUGA1 PARA(OD)";
        author = "Toadie";
        vehicleClass = "WeaponsPrimary";
        class TransportWeapons {
            class srifle_EBR_F {
                weapon = "hlc_rifle_augpara";
                count = 1;
            };
        };
        class TransportMagazines {
            class 20Rnd_762x51_Mag {
                magazine = "hlc_25Rnd_9x19mm_M882_AUG";
                count = 1;
            };
        };
    };
    class Weapon_hlc_rifle_augpara_t : Weapon_Base_F {
        dlc = "Niarms_AUG";
        scope = 2;
        scopeCurator = 2;
        displayName = "AUGA1 PARA(Tan)";
        author = "Toadie";
        vehicleClass = "WeaponsPrimary";
        class TransportWeapons {
            class srifle_EBR_F {
                weapon = "hlc_rifle_augpara_t";
                count = 1;
            };
        };
        class TransportMagazines {
            class 20Rnd_762x51_Mag {
                magazine = "hlc_25Rnd_9x19mm_M882_AUG";
                count = 1;
            };
        };
    };
    class Weapon_hlc_rifle_augpara_b : Weapon_Base_F {
        dlc = "Niarms_AUG";
        scope = 2;
        scopeCurator = 2;
        displayName = "AUGA1 PARA(Black)";
        author = "Toadie";
        vehicleClass = "WeaponsPrimary";
        class TransportWeapons {
            class srifle_EBR_F {
                weapon = "hlc_rifle_augpara_b";
                count = 1;
            };
        };
        class TransportMagazines {
            class 20Rnd_762x51_Mag {
                magazine = "hlc_25Rnd_9x19mm_M882_AUG";
                count = 1;
            };
        };
    };
    class Weapon_hlc_rifle_auga2 : Weapon_Base_F {
        dlc = "Niarms_AUG";
        scope = 2;
        scopeCurator = 2;
        displayName = "AUGA2(OD)";
        author = "Toadie";
        vehicleClass = "WeaponsPrimary";
        class TransportWeapons {
            class srifle_EBR_F {
                weapon = "hlc_rifle_auga2";
                count = 1;
            };
        };
        class TransportMagazines {
            class 20Rnd_762x51_Mag {
                magazine = "hlc_30Rnd_556x45_B_AUG";
                count = 1;
            };
        };
    };
    class Weapon_hlc_rifle_auga2_t : Weapon_Base_F {
        dlc = "Niarms_AUG";
        scope = 2;
        scopeCurator = 2;
        displayName = "AUGA2(Tan)";
        author = "Toadie";
        vehicleClass = "WeaponsPrimary";
        class TransportWeapons {
            class srifle_EBR_F {
                weapon = "hlc_rifle_auga2_t";
                count = 1;
            };
        };
        class TransportMagazines {
            class 20Rnd_762x51_Mag {
                magazine = "hlc_30Rnd_556x45_B_AUG";
                count = 1;
            };
        };
    };
    class Weapon_hlc_rifle_auga2_b : Weapon_Base_F {
        dlc = "Niarms_AUG";
        scope = 2;
        scopeCurator = 2;
        displayName = "AUGA2(Black)";
        author = "Toadie";
        vehicleClass = "WeaponsPrimary";
        class TransportWeapons {
            class srifle_EBR_F {
                weapon = "hlc_rifle_auga2_b";
                count = 1;
            };
        };
        class TransportMagazines {
            class 20Rnd_762x51_Mag {
                magazine = "hlc_30Rnd_556x45_B_AUG";
                count = 1;
            };
        };
    };
    class Weapon_hlc_rifle_auga2carb : Weapon_Base_F {
        dlc = "Niarms_AUG";
        scope = 2;
        scopeCurator = 2;
        displayName = "AUGA2 Carbine(OD)";
        author = "Toadie";
        vehicleClass = "WeaponsPrimary";
        class TransportWeapons {
            class srifle_EBR_F {
                weapon = "hlc_rifle_auga2carb";
                count = 1;
            };
        };
        class TransportMagazines {
            class 20Rnd_762x51_Mag {
                magazine = "hlc_30Rnd_556x45_B_AUG";
                count = 1;
            };
        };
    };
    class Weapon_hlc_rifle_auga2carb_t : Weapon_Base_F {
        dlc = "Niarms_AUG";
        scope = 2;
        scopeCurator = 2;
        displayName = "AUGA2 Carbine(Tan)";
        author = "Toadie";
        vehicleClass = "WeaponsPrimary";
        class TransportWeapons {
            class srifle_EBR_F {
                weapon = "hlc_rifle_auga2carb_t";
                count = 1;
            };
        };
        class TransportMagazines {
            class 20Rnd_762x51_Mag {
                magazine = "hlc_30Rnd_556x45_B_AUG";
                count = 1;
            };
        };
    };
    class Weapon_hlc_rifle_auga2carb_b : Weapon_Base_F {
        dlc = "Niarms_AUG";
        scope = 2;
        scopeCurator = 2;
        displayName = "AUGA2 Carbine(Black)";
        author = "Toadie";
        vehicleClass = "WeaponsPrimary";
        class TransportWeapons {
            class srifle_EBR_F {
                weapon = "hlc_rifle_auga2carb_b";
                count = 1;
            };
        };
        class TransportMagazines {
            class 20Rnd_762x51_Mag {
                magazine = "hlc_30Rnd_556x45_B_AUG";
                count = 1;
            };
        };
    };
    class Weapon_hlc_rifle_auga2lsw : Weapon_Base_F {
        dlc = "Niarms_AUG";
        scope = 2;
        scopeCurator = 2;
        displayName = "AUGA2 HBAR(OD)";
        author = "Toadie";
        vehicleClass = "WeaponsPrimary";
        class TransportWeapons {
            class srifle_EBR_F {
                weapon = "hlc_rifle_auga2lsw";
                count = 1;
            };
        };
        class TransportMagazines {
            class 20Rnd_762x51_Mag {
                magazine = "hlc_30Rnd_556x45_B_AUG";
                count = 1;
            };
        };
    };
    class Weapon_hlc_rifle_auga2lsw_t : Weapon_Base_F {
        dlc = "Niarms_AUG";
        scope = 2;
        scopeCurator = 2;
        displayName = "AUGA2 HBAR(Tan)";
        author = "Toadie";
        vehicleClass = "WeaponsPrimary";
        class TransportWeapons {
            class srifle_EBR_F {
                weapon = "hlc_rifle_auga2lsw_t";
                count = 1;
            };
        };
        class TransportMagazines {
            class 20Rnd_762x51_Mag {
                magazine = "hlc_30Rnd_556x45_B_AUG";
                count = 1;
            };
        };
    };
    class Weapon_hlc_rifle_auga2lsw_b : Weapon_Base_F {
        dlc = "Niarms_AUG";
        scope = 2;
        scopeCurator = 2;
        displayName = "AUGA2 HBAR(Black)";
        author = "Toadie";
        vehicleClass = "WeaponsPrimary";
        class TransportWeapons {
            class srifle_EBR_F {
                weapon = "hlc_rifle_auga2lsw_b";
                count = 1;
            };
        };
        class TransportMagazines {
            class 20Rnd_762x51_Mag {
                magazine = "hlc_30Rnd_556x45_B_AUG";
                count = 1;
            };
        };
    };
    class Weapon_hlc_rifle_auga2para : Weapon_Base_F {
        dlc = "Niarms_AUG";
        scope = 2;
        scopeCurator = 2;
        displayName = "AUGA2 PARA(OD)";
        author = "Toadie";
        vehicleClass = "WeaponsPrimary";
        class TransportWeapons {
            class srifle_EBR_F {
                weapon = "hlc_rifle_auga2para";
                count = 1;
            };
        };
        class TransportMagazines {
            class 20Rnd_762x51_Mag {
                magazine = "hlc_25Rnd_9x19mm_M882_AUG";
                count = 1;
            };
        };
    };
    class Weapon_hlc_rifle_auga2para_t : Weapon_Base_F {
        dlc = "Niarms_AUG";
        scope = 2;
        scopeCurator = 2;
        displayName = "AUGA2 PARA(Tan)";
        author = "Toadie";
        vehicleClass = "WeaponsPrimary";
        class TransportWeapons {
            class srifle_EBR_F {
                weapon = "hlc_rifle_auga2para_t";
                count = 1;
            };
        };
        class TransportMagazines {
            class 20Rnd_762x51_Mag {
                magazine = "hlc_25Rnd_9x19mm_M882_AUG";
                count = 1;
            };
        };
    };
    class Weapon_hlc_rifle_auga2para_b : Weapon_Base_F {
        dlc = "Niarms_AUG";
        scope = 2;
        scopeCurator = 2;
        displayName = "AUGA2 PARA(Black)";
        author = "Toadie";
        vehicleClass = "WeaponsPrimary";
        class TransportWeapons {
            class srifle_EBR_F {
                weapon = "hlc_rifle_auga2para_b";
                count = 1;
            };
        };
        class TransportMagazines {
            class 20Rnd_762x51_Mag {
                magazine = "hlc_25Rnd_9x19mm_M882_AUG";
                count = 1;
            };
        };
    };
    class Weapon_hlc_rifle_augsr : Weapon_Base_F {
        dlc = "Niarms_AUG";
        scope = 2;
        scopeCurator = 2;
        displayName = "AUG-SR(OD)";
        author = "Toadie";
        vehicleClass = "WeaponsPrimary";
        class TransportWeapons {
            class srifle_EBR_F {
                weapon = "hlc_rifle_augsr";
                count = 1;
            };
        };
        class TransportMagazines {
            class 20Rnd_762x51_Mag {
                magazine = "hlc_30Rnd_556x45_B_AUG";
                count = 1;
            };
        };
    };
    class Weapon_hlc_rifle_augsr_t : Weapon_Base_F {
        dlc = "Niarms_AUG";
        scope = 2;
        scopeCurator = 2;
        displayName = "AUG-SR(Tan)";
        author = "Toadie";
        vehicleClass = "WeaponsPrimary";
        class TransportWeapons {
            class srifle_EBR_F {
                weapon = "hlc_rifle_augsr_t";
                count = 1;
            };
        };
        class TransportMagazines {
            class 20Rnd_762x51_Mag {
                magazine = "hlc_30Rnd_556x45_B_AUG";
                count = 1;
            };
        };
    };
    class Weapon_hlc_rifle_augsr_b : Weapon_Base_F {
        dlc = "Niarms_AUG";
        scope = 2;
        scopeCurator = 2;
        displayName = "AUG-SR(Black)";
        author = "Toadie";
        vehicleClass = "WeaponsPrimary";
        class TransportWeapons {
            class srifle_EBR_F {
                weapon = "hlc_rifle_augsr_b";
                count = 1;
            };
        };
        class TransportMagazines {
            class 20Rnd_762x51_Mag {
                magazine = "hlc_30Rnd_556x45_B_AUG";
                count = 1;
            };
        };
    };
    class Weapon_hlc_rifle_augsrcarb : Weapon_Base_F {
        dlc = "Niarms_AUG";
        scope = 2;
        scopeCurator = 2;
        displayName = "AUG-SR Carbine(OD)";
        author = "Toadie";
        vehicleClass = "WeaponsPrimary";
        class TransportWeapons {
            class srifle_EBR_F {
                weapon = "hlc_rifle_augsrcarb";
                count = 1;
            };
        };
        class TransportMagazines {
            class 20Rnd_762x51_Mag {
                magazine = "hlc_30Rnd_556x45_B_AUG";
                count = 1;
            };
        };
    };
    class Weapon_hlc_rifle_augsrcarb_t : Weapon_Base_F {
        dlc = "Niarms_AUG";
        scope = 2;
        scopeCurator = 2;
        displayName = "AUG-SR Carbine(Tan)";
        author = "Toadie";
        vehicleClass = "WeaponsPrimary";
        class TransportWeapons {
            class srifle_EBR_F {
                weapon = "hlc_rifle_augsrcarb_t";
                count = 1;
            };
        };
        class TransportMagazines {
            class 20Rnd_762x51_Mag {
                magazine = "hlc_30Rnd_556x45_B_AUG";
                count = 1;
            };
        };
    };
    class Weapon_hlc_rifle_augsrcarb_b : Weapon_Base_F {
        dlc = "Niarms_AUG";
        scope = 2;
        scopeCurator = 2;
        displayName = "AUG-SR Carbine(Black)";
        author = "Toadie";
        vehicleClass = "WeaponsPrimary";
        class TransportWeapons {
            class srifle_EBR_F {
                weapon = "hlc_rifle_augsrcarb_b";
                count = 1;
            };
        };
        class TransportMagazines {
            class 20Rnd_762x51_Mag {
                magazine = "hlc_30Rnd_556x45_B_AUG";
                count = 1;
            };
        };
    };
    class Weapon_hlc_rifle_augsrhbar : Weapon_Base_F {
        dlc = "Niarms_AUG";
        scope = 2;
        scopeCurator = 2;
        displayName = "AUG-SR HBAR(OD)";
        author = "Toadie";
        vehicleClass = "WeaponsPrimary";
        class TransportWeapons {
            class srifle_EBR_F {
                weapon = "hlc_rifle_augsrhbar";
                count = 1;
            };
        };
        class TransportMagazines {
            class 20Rnd_762x51_Mag {
                magazine = "hlc_30Rnd_556x45_B_AUG";
                count = 1;
            };
        };
    };
    class Weapon_hlc_rifle_augsrhbar_t : Weapon_Base_F {
        dlc = "Niarms_AUG";
        scope = 2;
        scopeCurator = 2;
        displayName = "AUG-SR HBAR(Tan)";
        author = "Toadie";
        vehicleClass = "WeaponsPrimary";
        class TransportWeapons {
            class srifle_EBR_F {
                weapon = "hlc_rifle_augsrhbar_t";
                count = 1;
            };
        };
        class TransportMagazines {
            class 20Rnd_762x51_Mag {
                magazine = "hlc_30Rnd_556x45_B_AUG";
                count = 1;
            };
        };
    };
    class Weapon_hlc_rifle_augsrhbar_b : Weapon_Base_F {
        dlc = "Niarms_AUG";
        scope = 2;
        scopeCurator = 2;
        displayName = "AUG-SR HBAR(Black)";
        author = "Toadie";
        vehicleClass = "WeaponsPrimary";
        class TransportWeapons {
            class srifle_EBR_F {
                weapon = "hlc_rifle_augsrhbar_b";
                count = 1;
            };
        };
        class TransportMagazines {
            class 20Rnd_762x51_Mag {
                magazine = "hlc_30Rnd_556x45_B_AUG";
                count = 1;
            };
        };
    };
    class Weapon_hlc_rifle_auga3 : Weapon_Base_F {
        dlc = "Niarms_AUG";
        scope = 2;
        scopeCurator = 2;
        displayName = "AUGA3(OD)";
        author = "Toadie";
        vehicleClass = "WeaponsPrimary";
        class TransportWeapons {
            class srifle_EBR_F {
                weapon = "hlc_rifle_auga3";
                count = 1;
            };
        };
        class TransportMagazines {
            class 20Rnd_762x51_Mag {
                magazine = "hlc_30Rnd_556x45_B_AUG";
                count = 1;
            };
        };
    };
    class Weapon_hlc_rifle_auga3_bl : Weapon_Base_F {
        dlc = "Niarms_AUG";
        scope = 2;
        scopeCurator = 2;
        displayName = "AUGA3(Blue)";
        author = "Toadie";
        vehicleClass = "WeaponsPrimary";
        class TransportWeapons {
            class srifle_EBR_F {
                weapon = "hlc_rifle_auga3_bl";
                count = 1;
            };
        };
        class TransportMagazines {
            class 20Rnd_762x51_Mag {
                magazine = "hlc_30Rnd_556x45_B_AUG";
                count = 1;
            };
        };
    };
    class Weapon_hlc_rifle_auga3_b : Weapon_Base_F {
        dlc = "Niarms_AUG";
        scope = 2;
        scopeCurator = 2;
        displayName = "AUGA3(Black)";
        author = "Toadie";
        vehicleClass = "WeaponsPrimary";
        class TransportWeapons {
            class srifle_EBR_F {
                weapon = "hlc_rifle_auga3_b";
                count = 1;
            };
        };
        class TransportMagazines {
            class 20Rnd_762x51_Mag {
                magazine = "hlc_30Rnd_556x45_B_AUG";
                count = 1;
            };
        };
    };
    class Weapon_hlc_rifle_auga3_GL : Weapon_Base_F {
        dlc = "Niarms_AUG";
        scope = 2;
        scopeCurator = 2;
        displayName = "AUGA3 GL(OD)";
        author = "Toadie";
        vehicleClass = "WeaponsPrimary";
        class TransportWeapons {
            class srifle_EBR_F {
                weapon = "hlc_rifle_auga3_GL";
                count = 1;
            };
        };
        class TransportMagazines {
            class 20Rnd_762x51_Mag {
                magazine = "hlc_30Rnd_556x45_B_AUG";
                count = 1;
            };
        };
    };
    class Weapon_hlc_rifle_auga3_GL_bl : Weapon_Base_F {
        dlc = "Niarms_AUG";
        scope = 2;
        scopeCurator = 2;
        displayName = "AUGA3 GL(Blue)";
        author = "Toadie";
        vehicleClass = "WeaponsPrimary";
        class TransportWeapons {
            class srifle_EBR_F {
                weapon = "hlc_rifle_auga3_GL_bl";
                count = 1;
            };
        };
        class TransportMagazines {
            class 20Rnd_762x51_Mag {
                magazine = "hlc_30Rnd_556x45_B_AUG";
                count = 1;
            };
        };
    };
    class Weapon_hlc_rifle_auga3_GL_b : Weapon_Base_F {
        dlc = "Niarms_AUG";
        scope = 2;
        scopeCurator = 2;
        displayName = "AUGA3 GL(Black)";
        author = "Toadie";
        vehicleClass = "WeaponsPrimary";
        class TransportWeapons {
            class srifle_EBR_F {
                weapon = "hlc_rifle_auga3_GL_b";
                count = 1;
            };
        };
        class TransportMagazines {
            class 20Rnd_762x51_Mag {
                magazine = "hlc_30Rnd_556x45_B_AUG";
                count = 1;
            };
        };
    };
    class HLC_AUG_Weaponbox1 : NATO_Box_Base {
        dlc = "Niarms_AUG";
        scope = 2;
        vehicleClass = "Ammo";
        displayName = "HLC AUG Weapon Cache";
        model = "\A3\weapons_F\AmmoBoxes\Supplydrop";
        icon = "iconCrateWpns";
        transportMaxWeapons = 25;
        transportMaxMagazines = 250;
        class TransportMagazines {
            class xhlc_20Rnd_762x51_B_fal {
                magazine = "hlc_30Rnd_556x45_B_AUG";
                count = 20;
            };
            class xhlc_20Rnd_762x51_t_fal {
                magazine = "hlc_30Rnd_556x45_SOST_AUG";
                count = 20;
            };
            class xhlc_50rnd_762x51_M_FAL7 {
                magazine = "hlc_30Rnd_556x45_SPR_AUG";
                count = 20;
            };
            class xhlc_20Rnd_762x51_S_fal7 {
                magazine = "hlc_30Rnd_556x45_T_AUG";
                count = 20;
            };
            class xhlc_20Rnd_762x51_S_fal6 {
                magazine = "hlc_40Rnd_556x45_B_AUG";
                count = 20;
            };
            class xhlc_20Rnd_762x51_S_fal5 {
                magazine = "hlc_40Rnd_556x45_SOST_AUG";
                count = 20;
            };
            class xhlc_20Rnd_762x51_S_fal4 {
                magazine = "hlc_40Rnd_556x45_SPR_AUG";
                count = 20;
            };
            class xhlc_20Rnd_762x51_S_fal3 {
                magazine = "hlc_25Rnd_9x19mm_M882_AUG";
                count = 20;
            };
            class xhlc_20Rnd_762x51_S_fal2 {
                magazine = "hlc_25Rnd_9x19mm_JHP_AUG";
                count = 20;
            };
            class xhlc_20Rnd_762x51_S_fal1 {
                magazine = "hlc_25Rnd_9x19mm_subsonic_AUG";
                count = 20;
            };
        };
        class TransportWeapons {
            class hlc_rifle_aug0 {
                weapon = "hlc_rifle_aug";
                count = 10;
            };
            class hlc_rifle_auga1carb0 {
                weapon = "hlc_rifle_auga1carb";
                count = 10;
            };
            class hlc_rifle_aughbar0 {
                weapon = "hlc_rifle_aughbar";
                count = 10;
            };
            class hlc_rifle_augpara0 {
                weapon = "hlc_rifle_augpara";
                count = 10;
            };
            class hlc_rifle_auga20 {
                weapon = "hlc_rifle_auga2";
                count = 10;
            };
            class hlc_rifle_augsr0 {
                weapon = "hlc_rifle_augsr";
                count = 10;
            };
            class hlc_rifle_auga2para0 {
                weapon = "hlc_rifle_auga2para";
                count = 10;
            };
            class hlc_rifle_auga2carb0 {
                weapon = "hlc_rifle_auga2carb";
                count = 10;
            };
            class hlc_rifle_augsrcarb0 {
                weapon = "hlc_rifle_augsrcarb";
                count = 10;
            };
            class hlc_rifle_auga2lsw0 {
                weapon = "hlc_rifle_auga2lsw";
                count = 10;
            };
            class hlc_rifle_augsrhbar0 {
                weapon = "hlc_rifle_augsrhbar";
                count = 10;
            };
            class hlc_rifle_auga30 {
                weapon = "hlc_rifle_auga3";
                count = 10;
            };
            class hlc_rifle_auga3_GL0 {
                weapon = "hlc_rifle_auga3_GL";
                count = 10;
            };
            class hlc_rifle_aug1 {
                weapon = "hlc_rifle_auga1_t";
                count = 10;
            };
            class hlc_rifle_auga1carb1 {
                weapon = "hlc_rifle_auga1carb_T";
                count = 10;
            };
            class hlc_rifle_aughbar1 {
                weapon = "hlc_rifle_aughbar_T";
                count = 10;
            };
            class hlc_rifle_augpara1 {
                weapon = "hlc_rifle_augpara_T";
                count = 10;
            };
            class hlc_rifle_auga21 {
                weapon = "hlc_rifle_auga2_t";
                count = 10;
            };
            class hlc_rifle_augsr1 {
                weapon = "hlc_rifle_augsr_T";
                count = 10;
            };
            class hlc_rifle_auga2para1 {
                weapon = "hlc_rifle_auga2para_T";
                count = 10;
            };
            class hlc_rifle_auga2carb1 {
                weapon = "hlc_rifle_auga2carb_T";
                count = 10;
            };
            class hlc_rifle_augsrcarb1 {
                weapon = "hlc_rifle_augsrcarb_T";
                count = 10;
            };
            class hlc_rifle_auga2lsw1 {
                weapon = "hlc_rifle_auga2lsw_T";
                count = 10;
            };
            class hlc_rifle_augsrhbar1 {
                weapon = "hlc_rifle_augsrhbar_T";
                count = 10;
            };
            class hlc_rifle_auga31 {
                weapon = "hlc_rifle_auga3_bl";
                count = 10;
            };
            class hlc_rifle_auga3_GL1 {
                weapon = "hlc_rifle_auga3_GL_bl";
                count = 10;
            };

            class hlc_rifle_aug2 {
                weapon = "hlc_rifle_auga1_b";
                count = 10;
            };
            class hlc_rifle_auga1carb2 {
                weapon = "hlc_rifle_auga1carb_B";
                count = 10;
            };
            class hlc_rifle_aughbar2 {
                weapon = "hlc_rifle_aughbar_B";
                count = 10;
            };
            class hlc_rifle_augpara2 {
                weapon = "hlc_rifle_augpara_B";
                count = 10;
            };
            class hlc_rifle_auga22 {
                weapon = "hlc_rifle_auga2_B";
                count = 10;
            };
            class hlc_rifle_augsr2 {
                weapon = "hlc_rifle_augsr_b";
                count = 10;
            };
            class hlc_rifle_auga2para2 {
                weapon = "hlc_rifle_auga2para_B";
                count = 10;
            };
            class hlc_rifle_auga2carb2 {
                weapon = "hlc_rifle_auga2carb_b";
                count = 10;
            };
            class hlc_rifle_augsrcarb2 {
                weapon = "hlc_rifle_augsrcarb_B";
                count = 10;
            };
            class hlc_rifle_auga2lsw2 {
                weapon = "hlc_rifle_auga2lsw_b";
                count = 10;
            };
            class hlc_rifle_augsrhbar2 {
                weapon = "hlc_rifle_augsrhbar_B";
                count = 10;
            };
            class hlc_rifle_auga32 {
                weapon = "hlc_rifle_auga3_B";
                count = 10;
            };
            class hlc_rifle_auga3_GL2 {
                weapon = "hlc_rifle_auga3_GL_B";
                count = 10;
            };
        };
        class TransportItems {
            class _xhlc_muzzle_snds_fal {
                name = "hlc_muzzle_snds_a6AUG";
                count = 10;
            };
            class _xhlc_muzzle_snds_fal2 {
                name = "hlc_muzzle_snds_AUG";
                count = 10;
            };
            class _xhlc_optic_suit {
                name = "hlc_barrel_standard";
                count = 5;
            };
            class _xhlc_optic_PVS4FAL {
                name = "hlc_barrel_carbine";
                count = 5;
            };
            class _xhlc_optic_PVS4FAL2 {
                name = "hlc_barrel_hbar";
                count = 5;
            };
            class _xhlc_optic_PVS4FAL3 {
                name = "hlc_barrel_9mm";
                count = 5;
            };
            class _xx_optic_Holosight {
                name = "optic_Holosight";
                count = 10;
            };
            class _xx_optic_hamr {
                name = "optic_hamr";
                count = 10;
            };
            class _xx_optic_rco {
                name = "optic_rco";
                count = 10;
            };
            class _xx_optic_ACO_grn {
                name = "optic_ACO_grn";
                count = 10;
            };
        };
    };
};

class CfgMagazines {
    class 30Rnd_556x45_Stanag;
    //AUGMags
    class hlc_30Rnd_556x45_B_AUG : 30Rnd_556x45_Stanag {
        dlc = "Niarms_AUG";
        ammo = "HLC_556NATO_EPR";
        count = 30;
        descriptionshort = "Caliber: 5.56x45mm Ball<br />Rounds: 30<br />Used in: Steyr AUGA1,AUGA2,AUGA3(All variants of all models)";
        displayname = "AUG Mag (EPR) 30rnd 5.56mm";
        initspeed = 970;
        lastroundstracer = 1;
        picture = "\hlc_core\tex\ui\ammo\m_augball_ca.paa";
        model = "\hlc_wp_aug\mesh\magazine\magazine.p3d";
        scope = 2;
        tracersevery = 0;
        mass = 7;
        displaynameshort = "5.56mm EPR";
        author = "Spartan0536,Toadie";
    };
    class hlc_30Rnd_556x45_SOST_AUG : 30Rnd_556x45_Stanag {
        dlc = "Niarms_AUG";
        ammo = "HLC_556NATO_SOST";
        count = 30;
        descriptionshort = "Caliber: 5.56x45mm Ball<br />Rounds: 30<br />Used in: Steyr AUGA1,AUGA2,AUGA3(All variants of all models)";
        displayname = "AUG Mag (SOST) 30rnd 5.56mm";
        initspeed = 970;
        lastroundstracer = 1;
        picture = "\hlc_core\tex\ui\ammo\m_augball_ca.paa";
        model = "\hlc_wp_aug\mesh\magazine\magazine.p3d";
        scope = 2;
        tracersevery = 0;
        mass = 7;
        displaynameshort = "5.56mm SOST";
        author = "Spartan0536,Toadie";
    };
    class hlc_30Rnd_556x45_SPR_AUG : 30Rnd_556x45_Stanag {
        dlc = "Niarms_AUG";
        ammo = "HLC_556NATO_SPR";
        count = 30;
        descriptionshort = "Caliber: 5.56x45mm Ball<br />Rounds: 30<br />Used in: Steyr AUGA1,AUGA2,AUGA3(All variants of all models)";
        displayname = "AUG Mag (SPR) 30rnd 5.56mm";
        initspeed = 970;
        lastroundstracer = 1;
        picture = "\hlc_core\tex\ui\ammo\m_augball_ca.paa";
        model = "\hlc_wp_aug\mesh\magazine\magazine.p3d";
        scope = 2;
        tracersevery = 0;
        mass = 7;
        displaynameshort = "5.56mm SPR";
        author = "Spartan0536,Toadie";
    };
    class hlc_30Rnd_556x45_T_AUG : 30Rnd_556x45_Stanag {
        dlc = "Niarms_AUG";
        ammo = "B_556x45_Ball_Tracer_Red";
        count = 30;
        descriptionshort = "Caliber: 5.56x45mm Tracer<br />Rounds: 30<br />Used in: Steyr AUGA1,AUGA2,AUGA3(All variants of all models)";
        displayname = "AUG Mag (Tracer) 30rnd 5.56mm";
        initspeed = 970;
        lastroundstracer = 1;
        picture = "\hlc_core\tex\ui\ammo\m_augtracer_ca.paa";
        model = "\hlc_wp_aug\mesh\magazine\magazine.p3d";
        scope = 2;
        tracersevery = 1;
        mass = 7;
        displaynameshort = "5.56mm Tracer";
        author = "Spartan0536,Toadie";
    };
    class hlc_30Rnd_556x45_MDIM_AUG : 30Rnd_556x45_Stanag{
        dlc = "Niarms_AUG";
        ammo = "HLC_B_556x45_Ball_Tracer_Dim";
        count = 30;
        descriptionshort = "Caliber: 5.56x45mm EPR IRDIM<br />Rounds: 30<br />Used in: Steyr AUGA1,AUGA2,AUGA3(All variants of all models)";
        displayname = "AUG Mag (EPR,IR-DIM) 30rnd 5.56mm";
        initspeed = 970;
        lastroundstracer = 1;
        picture = "\hlc_core\tex\ui\ammo\m_augtracer_ca.paa";
        model = "\hlc_wp_aug\mesh\magazine\magazine.p3d";
        scope = 2;
        tracersevery = 4;
        mass = 7;
        displaynameshort = "5.56mm IR-DIM";
        author = "Toadie";
    };
    class hlc_30Rnd_556x45_TDIM_AUG : 30Rnd_556x45_Stanag{
        dlc = "Niarms_AUG";
        ammo = "HLC_B_556x45_Ball_Tracer_Dim";
        count = 30;
        descriptionshort = "Caliber: 5.56x45mm IRDIM<br />Rounds: 30<br />Used in: Steyr AUGA1,AUGA2,AUGA3(All variants of all models)";
        displayname = "AUG Mag (IR-DIM) 30rnd 5.56mm";
        initspeed = 970;
        lastroundstracer = 1;
        picture = "\hlc_core\tex\ui\ammo\m_augtracer_ca.paa";
        model = "\hlc_wp_aug\mesh\magazine\magazine.p3d";
        scope = 2;
        tracersevery = 1;
        mass = 7;
        displaynameshort = "5.56mm IR-DIM";
        author = "Toadie";
    };
    class hlc_40Rnd_556x45_B_AUG : 30Rnd_556x45_Stanag {
        dlc = "Niarms_AUG";
        ammo = "HLC_556NATO_EPR";
        count = 42;
        descriptionshort = "Caliber: 5.56x45mm Ball<br />Rounds: 40<br />Used in: Steyr AUGA1,AUGA2,AUGA3(All variants of all models)";
        displayname = "AUG-HBAR Mag (EPR) 42rnd 5.56mm";
        initspeed = 970;
        picture = "\hlc_core\tex\ui\ammo\m_augball_ca.paa";
        model = "\hlc_wp_aug\mesh\magazine\magazine.p3d";
        scope = 2;
        tracersevery = 3;
        mass = 8;
        displaynameshort = "5.56mm EPR";
        author = "Spartan0536,Toadie";
    };
    class hlc_40Rnd_556x45_TDIM_AUG : 30Rnd_556x45_Stanag{
        dlc = "Niarms_AUG";
        ammo = "HLC_B_556x45_Ball_Tracer_Dim";
        count = 42;
        descriptionshort = "Caliber: 5.56x45mm IRDIM<br />Rounds: 30<br />Used in: Steyr AUGA1,AUGA2,AUGA3(All variants of all models)";
        displayname = "AUG-HBAR Mag (IR-DIM) 30rnd 5.56mm";
        initspeed = 970;
        lastroundstracer = 1;
        picture = "\hlc_core\tex\ui\ammo\m_augtracer_ca.paa";
        model = "\hlc_wp_aug\mesh\magazine\magazine.p3d";
        scope = 2;
        tracersevery = 1;
        mass = 8;
        displaynameshort = "5.56mm IR-DIM";
        author = "Toadie";
    };
    class hlc_40Rnd_556x45_SOST_AUG : 30Rnd_556x45_Stanag {
        dlc = "Niarms_AUG";
        ammo = "HLC_556NATO_SOST";
        count = 42;
        descriptionshort = "Caliber: 5.56x45mm EPR<br />Rounds: 42<br />Used in: Steyr AUGA1,AUGA2,AUGA3(All variants of all models)";
        displayname = "AUG-HBAR Mag (SOST) 42rnd 5.56mm";
        initspeed = 970;
        picture = "\hlc_core\tex\ui\ammo\m_augball_ca.paa";
        model = "\hlc_wp_aug\mesh\magazine\magazine.p3d";
        scope = 2;
        tracersevery = 3;
        mass = 8;
        displaynameshort = "5.56mm SOST";
        author = "Spartan0536,Toadie";
    };
    class hlc_40Rnd_556x45_SPR_AUG : 30Rnd_556x45_Stanag {
        dlc = "Niarms_AUG";
        ammo = "HLC_556NATO_SPR";
        count = 42;
        descriptionshort = "Caliber: 5.56x45mm Ball<br />Rounds: 40<br />Used in: Steyr AUGA1,AUGA2,AUGA3(All variants of all models)";
        displayname = "AUG-HBAR Mag (SPR) 42rnd 5.56mm";
        initspeed = 970;
        picture = "\hlc_core\tex\ui\ammo\m_augball_ca.paa";
        model = "\hlc_wp_aug\mesh\magazine\magazine.p3d";
        scope = 2;
        tracersevery = 3;
        mass = 8;
        displaynameshort = "5.56mm Ball";
        author = "Spartan0536,Toadie";
    };
    class hlc_25Rnd_9x19mm_M882_AUG : 30Rnd_556x45_Stanag {
        dlc = "Niarms_AUG";
        ammo = "HLC_9x19_M882_SMG";
        count = 25;
        descriptionshort = "Caliber: 9x19mm M882 NATO Ball<br />Rounds: 25<br />Used in: Steyr AUGA1 Para,AUGA2 Para";
        displayname = "AUG 9mm Mag (Ball) 25rnd 9mm";
        initspeed = 400;
        picture = "\hlc_wp_aug\tex\ui\m_aug9mm_ball_ca.paa";
        model = "\hlc_wp_aug\mesh\magazine\magazine2.p3d";
        scope = 2;
        tracersevery = 0;
        mass = 5;
        displaynameshort = "9mm Ball";
        author = "Spartan0536,Toadie";
    };
    class hlc_25Rnd_9x19mm_JHP_AUG : 30Rnd_556x45_Stanag {
        dlc = "Niarms_AUG";
        ammo = "HLC_9x19_GoldDot";
        count = 25;
        descriptionshort = "Caliber: 9x19mm LE Jacketed Hollowpoint<br />Rounds: 25<br />Used in: Steyr AUGA1 Para,AUGA2 Para";
        displayname = "AUG 9mm Mag (JHP) 25rnd 9mm";
        initspeed = 420;
        picture = "\hlc_wp_aug\tex\ui\m_aug9mm_JHP_ca.paa";
        model = "\hlc_wp_aug\mesh\magazine\magazine2.p3d";
        scope = 2;
        tracersevery = 0;
        mass = 5;
        displaynameshort = "9mm JHP";
        author = "Spartan0536,Toadie";
    };
    class hlc_25Rnd_9x19mm_subsonic_AUG : 30Rnd_556x45_Stanag {
        dlc = "Niarms_AUG";
        ammo = "HLC_9x19_Subsonic";
        count = 25;
        descriptionshort = "Caliber: 9x19mm Subsonic Ball<br />Rounds: 25<br />Used in: Steyr AUGA1 Para,AUGA2 Para";
        displayname = "AUG 9mm Mag (Subsonic) 25rnd 9mm";
        initspeed = 340;
        picture = "\hlc_wp_aug\tex\ui\m_aug9mm_sub_ca.paa";
        model = "\hlc_wp_aug\mesh\magazine\magazine2.p3d";
        scope = 2;
        tracersevery = 0;
        mass = 5;
        author = "Spartan0536,Toadie";
        displaynameshort = "9mm Subsonic";
    };
};

class CfgWeapons {

    class ItemCore;

//muzzles

    class muzzle_snds_H;
    class hlc_muzzle_snds_AUG : muzzle_snds_H {
        author = "Bohemia Interactive,Toadie";
        displayName = "KAC M4-2000";
        picture = "\A3\weapons_F\Data\UI\gear_acca_snds_h_CA.paa";
        model = "hlc_wp_aug\mesh\m42000\M42000";
    };
    class hlc_muzzle_snds_a6AUG : muzzle_snds_H {
        dlc = "Niarms_AUG";
        author = "Toadie";
        displayName = "AWC Agenda Six (AUG-Thread)";
        picture = "\A3\weapons_F\Data\UI\gear_acca_snds_h_CA.paa";
        model = "hlc_wp_aug\mesh\agendasix\a6";
    };

    class Rifle;
    class UGL_F;
    class Rifle_Base_F : Rifle {
        class WeaponSlotsInfo;
        class GunParticles;
    };

    class hlc_aug_base : Rifle_Base_F {
        dlc = "Niarms_AUG";
        deployedPivot = "deploypivot";       /// what point should be used to be on surface while unfolded
        hasBipod = false;          /// a weapon with bipod obviously has a bipod
        //    soundBipodDown[] = { "\hlc_wp_ak\snd\rpk_bipodout", db - 3, 1, 20 }; /// sound of unfolding the bipod
        //    soundBipodUp[] = { "\hlc_wp_ak\snd\rpk_bipodin", db - 3, 1, 20 }; /// sound of folding the bipod
        inertia = 0.5;
        author = "Toadie";
        scope = private;
        magazineReloadSwitchPhase = 0.5;
        aidispersioncoefx = 3;
        aidispersioncoefy = 5;
        class Library {
            libTextDesc = "Izhmash AK74";
        };
        maxRecoilSway = 0.0125;
        swayDecaySpeed = 1.25;
        class GunParticles : GunParticles {
            class SecondEffect {
                positionName = "Nabojnicestart";
                directionName = "Nabojniceend";
                effectName = "CaselessAmmoCloud";
            };
        };
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 33;
            class PointerSlot {};
        };
        opticsZoomMin = 0.375;
        opticsZoomMax = 1.1;
        opticsZoomInit = 0.75;
        distanceZoomMin = 300;
        distanceZoomMax = 300;
        descriptionShort = "Assault rifle<br/>Caliber: 5.56mm";

        dexterity = 1.8;
        bullet1[] = { "A3\sounds_f\weapons\shells\7_62\metal_762_01", 0.398107, 1, 15 };
        bullet10[] = { "A3\sounds_f\weapons\shells\7_62\grass_762_02", 0.281838, 1, 15 };
        bullet11[] = { "A3\sounds_f\weapons\shells\7_62\grass_762_03", 0.281838, 1, 15 };
        bullet12[] = { "A3\sounds_f\weapons\shells\7_62\grass_762_04", 0.281838, 1, 15 };
        bullet2[] = { "A3\sounds_f\weapons\shells\7_62\metal_762_02", 0.398107, 1, 15 };
        bullet3[] = { "A3\sounds_f\weapons\shells\7_62\metal_762_03", 0.398107, 1, 15 };
        bullet4[] = { "A3\sounds_f\weapons\shells\7_62\metal_762_04", 0.398107, 1, 15 };
        bullet5[] = { "A3\sounds_f\weapons\shells\7_62\dirt_762_01", 0.281838, 1, 15 };
        bullet6[] = { "A3\sounds_f\weapons\shells\7_62\dirt_762_02", 0.281838, 1, 15 };
        bullet7[] = { "A3\sounds_f\weapons\shells\7_62\dirt_762_03", 0.281838, 1, 15 };
        bullet8[] = { "A3\sounds_f\weapons\shells\7_62\dirt_762_04", 0.281838, 1, 15 };
        bullet9[] = { "A3\sounds_f\weapons\shells\7_62\grass_762_01", 0.281838, 1, 15 };
        soundBullet[] = { "bullet1", 0.083, "bullet2", 0.083, "bullet3", 0.083, "bullet4", 0.083, "bullet5", 0.083, "bullet6", 0.083, "bullet7", 0.083, "bullet8", 0.083, "bullet9", 0.083, "bullet10", 0.083, "bullet11", 0.083, "bullet12", 0.083 };
        modes[] = { "FullAuto", "Single", "fullauto_medium", "single_medium_optics1", "single_far_optics2" };
        class Single : Mode_SemiAuto {

            weaponSoundEffect = "DefaultRifle";
            reloadTime = 0.086;
            recoil = "recoil_single_mx";
            recoilProne = "recoil_single_prone_mx";
            dispersion = 0.000654498;
            minRange = 2;
            minRangeProbab = 0.7;
            midRange = 75;
            midRangeProbab = 0.08;
            maxRange = 250;
            maxRangeProbab = 0.0015;
            sounds[] = { "StandardSound", "SilencedSound" };

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect = "DefaultRifle";

                closure1[] = { "\hlc_wp_aug\snd\f88a1_first", 1, 1, 10 };
                closure2[] = { "\hlc_wp_aug\snd\f88a1_first", 1, 1, 10 };
                soundClosure[] = { closure1, 0.5, closure2, 0.5 };
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                begin1[] = { "\hlc_wp_aug\snd\f88a1_fire", 1, 1, 1200 };
                begin2[] = { "\hlc_wp_aug\snd\f88a1_fire", 1, 1, 1200 };
                begin3[] = { "\hlc_wp_aug\snd\f88a1_fire", 1, 1, 1200 };
                soundBegin[] = { begin1, 0.33, begin2, 0.33, begin3, 0.34 };
                class SoundTails {
                    class TailForest {
                        sound[] = { "\hlc_wp_aug\snd\tails\ar556_forest", 1.1, 1, 1200 };
                        frequency = 1;
                        volume = "(1-interior/1.4)*forest";
                    };
                    class TailInterior {
                        sound[] = { "\hlc_wp_aug\snd\tails\aug_indoor", 1.0, 1, 1200 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                begin1[] = { "\hlc_wp_aug\snd\f88A1_sil", 1, 1, 200 };
                begin2[] = { "\hlc_wp_aug\snd\f88A1_sil", 1, 1, 200 };
                soundBegin[] = { begin1, 0.5, begin2, 0.5 };
                class SoundTails {
                    class TailInterior {
                        sound[] = { "\hlc_wp_aug\snd\tails\aug_sil_indoor", 1.0, 1, 100 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };
        };
        class FullAuto : Mode_FullAuto {
            weaponSoundEffect = "DefaultRifle";
            reloadTime = 0.086;
            recoil = "recoil_auto_mx";
            recoilProne = "recoil_auto_prone_mx";
            dispersion = 0.000654498;
            minRange = 0;
            minRangeProbab = 0.03;
            midRange = 75;
            midRangeProbab = 0.005;
            maxRange = 250;
            maxRangeProbab = 0.0003;
            aiRateOfFire = 1e-006;
            sounds[] = { "StandardSound", "SilencedSound" };

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect = "DefaultRifle";

                closure1[] = { "\hlc_wp_aug\snd\f88a1_first", 1, 1, 10 };
                closure2[] = { "\hlc_wp_aug\snd\f88a1_first", 1, 1, 10 };
                soundClosure[] = { closure1, 0.5, closure2, 0.5 };
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                begin1[] = { "\hlc_wp_aug\snd\f88a1_fire", 1, 1, 1200 };
                begin2[] = { "\hlc_wp_aug\snd\f88a1_fire", 1, 1, 1200 };
                begin3[] = { "\hlc_wp_aug\snd\f88a1_fire", 1, 1, 1200 };
                soundBegin[] = { begin1, 0.33, begin2, 0.33, begin3, 0.34 };
                class SoundTails {
                    class TailForest {
                        sound[] = { "\hlc_wp_aug\snd\tails\ar556_forest", 1.1, 1, 1200 };
                        frequency = 1;
                        volume = "(1-interior/1.4)*forest";
                    };
                    class TailInterior {
                        sound[] = { "\hlc_wp_aug\snd\tails\aug_indoor", 1.0, 1, 1200 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                begin1[] = { "\hlc_wp_aug\snd\f88A1_sil", 1, 1, 200 };
                begin2[] = { "\hlc_wp_aug\snd\f88A1_sil", 1, 1, 200 };
                soundBegin[] = { begin1, 0.5, begin2, 0.5 };
                class SoundTails {
                    class TailInterior {
                        sound[] = { "\hlc_wp_aug\snd\tails\aug_sil_indoor", 1.0, 1, 100 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };
        };
        class fullauto_medium : FullAuto {
            showToPlayer = 0;
            burst = 3;
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 75;
            midRangeProbab = 0.7;
            maxRange = 150;
            maxRangeProbab = 0.05;
            aiRateOfFire = 2.0;
            aiRateOfFireDistance = 200;
        };
        class single_medium_optics1 : Single {
            requiredOpticType = 1;
            showToPlayer = 0;
            minRange = 2;
            minRangeProbab = 0.2;
            midRange = 450;
            midRangeProbab = 0.7;
            maxRange = 600;
            maxRangeProbab = 0.2;
            aiRateOfFire = 6;
            aiRateOfFireDistance = 600;
        };
        class single_far_optics2 : single_medium_optics1 {
            requiredOpticType = 2;
            showToPlayer = 0;
            minRange = 100;
            minRangeProbab = 0.1;
            midRange = 500;
            midRangeProbab = 0.6;
            maxRange = 700;
            maxRangeProbab = 0.05;
            aiRateOfFire = 8;
            aiRateOfFireDistance = 700;
        };
        drysound[] = { "hlc_core\sound\empty_assaultrifles", 1, 1, 10 };
        reloadMagazineSound[] = { "hlc_wp_aug\snd\f88a1_reload2", 1, 1, 30 };
    };
    class hlc_barrel_standard : Itemcore {
        dlc = "Niarms_AUG";
        author = "Toadie";
        displayName = "AUG Barrel (Standard)";
        descriptionshort = "Steyr AUG QD-Barrel- 20in. Rifle";
        picture = "\hlc_wp_aug\tex\ui\gear_barrel_standard_ca.paa";
        model = "hlc_wp_aug\mesh\pickup\Standard_barrel.p3d";
        scope = 2;
        class ItemInfo {
            mass = 20;
            type = 201;
        };
    };
    class hlc_barrel_carbine : Itemcore {
        dlc = "Niarms_AUG";
        author = "Toadie";
        displayName = "AUG Barrel (Carbine)";
        descriptionshort = "Steyr AUG QD-Barrel- 16in. Carbine";
        picture = "\hlc_wp_aug\tex\ui\gear_barrel_carbine_ca.paa";
        model = "hlc_wp_aug\mesh\pickup\Carbine_barrel.p3d";
        scope = 2;
        class ItemInfo {
            mass = 17;
            type = 201;
        };
    };
    class hlc_barrel_hbar : Itemcore {
        dlc = "Niarms_AUG";
        author = "Toadie";
        displayName = "AUG Barrel (HBAR)";
        descriptionshort = "Steyr AUG QD-Barrel- 24in. HBAR";
        picture = "\hlc_wp_aug\tex\ui\gear_barrel_hbar_ca.paa";
        model = "hlc_wp_aug\mesh\pickup\HBAR_barrel.p3d";
        scope = 2;
        class ItemInfo  {
            mass = 30;
            type = 201;
        };
    };
    class hlc_barrel_9mm : Itemcore {
        dlc = "Niarms_AUG";
        author = "Toadie";
        descriptionshort = "AUG 9mm Kit";
        displayName = "Steyr AUG 9mm Caliber Conversion Kit";
        picture = "\hlc_wp_aug\tex\ui\gear_barrel_9mm_ca.paa";
        model = "hlc_wp_aug\mesh\pickup\9mm_kit.p3d";
        scope = 2;
        class ItemInfo {
            mass = 20;
            type = 201;
        };
    };

    class hlc_rifle_aug : hlc_aug_base {
        author = "Sarv, Tenoyl, Toadie";
        deployedPivot = "deploypivot";       /// what point should be used to be on surface while unfolded
        hasBipod = false;          /// a weapon with bipod obviously has a bipod
        //    soundBipodDown[] = { "\hlc_wp_ak\snd\rpk_bipodout", db - 3, 1, 20 }; /// sound of unfolding the bipod
        //    soundBipodUp[] = { "\hlc_wp_ak\snd\rpk_bipodin", db - 3, 1, 20 }; /// sound of folding the bipod
        AB_barrelTwist = 9;
        AB_barrelLength = 20;
        AGM_Overheating_Dispersion[] = { 0, 0.001, 0.002, 0.004 };
        AGM_Overheating_SlowdownFactor[] = { 1, 1, 1, 0.9 };
        AGM_Overheating_JamChance[] = { 0, 0.0003, 0.0015, 0.0075 };
        AGM_Overheating_allowSwapBarrel = 1;
        ACE_barrelTwist = 228.6;
        ACE_barrelLength = 508.0;
        inertia = 0.4;
        dexterity = 1.6;
        scope = public;
        magazines[] = { "hlc_30Rnd_556x45_B_AUG", "hlc_30Rnd_556x45_SOST_AUG", "hlc_30Rnd_556x45_SPR_AUG", "hlc_30Rnd_556x45_T_AUG", "hlc_30Rnd_556x45_MDIM_AUG", "hlc_30Rnd_556x45_TDIM_AUG", "hlc_40Rnd_556x45_B_AUG", "hlc_40Rnd_556x45_SOST_AUG", "hlc_40Rnd_556x45_SPR_AUG","hlc_40Rnd_556x45_TDIM_AUG" };
        displayName = "Steyr AUGA1[OD]";
        drysound[] = { "\hlc_wp_aug\snd\clipempty_rifle", 1, 1, 10 };
        model = "hlc_wp_aug\mesh\auga1\auga1.p3d";
        picture = "\hlc_wp_aug\tex\ui\gear_auga1OD_x_ca";
        UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
        descriptionShort = "Assault Rifle<br/>Caliber: 5.56mm NATO";
        handanim[] = { "OFP2_ManSkeleton", "\hlc_wp_aug\gesture\aughands_hands.rtm" };
        reloadAction = "HLC_GestureReloadAUG";
        modes[] = { "FullAuto", "fullauto_medium", "single_medium_optics1", "single_far_optics2" };
        hiddenSelections[] = { "Camo" };
        hiddenSelectionsTextures[] = { "\hlc_wp_aug\tex\steyr_aug_co.paa" };
        bg_bipod = 0;
        //modeloptics = "\hlc_wp_aug\mesh\auga1\reticle_a1";
        optics = 1;
        visionmode[] = { "Normal" };
        HLC_CompatibleBarrels_Classes[]    = { "hlc_rifle_aug", "hlc_rifle_auga1carb", "hlc_rifle_aughbar", "hlc_rifle_augpara" };
        HLC_CurrentBarrel = "hlc_barrel_standard";
        reloadMagazineSound[] = {"hlc_wp_aug\snd\f88a1_reload2",1,1,30};

        class Library {
            libTextDesc = "Steyr AUG A1";
        };
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 72;
            class MuzzleSlot : asdg_MuzzleSlot_556 {};
            class CowsSlot {};
            class ItemInfo {
                priority = 1;
                RMBhint = "XMC";
                onHoverText = "TODO XMC DSS";
            };
        };

        class FullAuto : Mode_FullAuto {
            sounds[] = {"StandardSound","SilencedSound"};

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect  = "DefaultRifle";

                closure1[]={"\hlc_wp_aug\snd\f88a1_first", 1, 1,10};
                closure2[]={"\hlc_wp_aug\snd\f88a1_first", 1, 1,10};
                soundClosure[]={closure1,0.5, closure2,0.5};
            };

            class StandardSound : BaseSoundModeType {/// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "aug_Shot_SoundSet", "aug_Tail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[]={"\hlc_wp_aug\snd\f88a1_fire", 1, 1,1200};
                begin2[]={"\hlc_wp_aug\snd\f88a1_fire", 1, 1,1200};
                begin3[]={"\hlc_wp_aug\snd\f88a1_fire", 1, 1,1200};
                soundBegin[]={begin1,0.33, begin2,0.33, begin3,0.34};
                class SoundTails {
                    class TailForest {
                        sound[] = { "\hlc_wp_aug\snd\tails\ar556_forest", 1.1, 1, 1200 };
                        frequency = 1;
                        volume = "(1-interior/1.4)*forest";
                    };
                    class TailInterior {
                        sound[] = { "\hlc_wp_aug\snd\tails\aug_indoor", 1.0, 1, 1200 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };

            class SilencedSound : BaseSoundModeType {/// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "aug_silencerShot_SoundSet", "aug_silencerTail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[]={"\hlc_wp_aug\snd\f88A1_sil", 1, 1,200};
                begin2[]={"\hlc_wp_aug\snd\f88A1_sil", 1, 1,200};
                soundBegin[]={begin1,0.5, begin2,0.5};
                class SoundTails {
                    class TailInterior {
                        sound[] = { "\hlc_wp_aug\snd\tails\aug_sil_indoor", 1.0, 1, 100 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };
            reloadTime = 0.091;
            begin1[] = {"hlc_wp_aug\snd\f88a1_fire",1.0,1,900};
            begin2[] = {"hlc_wp_aug\snd\f88a1_fire",1.0,1,900};
            soundBegin[] = {"begin1",0.5,"begin2",0.5};
            closure1[] = {"hlc_wp_aug\snd\f88a1_first",3.1622777,1,30};
            closure2[] = {"hlc_wp_aug\snd\f88a1_first",3.1622777,1,30};
            soundClosure[] = {"closure1",0.5,"closure2",0.5};
            recoil = "recoil_auto_mk20";
            recoilProne = "recoil_auto_prone_mk20";
            dispersion = 0.000308356;
            minRange = 0;
            minRangeProbab = 0.03;
            midRange = 75;
            midRangeProbab = 0.005;
            maxRange = 250;
            maxRangeProbab = 0.0003;
        };
        class Single : Mode_SemiAuto {
            sounds[] = {"StandardSound","SilencedSound"};

            class BaseSoundModeType {/// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect  = "DefaultRifle";

                closure1[]={"\hlc_wp_aug\snd\f88a1_first", 1, 1,10};
                closure2[]={"\hlc_wp_aug\snd\f88a1_first", 1, 1,10};
                soundClosure[]={closure1,0.5, closure2,0.5};
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "aug_Shot_SoundSet", "aug_Tail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[]={"\hlc_wp_aug\snd\f88a1_fire", 1, 1,1200};
                begin2[]={"\hlc_wp_aug\snd\f88a1_fire", 1, 1,1200};
                begin3[]={"\hlc_wp_aug\snd\f88a1_fire", 1, 1,1200};
                soundBegin[]={begin1,0.33, begin2,0.33, begin3,0.34};
                class SoundTails {
                    class TailForest {
                        sound[] = { "\hlc_wp_aug\snd\tails\ar556_forest", 1.1, 1, 1200 };
                        frequency = 1;
                        volume = "(1-interior/1.4)*forest";
                    };
                    class TailInterior {
                        sound[] = { "\hlc_wp_aug\snd\tails\aug_indoor", 1.0, 1, 1200 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "aug_silencerShot_SoundSet", "aug_silencerTail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[]={"\hlc_wp_aug\snd\f88A1_sil", 1, 1,200};
                begin2[]={"\hlc_wp_aug\snd\f88A1_sil", 1, 1,200};
                soundBegin[]={begin1,0.5, begin2,0.5};
                class SoundTails {
                    class TailInterior {
                        sound[] = { "\hlc_wp_aug\snd\tails\aug_sil_indoor", 1.0, 1, 100 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };
            reloadTime = 0.091;
            begin1[] = {"hlc_wp_aug\snd\f88a1_fire",1.0,1,900};
            begin2[] = {"hlc_wp_aug\snd\f88a1_fire",1.0,1,900};
            soundBegin[] = {"begin1",0.5,"begin2",0.5};
            closure1[] = {"hlc_wp_aug\snd\f88a1_first",3.1622777,1,30};
            closure2[] = {"hlc_wp_aug\snd\f88a1_first",3.1622777,1,30};
            soundClosure[] = {"closure1",0.5,"closure2",0.5};
            recoil = "recoil_auto_primary_3outof10";
            recoilProne = "recoil_auto_primary_prone_3outof10";
            dispersion = 0.000308356;
            minRange = 0;
            minRangeProbab = 0.03;
            midRange = 75;
            midRangeProbab = 0.005;
            maxRange = 250;
            maxRangeProbab = 0.0003;
        };

        class fullauto_medium : FullAuto {
            showToPlayer = 0;
            burst = 3;
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 75;
            midRangeProbab = 0.7;
            maxRange = 150;
            maxRangeProbab = 0.05;
            aiRateOfFire = 2.0;
            aiRateOfFireDistance = 200;
        };
        class single_medium_optics1 : Single {
            requiredOpticType = 1;
            showToPlayer = 0;
            minRange = 2;
            minRangeProbab = 0.2;
            midRange = 450;
            midRangeProbab = 0.7;
            maxRange = 600;
            maxRangeProbab = 0.2;
            aiRateOfFire = 6;
            aiRateOfFireDistance = 600;
        };
        class single_far_optics2 : single_medium_optics1 {
            requiredOpticType = 2;
            showToPlayer = 0;
            minRange = 100;
            minRangeProbab = 0.1;
            midRange = 500;
            midRangeProbab = 0.6;
            maxRange = 700;
            maxRangeProbab = 0.05;
            aiRateOfFire = 8;
            aiRateOfFireDistance = 700;
        };
        class OpticsModes {
            class ACOG {
                useModelOptics = 0;
                opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
                opticsFlare = 1;
                opticsDisablePeripherialVision = 1;
                opticsZoomInit = 0.166;
                opticsZoomMin = 0.166;
                opticsZoomMax = 0.166;
                distanceZoomMin = 300;
                distanceZoomMax = 300;
                memorypointcamera = "eye";
                opticsid = 1;
                visionmode[] = {"Normal"};
            };
            class Kolimator {
                cameradir = "";
                distancezoommax = 100;
                distancezoommin = 100;
                memorypointcamera = "eye2";
                opticsdisableperipherialvision = 0;
                opticsflare = 0;
                opticsid = 2;
                opticsppeffects[] = {"OpticsCHAbera1", "OpticsBlur1"};
                opticszoominit = 0.75;
                opticszoommax = 1.1;
                opticszoommin = 0.25;
                usemodeloptics = 0;
                visionmode[] = {};
            };
        };
    };
    class hlc_rifle_auga1_t : hlc_rifle_aug {
        author = "Sarv, Tenoyl, Toadie";
        displayName = "Steyr AUGA1[Tan]";
        hiddenSelections[] = { "Camo" };
        hiddenSelectionsTextures[] = { "\hlc_wp_aug\tex\steyr_aug_tan_co.paa" };
        picture = "\hlc_wp_aug\tex\ui\gear_auga1TAN_x_ca";
        HLC_CompatibleBarrels_Classes[] = { "hlc_rifle_auga1_t", "hlc_rifle_auga1carb_t", "hlc_rifle_aughbar_t", "hlc_rifle_augpara_t" };
        HLC_CurrentBarrel = "hlc_barrel_standard";
    };
    class hlc_rifle_auga1_b : hlc_rifle_aug {
        author = "Sarv, Tenoyl, Toadie";
        displayName = "Steyr AUGA1[Black]";
        hiddenSelections[] = { "Camo" };
        hiddenSelectionsTextures[] = { "\hlc_wp_aug\tex\steyr_aug_BLACK_co.paa" };
        picture = "\hlc_wp_aug\tex\ui\gear_auga1carbineblack_x_ca";
        HLC_CompatibleBarrels_Classes[] = { "hlc_rifle_auga1_b", "hlc_rifle_auga1carb_b", "hlc_rifle_aughbar_b", "hlc_rifle_augpara_b" };
        HLC_CurrentBarrel = "hlc_barrel_standard";
    };
    class hlc_rifle_auga1carb : hlc_rifle_aug {
        author = "Sarv, Tenoyl, Toadie";
        AB_barrelTwist = 9;
        AB_barrelLength = 16;
        ACE_barrelTwist = 228.6;
        ACE_barrelLength = 406.4;
        inertia = 0.35;
        dexterity = 1.6;
        AGM_Overheating_Dispersion[] = { 0, 0.001, 0.002, 0.004 };
        AGM_Overheating_SlowdownFactor[] = { 1, 1, 1, 0.9 };
        AGM_Overheating_JamChance[] = { 0, 0.0003, 0.0015, 0.0075 };
        AGM_Overheating_allowSwapBarrel = 1;
        model = "hlc_wp_aug\mesh\auga1\AUGa1_Carbine.p3d";
        picture = "\hlc_wp_aug\tex\ui\gear_auga1carbineOD_x_ca";
        displayName = "Steyr AUGA1 Carbine[OD]";
        hiddenSelections[] = { "Camo" };
        reloadAction = "HLC_GestureReloadAUG";
        reloadMagazineSound[] = { "hlc_wp_aug\snd\f88a1_reload2", 1, 1, 30 };
        hiddenSelectionsTextures[] = { "\hlc_wp_aug\tex\steyr_aug_co.paa" };
        modes[] = { "FullAuto",  "fullauto_medium", "single_medium_optics1", "single_far_optics2" };
        HLC_CompatibleBarrels_Classes[] = { "hlc_rifle_aug", "hlc_rifle_auga1carb", "hlc_rifle_aughbar", "hlc_rifle_augpara" };
        HLC_CurrentBarrel = "hlc_barrel_carbine";
        class FullAuto : Mode_FullAuto {
            sounds[] = { "StandardSound", "SilencedSound" };

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect = "DefaultRifle";

                closure1[] = { "\hlc_wp_aug\snd\f88a1_first", 1, 1, 10 };
                closure2[] = { "\hlc_wp_aug\snd\f88a1_first", 1, 1, 10 };
                soundClosure[] = { closure1, 0.5, closure2, 0.5 };
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "augcarbine_Shot_SoundSet", "augcarbine_Tail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[] = { "\hlc_wp_aug\snd\augcarbine_fire", 1, 1, 1200 };
                begin2[] = { "\hlc_wp_aug\snd\augcarbine_fire", 1, 1, 1200 };
                begin3[] = { "\hlc_wp_aug\snd\augcarbine_fire", 1, 1, 1200 };
                soundBegin[] = { begin1, 0.33, begin2, 0.33, begin3, 0.34 };
                class SoundTails {
                    class TailForest {
                        sound[] = { "\hlc_wp_aug\snd\tails\ar556_forest", 1.1, 1, 1200 };
                        frequency = 1;
                        volume = "(1-interior/1.4)*forest";
                    };
                    class TailInterior {
                        sound[] = { "\hlc_wp_aug\snd\tails\aug_indoor", 1.0, 1, 1200 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "aug_silencerTail_SoundSet", "aug_silencerShot_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[] = { "\hlc_wp_aug\snd\f88A1_sil", 1, 1, 200 };
                begin2[] = { "\hlc_wp_aug\snd\f88A1_sil", 1, 1, 200 };
                soundBegin[] = { begin1, 0.5, begin2, 0.5 };
                class SoundTails {
                    class TailInterior {
                        sound[] = { "\hlc_wp_aug\snd\tails\aug_sil_indoor", 1.0, 1, 100 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };
            reloadTime = 0.091;
            begin1[] = { "hlc_wp_aug\snd\f88a1_fire", 1.0, 1, 900 };
            begin2[] = { "hlc_wp_aug\snd\f88a1_fire", 1.0, 1, 900 };
            soundBegin[] = { "begin1", 0.5, "begin2", 0.5 };
            closure1[] = { "hlc_wp_aug\snd\f88a1_first", 3.1622777, 1, 30 };
            closure2[] = { "hlc_wp_aug\snd\f88a1_first", 3.1622777, 1, 30 };
            soundClosure[] = { "closure1", 0.5, "closure2", 0.5 };
            recoil = "recoil_auto_mk20";
            recoilProne = "recoil_auto_prone_mk20";
            dispersion = 0.000596155;

        };
        class Single : Mode_SemiAuto {
            sounds[] = { "StandardSound", "SilencedSound" };

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect = "DefaultRifle";

                closure1[] = { "\hlc_wp_aug\snd\f88a1_first", 1, 1, 10 };
                closure2[] = { "\hlc_wp_aug\snd\f88a1_first", 1, 1, 10 };
                soundClosure[] = { closure1, 0.5, closure2, 0.5 };
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "augcarbine_Shot_SoundSet", "augcarbine_Tail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[] = { "\hlc_wp_aug\snd\f88a1_fire", 1, 1, 1200 };
                begin2[] = { "\hlc_wp_aug\snd\f88a1_fire", 1, 1, 1200 };
                begin3[] = { "\hlc_wp_aug\snd\f88a1_fire", 1, 1, 1200 };
                soundBegin[] = { begin1, 0.33, begin2, 0.33, begin3, 0.34 };
                class SoundTails {
                    class TailForest {
                        sound[] = { "\hlc_wp_aug\snd\tails\ar556_forest", 1.1, 1, 1200 };
                        frequency = 1;
                        volume = "(1-interior/1.4)*forest";
                    };
                    class TailInterior {
                        sound[] = { "\hlc_wp_aug\snd\tails\aug_indoor", 1.0, 1, 1200 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "aug_silencerShot_SoundSet", "aug_silencerTail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[] = { "\hlc_wp_aug\snd\f88A1_sil", 1, 1, 200 };
                begin2[] = { "\hlc_wp_aug\snd\f88A1_sil", 1, 1, 200 };
                soundBegin[] = { begin1, 0.5, begin2, 0.5 };
                class SoundTails {
                    class TailInterior {
                        sound[] = { "\hlc_wp_aug\snd\tails\aug_sil_indoor", 1.0, 1, 100 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };
            reloadTime = 0.091;
            begin1[] = { "hlc_wp_aug\snd\f88a1_fire", 1.0, 1, 900 };
            begin2[] = { "hlc_wp_aug\snd\f88a1_fire", 1.0, 1, 900 };
            soundBegin[] = { "begin1", 0.5, "begin2", 0.5 };
            closure1[] = { "hlc_wp_aug\snd\f88a1_first", 3.1622777, 1, 30 };
            closure2[] = { "hlc_wp_aug\snd\f88a1_first", 3.1622777, 1, 30 };
            soundClosure[] = { "closure1", 0.5, "closure2", 0.5 };
            recoil = "recoil_auto_primary_3outof10";
            recoilProne = "recoil_auto_primary_prone_3outof10";
            dispersion = 0.000308356;
            minRange = 0;
            minRangeProbab = 0.03;
            midRange = 75;
            midRangeProbab = 0.005;
            maxRange = 250;
            maxRangeProbab = 0.0003;
        };

        class fullauto_medium : FullAuto {
            showToPlayer = 0;
            burst = 3;
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 75;
            midRangeProbab = 0.7;
            maxRange = 150;
            maxRangeProbab = 0.05;
            aiRateOfFire = 2.0;
            aiRateOfFireDistance = 200;
        };
        class single_medium_optics1 : Single {
            requiredOpticType = 1;
            showToPlayer = 0;
            minRange = 2;
            minRangeProbab = 0.2;
            midRange = 450;
            midRangeProbab = 0.7;
            maxRange = 600;
            maxRangeProbab = 0.2;
            aiRateOfFire = 6;
            aiRateOfFireDistance = 600;
        };
        class single_far_optics2 : single_medium_optics1 {
            requiredOpticType = 2;
            showToPlayer = 0;
            minRange = 100;
            minRangeProbab = 0.1;
            midRange = 500;
            midRangeProbab = 0.6;
            maxRange = 700;
            maxRangeProbab = 0.05;
            aiRateOfFire = 8;
            aiRateOfFireDistance = 700;
        };
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 66;
        };
    };
    class hlc_rifle_auga1carb_B : hlc_rifle_auga1carb {
        author = "Sarv, Tenoyl, Toadie";
        model = "hlc_wp_aug\mesh\auga1\AUGa1_Carbine.p3d";
        picture = "\hlc_wp_aug\tex\ui\gear_auga1carbineblack_x_ca";
        displayName = "Steyr AUGA1 Carbine[Black]";
        hiddenSelections[] = { "Camo" };
        hiddenSelectionsTextures[] = { "\hlc_wp_aug\tex\steyr_aug_black_co.paa" };
        modes[] = { "FullAuto", "fullauto_medium", "single_medium_optics1", "single_far_optics2" };
        HLC_CompatibleBarrels_Classes[] = { "hlc_rifle_auga1_b", "hlc_rifle_auga1carb_b", "hlc_rifle_aughbar_b", "hlc_rifle_augpara_b" };
        HLC_CurrentBarrel = "hlc_barrel_carbine";
    };
    class hlc_rifle_auga1carb_t : hlc_rifle_auga1carb {
        author = "Sarv, Tenoyl, Toadie";
        model = "hlc_wp_aug\mesh\auga1\AUGa1_Carbine.p3d";
        picture = "\hlc_wp_aug\tex\ui\gear_auga1carbinetan_x_ca";
        displayName = "Steyr AUGA1 Carbine[Tan]";
        hiddenSelections[] = { "Camo" };
        hiddenSelectionsTextures[] = { "\hlc_wp_aug\tex\steyr_aug_tan_co.paa" };
        modes[] = { "FullAuto", "fullauto_medium", "single_medium_optics1", "single_far_optics2" };
        HLC_CompatibleBarrels_Classes[] = { "hlc_rifle_auga1_t", "hlc_rifle_auga1carb_t", "hlc_rifle_aughbar_t", "hlc_rifle_augpara_t" };
        HLC_CurrentBarrel = "hlc_barrel_carbine";
    };
    class hlc_rifle_aughbar : hlc_rifle_aug {
        deployedPivot = "deploypivot";       /// what point should be used to be on surface while unfolded
        hasBipod = true;          /// a weapon with bipod obviously has a bipod
        soundBipodDown[] = { "A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_down", db - 3, 1, 20 }; /// sound of unfolding the bipod
        soundBipodUp[] = { "A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_up", db - 3, 1, 20 }; /// sound of folding the bipod
        author = "Sarv, Tenoyl, Toadie";
        inertia = 0.51;
        dexterity = 1.6;
        AB_barrelTwist = 9;
        AB_barrelLength = 24;
        ACE_barrelTwist = 228.6;
        ACE_barrelLength = 609.6;
        agm_bipod = 1;
        AGM_Overheating_Dispersion[] = { 0, -0.001, 0.001, 0.003 };
        AGM_Overheating_SlowdownFactor[] = { 1, 1, 1, 0.9 };
        AGM_Overheating_JamChance[] = { 0, 0.0003, 0.0015, 0.0075 };
        AGM_Overheating_allowSwapBarrel = 1;
        bg_bipod = 1;
        cse_bipod = 1;
        tmr_autorest_deployable = 1;
        model = "hlc_wp_aug\mesh\auga1\auga1_hbar.p3d";
        picture = "\hlc_wp_aug\tex\ui\gear_auga1hbarOD_x_ca";
        displayName = "Steyr AUGA1 HBAR[OD]";
        hiddenSelections[] = { "Camo" };
        reloadAction = "HLC_GestureReloadAUG";
        reloadMagazineSound[] = { "hlc_wp_aug\snd\f88a1_reload2", 1, 1, 30 };
        hiddenSelectionsTextures[] = { "\hlc_wp_aug\tex\steyr_aug_co.paa" };
        modes[] = { "FullAuto", "fullauto_medium", "single_medium_optics1", "single_far_optics2" };
        HLC_CompatibleBarrels_Classes[] = { "hlc_rifle_aug", "hlc_rifle_auga1carb", "hlc_rifle_aughbar", "hlc_rifle_augpara" };
        HLC_CurrentBarrel = "hlc_barrel_hbar";
        class FullAuto : Mode_FullAuto {
            sounds[] = { "StandardSound", "SilencedSound" };

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect = "DefaultRifle";

                closure1[] = { "\hlc_wp_aug\snd\f88a1_first", 1, 1, 10 };
                closure2[] = { "\hlc_wp_aug\snd\f88a1_first", 1, 1, 10 };
                soundClosure[] = { closure1, 0.5, closure2, 0.5 };
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "aughbar_Shot_SoundSet", "aughbar_Tail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[] = { "\hlc_wp_aug\snd\HBAR_fire", 1, 1, 1200 };
                begin2[] = { "\hlc_wp_aug\snd\HBAR_fire", 1, 1, 1200 };
                begin3[] = { "\hlc_wp_aug\snd\HBAR_fire", 1, 1, 1200 };
                soundBegin[] = { begin1, 0.33, begin2, 0.33, begin3, 0.34 };
                class SoundTails {
                    class TailForest {
                        sound[] = { "\hlc_wp_aug\snd\tails\ar556_forest", 1.1, 1, 1200 };
                        frequency = 1;
                        volume = "(1-interior/1.4)*forest";
                    };
                    class TailInterior {
                        sound[] = { "\hlc_wp_aug\snd\tails\aug_indoor", 1.0, 1, 1200 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "aug_silencerShot_SoundSet", "aug_silencerTail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[] = { "\hlc_wp_aug\snd\f88A1_sil", 1, 1, 200 };
                begin2[] = { "\hlc_wp_aug\snd\f88A1_sil", 1, 1, 200 };
                soundBegin[] = { begin1, 0.5, begin2, 0.5 };
                class SoundTails {
                    class TailInterior {
                        sound[] = { "\hlc_wp_aug\snd\tails\aug_sil_indoor", 1.0, 1, 100 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };
            reloadTime = 0.091;
            begin1[] = { "hlc_wp_aug\snd\f88a1_fire", 1.0, 1, 900 };
            begin2[] = { "hlc_wp_aug\snd\f88a1_fire", 1.0, 1, 900 };
            soundBegin[] = { "begin1", 0.5, "begin2", 0.5 };
            closure1[] = { "hlc_wp_aug\snd\f88a1_first", 3.1622777, 1, 30 };
            closure2[] = { "hlc_wp_aug\snd\f88a1_first", 3.1622777, 1, 30 };
            soundClosure[] = { "closure1", 0.5, "closure2", 0.5 };
            recoil = "recoil_auto_mk20";
            recoilProne = "recoil_auto_prone_mk20";
            dispersion = 0.000266686;
        };
        class Single : Mode_SemiAuto {
            sounds[] = { "StandardSound", "SilencedSound" };

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect = "DefaultRifle";

                closure1[] = { "\hlc_wp_aug\snd\f88a1_first", 1, 1, 10 };
                closure2[] = { "\hlc_wp_aug\snd\f88a1_first", 1, 1, 10 };
                soundClosure[] = { closure1, 0.5, closure2, 0.5 };
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "aughbar_Shot_SoundSet", "aughbar_Tail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[] = { "\hlc_wp_aug\snd\f88a1_fire", 1, 1, 1200 };
                begin2[] = { "\hlc_wp_aug\snd\f88a1_fire", 1, 1, 1200 };
                begin3[] = { "\hlc_wp_aug\snd\f88a1_fire", 1, 1, 1200 };
                soundBegin[] = { begin1, 0.33, begin2, 0.33, begin3, 0.34 };
                class SoundTails {
                    class TailForest {
                        sound[] = { "\hlc_wp_aug\snd\tails\ar556_forest", 1.1, 1, 1200 };
                        frequency = 1;
                        volume = "(1-interior/1.4)*forest";
                    };
                    class TailInterior {
                        sound[] = { "\hlc_wp_aug\snd\tails\aug_indoor", 1.0, 1, 1200 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "aug_silencerShot_SoundSet", "aug_silencerTail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[] = { "\hlc_wp_aug\snd\f88A1_sil", 1, 1, 200 };
                begin2[] = { "\hlc_wp_aug\snd\f88A1_sil", 1, 1, 200 };
                soundBegin[] = { begin1, 0.5, begin2, 0.5 };
                class SoundTails {
                    class TailInterior {
                        sound[] = { "\hlc_wp_aug\snd\tails\aug_sil_indoor", 1.0, 1, 100 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };
            reloadTime = 0.091;
            begin1[] = { "hlc_wp_aug\snd\f88a1_fire", 1.0, 1, 900 };
            begin2[] = { "hlc_wp_aug\snd\f88a1_fire", 1.0, 1, 900 };
            soundBegin[] = { "begin1", 0.5, "begin2", 0.5 };
            closure1[] = { "hlc_wp_aug\snd\f88a1_first", 3.1622777, 1, 30 };
            closure2[] = { "hlc_wp_aug\snd\f88a1_first", 3.1622777, 1, 30 };
            soundClosure[] = { "closure1", 0.5, "closure2", 0.5 };
            recoil = "recoil_auto_primary_3outof10";
            recoilProne = "recoil_auto_primary_prone_3outof10";
            dispersion = 0.000308356;
            minRange = 0;
            minRangeProbab = 0.03;
            midRange = 75;
            midRangeProbab = 0.005;
            maxRange = 250;
            maxRangeProbab = 0.0003;
        };

        class fullauto_medium : FullAuto {
            showToPlayer = 0;
            burst = 3;
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 75;
            midRangeProbab = 0.7;
            maxRange = 150;
            maxRangeProbab = 0.05;
            aiRateOfFire = 2.0;
            aiRateOfFireDistance = 200;
        };
        class single_medium_optics1 : Single {
            requiredOpticType = 1;
            showToPlayer = 0;
            minRange = 2;
            minRangeProbab = 0.2;
            midRange = 450;
            midRangeProbab = 0.7;
            maxRange = 600;
            maxRangeProbab = 0.2;
            aiRateOfFire = 6;
            aiRateOfFireDistance = 600;
        };
        class single_far_optics2 : single_medium_optics1 {
            requiredOpticType = 2;
            showToPlayer = 0;
            minRange = 100;
            minRangeProbab = 0.1;
            midRange = 500;
            midRangeProbab = 0.6;
            maxRange = 700;
            maxRangeProbab = 0.05;
            aiRateOfFire = 8;
            aiRateOfFireDistance = 700;
        };
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 80;
        };
    };
    class hlc_rifle_aughbar_B : hlc_rifle_aughbar {
        author = "Sarv, Tenoyl, Toadie";
        model = "hlc_wp_aug\mesh\auga1\auga1_hbar.p3d";
        picture = "\hlc_wp_aug\tex\ui\gear_auga1hbarBLACK_x_ca";
        displayName = "Steyr AUGA1 HBAR[Black]";
        hiddenSelections[] = { "Camo" };
        hiddenSelectionsTextures[] = { "\hlc_wp_aug\tex\steyr_aug_black_co.paa" };
        modes[] = { "FullAuto","fullauto_medium", "single_medium_optics1", "single_far_optics2" };
        HLC_CompatibleBarrels_Classes[] = { "hlc_rifle_auga1_b", "hlc_rifle_auga1carb_b", "hlc_rifle_aughbar_b", "hlc_rifle_augpara_b" };
        HLC_CurrentBarrel = "hlc_barrel_hbar";
    };
    class hlc_rifle_aughbar_t : hlc_rifle_aughbar {
        author = "Sarv, Tenoyl, Toadie";
        model = "hlc_wp_aug\mesh\auga1\auga1_hbar.p3d";
        picture = "\hlc_wp_aug\tex\ui\gear_auga1hbarTAN_x_ca";
        displayName = "Steyr AUGA1 HBAR[Tan]";
        hiddenSelections[] = { "Camo" };
        hiddenSelectionsTextures[] = { "\hlc_wp_aug\tex\steyr_aug_tan_co.paa" };
        modes[] = { "FullAuto","fullauto_medium", "single_medium_optics1", "single_far_optics2" };
        HLC_CompatibleBarrels_Classes[] = { "hlc_rifle_auga1_t", "hlc_rifle_auga1carb_t", "hlc_rifle_aughbar_t", "hlc_rifle_augpara_t" };
        HLC_CurrentBarrel = "hlc_barrel_hbar";
    };
    class hlc_rifle_augpara : hlc_aug_base {
        author = "Sarv, Tenoyl, Toadie";
        inertia = 0.3;
        dexterity = 1.6;
        AB_barrelTwist = 9;
        AB_barrelLength = 16.5;
        ACE_barrelTwist = 228.6;
        ACE_barrelLength = 419.1;
        AGM_Overheating_Dispersion[] = { 0, 0.001, 0.002, 0.004 };
        AGM_Overheating_SlowdownFactor[] = { 1, 1, 1, 0.9 };
        AGM_Overheating_JamChance[] = { 0, 0.0003, 0.0015, 0.0075 };
        scope = public;
        UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
        magazines[] = { "hlc_25Rnd_9x19mm_M882_AUG", "hlc_25Rnd_9x19mm_JHP_AUG", "hlc_25Rnd_9x19mm_Subsonic_AUG" };
        displayName = "Steyr AUGA1 9mm[OD]";
        hiddenSelections[] = { "Camo" };
        hiddenSelectionsTextures[] = { "\hlc_wp_aug\tex\steyr_aug_co.paa" };
        model = "hlc_wp_aug\mesh\augSMG\AUGa1.p3d";
        reloadAction = "HLC_GestureReloadAUGPara";
        descriptionShort = "SMG<br/>Caliber: 9x19mm NATO";
        reloadMagazineSound[] = { "hlc_wp_aug\snd\aug-arra_reload", 1, 1, 30 };
        handanim[] = { "OFP2_ManSkeleton", "\hlc_wp_aug\gesture\aughands_hands.rtm" };
        optics = 0;
        picture = "\hlc_wp_aug\tex\ui\gear_aug9mm_x_ca";
        HLC_CompatibleBarrels_Classes[] = { "hlc_rifle_aug", "hlc_rifle_auga1carb", "hlc_rifle_aughbar", "hlc_rifle_augpara" };
        HLC_CurrentBarrel = "hlc_barrel_9mm";
        modes[] = { "FullAuto", "fullauto_medium", "single_medium_optics1", "single_far_optics2" };
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 60;
            class CowsSlot {};
            class MuzzleSlot : niarms_MuzzleSlot_augpara {};
        };
        class FullAuto : Mode_FullAuto {
            sounds[] = { "StandardSound", "SilencedSound" };

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect = "DefaultRifle";

                closure1[] = { "\hlc_wp_aug\snd\aug_para_first", 1, 1, 10 };
                closure2[] = { "\hlc_wp_aug\snd\aug_para_first", 1, 1, 10 };
                soundClosure[] = { closure1, 0.5, closure2, 0.5 };
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "augpara_Shot_SoundSet", "augpara_tail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[] = { "\hlc_wp_aug\snd\aug_para", 1, 1, 1200 };
                begin2[] = { "\hlc_wp_aug\snd\aug_para", 1, 1, 1200 };
                begin3[] = { "\hlc_wp_aug\snd\aug_para", 1, 1, 1200 };
                soundBegin[] = { begin1, 0.33, begin2, 0.33, begin3, 0.34 };
                class SoundTails {
                    class TailForest {
                        sound[] = { "\hlc_wp_aug\snd\tails\aug9mm_forest", 1.1, 1, 1200 };
                        frequency = 1;
                        volume = "(1-interior/1.4)*forest";
                    };
                    class TailInterior {
                        sound[] = { "\hlc_wp_aug\snd\tails\augpara_indoor", 1.0, 1, 1200 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                    soundSetShot[] = { "augpara_silencerShot_SoundSet", "augpara_silencerTail_SoundSet" };
                    //NEW THING PAY ATTENTION
                begin1[] = { "\hlc_wp_aug\snd\aug_para_suppressed", 1, 1, 200 };
                begin2[] = { "\hlc_wp_aug\snd\aug_para_suppressed", 1, 1, 200 };
                soundBegin[] = { begin1, 0.5, begin2, 0.5 };
                class SoundTails {
                    class TailInterior {
                        sound[] = { "\hlc_wp_aug\snd\tails\augpara_sil_indoor", 1.0, 1, 100 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };
            reloadTime = 0.08;
            begin1[] = { "hlc_wp_aug\snd\f88a1_fire", 1.0, 1, 900 };
            begin2[] = { "hlc_wp_aug\snd\f88a1_fire", 1.0, 1, 900 };
            soundBegin[] = { "begin1", 0.5, "begin2", 0.5 };
            closure1[] = { "hlc_wp_aug\snd\f88a1_first", 3.1622777, 1, 30 };
            closure2[] = { "hlc_wp_aug\snd\f88a1_first", 3.1622777, 1, 30 };
            soundClosure[] = { "closure1", 0.5, "closure2", 0.5 };
            recoil = "recoil_auto_primary_3outof10";
            recoilProne = "recoil_auto_primary_prone_3outof10";
            dispersion = 0.001044521;
        };
        class Single : Mode_SemiAuto {
            sounds[] = { "StandardSound", "SilencedSound" };

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect = "DefaultRifle";

                closure1[] = { "\hlc_wp_aug\snd\f88a1_first", 1, 1, 10 };
                closure2[] = { "\hlc_wp_aug\snd\f88a1_first", 1, 1, 10 };
                soundClosure[] = { closure1, 0.5, closure2, 0.5 };
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "augpara_Shot_SoundSet", "augpara_Tail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[] = { "\hlc_wp_aug\snd\f88a1_fire", 1, 1, 1200 };
                begin2[] = { "\hlc_wp_aug\snd\f88a1_fire", 1, 1, 1200 };
                begin3[] = { "\hlc_wp_aug\snd\f88a1_fire", 1, 1, 1200 };
                soundBegin[] = { begin1, 0.33, begin2, 0.33, begin3, 0.34 };
                class SoundTails {
                    class TailForest {
                        sound[] = { "\hlc_wp_aug\snd\tails\ar556_forest", 1.1, 1, 1200 };
                        frequency = 1;
                        volume = "(1-interior/1.4)*forest";
                    };
                    class TailInterior {
                        sound[] = { "\hlc_wp_aug\snd\tails\aug_indoor", 1.0, 1, 1200 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "augpara_silencerShot_SoundSet", "augpara_silencerTail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[] = { "\hlc_wp_aug\snd\f88A1_sil", 1, 1, 200 };
                begin2[] = { "\hlc_wp_aug\snd\f88A1_sil", 1, 1, 200 };
                soundBegin[] = { begin1, 0.5, begin2, 0.5 };
                class SoundTails {
                    class TailInterior {
                        sound[] = { "\hlc_wp_aug\snd\tails\aug_sil_indoor", 1.0, 1, 100 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };
            reloadTime = 0.091;
            begin1[] = { "hlc_wp_aug\snd\f88a1_fire", 1.0, 1, 900 };
            begin2[] = { "hlc_wp_aug\snd\f88a1_fire", 1.0, 1, 900 };
            soundBegin[] = { "begin1", 0.5, "begin2", 0.5 };
            closure1[] = { "hlc_wp_aug\snd\f88a1_first", 3.1622777, 1, 30 };
            closure2[] = { "hlc_wp_aug\snd\f88a1_first", 3.1622777, 1, 30 };
            soundClosure[] = { "closure1", 0.5, "closure2", 0.5 };
            recoil = "recoil_auto_primary_3outof10";
            recoilProne = "recoil_auto_primary_prone_3outof10";
            dispersion = 0.000308356;
            minRange = 0;
            minRangeProbab = 0.03;
            midRange = 75;
            midRangeProbab = 0.005;
            maxRange = 250;
            maxRangeProbab = 0.0003;
        };

        class fullauto_medium : FullAuto {
            showToPlayer = 0;
            burst = 3;
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 75;
            midRangeProbab = 0.7;
            maxRange = 150;
            maxRangeProbab = 0.05;
            aiRateOfFire = 2.0;
            aiRateOfFireDistance = 200;
        };
        class single_medium_optics1 : Single {
            requiredOpticType = 1;
            showToPlayer = 0;
            minRange = 2;
            minRangeProbab = 0.2;
            midRange = 450;
            midRangeProbab = 0.7;
            maxRange = 600;
            maxRangeProbab = 0.2;
            aiRateOfFire = 6;
            aiRateOfFireDistance = 600;
        };
        class single_far_optics2 : single_medium_optics1 {
            requiredOpticType = 2;
            showToPlayer = 0;
            minRange = 100;
            minRangeProbab = 0.1;
            midRange = 500;
            midRangeProbab = 0.6;
            maxRange = 700;
            maxRangeProbab = 0.05;
            aiRateOfFire = 8;
            aiRateOfFireDistance = 700;
        };
        class OpticsModes {
            class ACOG {
                useModelOptics = 0;
                opticsPPEffects[] = { "OpticsCHAbera1", "OpticsBlur1" };
                opticsFlare = 1;
                opticsDisablePeripherialVision = 1;
                opticsZoomInit = 0.166;
                opticsZoomMin = 0.166;
                opticsZoomMax = 0.166;
                distanceZoomMin = 100;
                distanceZoomMax = 100;
                memorypointcamera = "eye";
                opticsid = 1;
                visionmode[] = { "Normal" };
            };
            class Kolimator {
                cameradir = "";
                distancezoommax = 100;
                distancezoommin = 100;
                memorypointcamera = "eye2";
                opticsdisableperipherialvision = 0;
                opticsflare = 0;
                opticsid = 2;
                opticsppeffects[] = { "OpticsCHAbera1", "OpticsBlur1" };
                opticszoominit = 0.75;
                opticszoommax = 1.1;
                opticszoommin = 0.25;
                usemodeloptics = 0;
                visionmode[] = {};
            };
        };
    };
    class hlc_rifle_augpara_b : hlc_rifle_augpara {
        author = "Sarv, Tenoyl, Toadie";
        displayName = "Steyr AUGA1 9mm[Black]";
        hiddenSelections[] = { "Camo" };
        hiddenSelectionsTextures[] = { "\hlc_wp_aug\tex\steyr_aug_BLACK_co.paa" };
        picture = "\hlc_wp_aug\tex\ui\gear_aug9mmBLACK_x_ca";\
        HLC_CompatibleBarrels_Classes[] = { "hlc_rifle_auga1_b", "hlc_rifle_auga1carb_b", "hlc_rifle_aughbar_b", "hlc_rifle_augpara_b" };
        HLC_CurrentBarrel = "hlc_barrel_9mm";
    };
    class hlc_rifle_augpara_t : hlc_rifle_augpara {
        author = "Sarv, Tenoyl, Toadie";
        displayName = "Steyr AUGA1 9mm[Tan]";
        hiddenSelections[] = { "Camo" };
        hiddenSelectionsTextures[] = { "\hlc_wp_aug\tex\steyr_aug_tan_co.paa" };
        picture = "\hlc_wp_aug\tex\ui\gear_aug9mmTAN_x_ca";
        HLC_CompatibleBarrels_Classes[] = { "hlc_rifle_auga1_t", "hlc_rifle_auga1carb_t", "hlc_rifle_aughbar_t", "hlc_rifle_augpara_t" };
        HLC_CurrentBarrel = "hlc_barrel_9mm";
    };

    class hlc_rifle_auga2 : hlc_rifle_aug {
        author = "Sproily, Sarv, Tenoyl, Toadie";
        inertia = 0.37;
        dexterity = 1.6;
        AB_barrelTwist = 9;
        AB_barrelLength = 20;
        ACE_barrelTwist = 228.6;
        ACE_barrelLength = 508.0;
        AGM_Overheating_Dispersion[] = { 0, 0.001, 0.002, 0.004 };
        AGM_Overheating_SlowdownFactor[] = { 1, 1, 1, 0.9 };
        AGM_Overheating_JamChance[] = { 0, 0.0003, 0.0015, 0.0075 };
        AGM_Overheating_allowSwapBarrel = 1;
        scope = public;
        picture = "\hlc_wp_aug\tex\ui\gear_auga2OD_x_ca";
        magazines[] = { "hlc_30Rnd_556x45_B_AUG", "hlc_30Rnd_556x45_SOST_AUG", "hlc_30Rnd_556x45_SPR_AUG", "hlc_30Rnd_556x45_T_AUG", "hlc_30Rnd_556x45_MDIM_AUG", "hlc_30Rnd_556x45_TDIM_AUG", "hlc_40Rnd_556x45_B_AUG", "hlc_40Rnd_556x45_SOST_AUG", "hlc_40Rnd_556x45_SPR_AUG", "hlc_40Rnd_556x45_TDIM_AUG" };
        drysound[] = {"\hlc_wp_aug\snd\clipempty_rifle", 1, 1, 10}; 
        UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
        descriptionShort = "Assault Rifle<br/>Caliber: 5.56mm NATO";
        handanim[] = {"OFP2_ManSkeleton", "\hlc_wp_aug\gesture\aughands_hands.rtm"};
        reloadAction = "HLC_GestureReloadAUG";
        modes[] = { "FullAuto", "fullauto_medium", "single_medium_optics1", "single_far_optics2" };
        HLC_CompatibleBarrels_Classes[] = { "hlc_rifle_auga2", "hlc_rifle_auga2carb", "hlc_rifle_auga2lsw", "hlc_rifle_auga2para" };
        HLC_CurrentBarrel = "hlc_barrel_standard";
        hiddenSelections[] = { "Camo" };
        hiddenSelectionsTextures[] = { "\hlc_wp_aug\tex\steyr_aug_co.paa" };
        bg_bipod = 0;      
        reloadMagazineSound[] = {"hlc_wp_aug\snd\f88a1_reload2",1,1,30};
        displayName = "Steyr AUGA2[OD]";
        class OpticsModes {
            class Kolimator {
                cameradir = "";
                distancezoommax = 100;
                distancezoommin = 100;
                memorypointcamera = "eye";
                opticsdisableperipherialvision = 0;
                opticsflare = 0;
                opticsid = 1;
                opticsppeffects[] = { "OpticsCHAbera1", "OpticsBlur1" };
                opticsZoomMin = 0.375;
                opticsZoomMax = 1.1;
                opticsZoomInit = 0.75;
                usemodeloptics = 0;
                visionmode[] = {};
            };
        };
        discretedistance[] = { 100, 200, 300};
        discretedistanceinitindex = 0;
        model = "hlc_wp_aug\mesh\auga2\auga2_mil.p3d";
        class FullAuto : Mode_FullAuto {
            sounds[] = {"StandardSound","SilencedSound"};

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect  = "DefaultRifle";

                closure1[]={"\hlc_wp_aug\snd\f88a1_first", 1, 1,10};
                closure2[]={"\hlc_wp_aug\snd\f88a1_first", 1, 1,10};
                soundClosure[]={closure1,0.5, closure2,0.5};
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "aug_Shot_SoundSet", "aug_Tail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[]={"\hlc_wp_aug\snd\f88a1_fire", 1, 1,1200};
                begin2[]={"\hlc_wp_aug\snd\f88a1_fire", 1, 1,1200};
                begin3[]={"\hlc_wp_aug\snd\f88a1_fire", 1, 1,1200};
                soundBegin[]={begin1,0.33, begin2,0.33, begin3,0.34};
                class SoundTails {
                    class TailForest {
                        sound[] = { "\hlc_wp_aug\snd\tails\ar556_forest", 1.1, 1, 1200 };
                        frequency = 1;
                        volume = "(1-interior/1.4)*forest";
                    };
                    class TailInterior {
                        sound[] = { "\hlc_wp_aug\snd\tails\aug_indoor", 1.1, 1, 1200 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "aug_silencerShot_SoundSet", "aug_silencerTail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[]={"\hlc_wp_aug\snd\f88A1_sil", 1, 1,200};
                begin2[]={"\hlc_wp_aug\snd\f88A1_sil", 1, 1,200};
                soundBegin[]={begin1,0.5, begin2,0.5};
                class SoundTails {
                    class TailInterior {
                        sound[] = { "\hlc_wp_aug\snd\tails\aug_sil_indoor", 1.0, 1, 100 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };
            reloadTime = 0.091;
            begin1[] = {"hlc_wp_aug\snd\f88a1_fire",1.0,1,900};
            begin2[] = {"hlc_wp_aug\snd\f88a1_fire",1.0,1,900};
            soundBegin[] = {"begin1",0.5,"begin2",0.5};
            closure1[] = {"hlc_wp_aug\snd\f88a1_first",3.1622777,1,30};
            closure2[] = {"hlc_wp_aug\snd\f88a1_first",3.1622777,1,30};
            soundClosure[] = {"closure1",0.5,"closure2",0.5};
            recoil = "recoil_auto_mk20";
            recoilProne = "recoil_auto_prone_mk20";
            dispersion = 0.000308356;
            minRange = 0;
            minRangeProbab = 0.03;
            midRange = 75;
            midRangeProbab = 0.005;
            maxRange = 250;
            maxRangeProbab = 0.0003;
        };
        class Single : Mode_SemiAuto {
            sounds[] = {"StandardSound","SilencedSound"};

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect  = "DefaultRifle";

                closure1[]={"\hlc_wp_aug\snd\f88a1_first", 1, 1,10};
                closure2[]={"\hlc_wp_aug\snd\f88a1_first", 1, 1,10};
                soundClosure[]={closure1,0.5, closure2,0.5};
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "aug_Shot_SoundSet", "aug_Tail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[]={"\hlc_wp_aug\snd\f88a1_fire", 1, 1,1200};
                begin2[]={"\hlc_wp_aug\snd\f88a1_fire", 1, 1,1200};
                begin3[]={"\hlc_wp_aug\snd\f88a1_fire", 1, 1,1200};
                soundBegin[]={begin1,0.33, begin2,0.33, begin3,0.34};
                class SoundTails {
                    class TailForest {
                        sound[] = { "\hlc_wp_aug\snd\tails\ar556_forest", 1.1, 1, 1200 };
                        frequency = 1;
                        volume = "(1-interior/1.4)*forest";
                    };
                    class TailInterior {
                        sound[] = { "\hlc_wp_aug\snd\tails\aug_indoor", 1.0, 1, 1200 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "aug_silencerShot_SoundSet", "aug_silencerTail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[]={"\hlc_wp_aug\snd\f88A1_sil", 1, 1,200};
                begin2[]={"\hlc_wp_aug\snd\f88A1_sil", 1, 1,200};
                soundBegin[]={begin1,0.5, begin2,0.5};
                class SoundTails {
                    class TailInterior {
                        sound[] = { "\hlc_wp_aug\snd\tails\aug_sil_indoor", 1.0, 1, 100 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };
            reloadTime = 0.091;
            begin1[] = {"hlc_wp_aug\snd\f88a1_fire",1.0,1,900};
            begin2[] = {"hlc_wp_aug\snd\f88a1_fire",1.0,1,900};
            soundBegin[] = {"begin1",0.5,"begin2",0.5};
            closure1[] = {"hlc_wp_aug\snd\f88a1_first",3.1622777,1,30};
            closure2[] = {"hlc_wp_aug\snd\f88a1_first",3.1622777,1,30};
            soundClosure[] = {"closure1",0.5,"closure2",0.5};
            recoil = "recoil_single_mk20";
            recoilProne = "recoil_single_prone_mk20";
            dispersion = 0.000308356;
            minRange = 0;
            minRangeProbab = 0.03;
            midRange = 75;
            midRangeProbab = 0.005;
            maxRange = 250;
            maxRangeProbab = 0.0003;
        };

        class fullauto_medium : FullAuto {
            showToPlayer = 0;
            burst = 3;
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 75;
            midRangeProbab = 0.7;
            maxRange = 150;
            maxRangeProbab = 0.05;
            aiRateOfFire = 2.0;
            aiRateOfFireDistance = 200;
        };
        class single_medium_optics1 : Single {
            requiredOpticType = 1;
            showToPlayer = 0;
            minRange = 2;
            minRangeProbab = 0.2;
            midRange = 450;
            midRangeProbab = 0.7;
            maxRange = 600;
            maxRangeProbab = 0.2;
            aiRateOfFire = 6;
            aiRateOfFireDistance = 600;
        };
        class single_far_optics2 : single_medium_optics1 {
            requiredOpticType = 2;
            showToPlayer = 0;
            minRange = 100;
            minRangeProbab = 0.1;
            midRange = 500;
            midRangeProbab = 0.6;
            maxRange = 700;
            maxRangeProbab = 0.05;
            aiRateOfFire = 8;
            aiRateOfFireDistance = 700;
        };
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 72;
            class CowsSlot: asdg_OpticRail1913_short {};
        };
        class Library {
            libTextDesc = "Steyr AUG A2";
        };
    };
    class hlc_rifle_auga2_t : hlc_rifle_auga2 {
        author = "Sproily, Sarv, Tenoyl, Toadie";
        displayName = "Steyr AUGA2[Tan]";
        hiddenSelections[] = { "Camo" };
        hiddenSelectionsTextures[] = { "\hlc_wp_aug\tex\steyr_aug_tan_co.paa" };
        picture = "\hlc_wp_aug\tex\ui\gear_auga2TAN_x_ca";
        HLC_CompatibleBarrels_Classes[] = { "hlc_rifle_auga2_t", "hlc_rifle_auga2carb_t", "hlc_rifle_auga2lsw_T", "hlc_rifle_auga2para_T" };
        HLC_CurrentBarrel = "hlc_barrel_standard";
    };
    class hlc_rifle_auga2_b : hlc_rifle_auga2 {
        author = "Sproily, Sarv, Tenoyl, Toadie";
        displayName = "Steyr AUGA2[Black]";
        hiddenSelections[] = { "Camo" };
        hiddenSelectionsTextures[] = { "\hlc_wp_aug\tex\steyr_aug_BLACK_co.paa" };
        picture = "\hlc_wp_aug\tex\ui\gear_auga2TAN_x_ca";
        HLC_CompatibleBarrels_Classes[] = { "hlc_rifle_auga2_b", "hlc_rifle_auga2carb_B", "hlc_rifle_auga2lsw_B", "hlc_rifle_auga2para_b" };
        HLC_CurrentBarrel = "hlc_barrel_standard";
    };
    class hlc_rifle_augsr : hlc_rifle_auga2 {
        author = "Sproily, Sarv, Tenoyl, Toadie";
        AGM_Overheating_Dispersion[] = { 0, 0.001, 0.002, 0.004 };
        AGM_Overheating_SlowdownFactor[] = { 1, 1, 1, 0.9 };
        AGM_Overheating_JamChance[] = { 0, 0.0003, 0.0015, 0.0075 };
        AGM_Overheating_allowSwapBarrel = 1;
        magazines[] = { "hlc_30Rnd_556x45_B_AUG", "hlc_30Rnd_556x45_SOST_AUG", "hlc_30Rnd_556x45_SPR_AUG", "hlc_30Rnd_556x45_T_AUG", "hlc_30Rnd_556x45_MDIM_AUG", "hlc_30Rnd_556x45_TDIM_AUG", "hlc_40Rnd_556x45_B_AUG", "hlc_40Rnd_556x45_SOST_AUG", "hlc_40Rnd_556x45_SPR_AUG", "hlc_40Rnd_556x45_TDIM_AUG" };
        drysound[] = { "\hlc_wp_aug\snd\clipempty_rifle", 1, 1, 10 };
        UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
        descriptionShort = "Assault Rifle<br/>Caliber: 5.56mm NATO";
        handanim[] = { "OFP2_ManSkeleton", "\hlc_wp_aug\gesture\aughands_hands.rtm" };
        reloadAction = "HLC_GestureReloadAUG";
        modes[] = { "Single","single_medium_optics1", "single_far_optics2" };
        HLC_CompatibleBarrels_Classes[] = { "hlc_rifle_augsr", "hlc_rifle_augsrcarb", "hlc_rifle_augsrhbar"};
        HLC_CurrentBarrel = "hlc_barrel_standard";
        hiddenSelections[] = { "Camo" };
        hiddenSelectionsTextures[] = { "\hlc_wp_aug\tex\steyr_aug_co.paa" };
        bg_bipod = 0;
        reloadMagazineSound[] = { "hlc_wp_aug\snd\f88a1_reload2", 1, 1, 30 };
        displayName = "Steyr AUG-SR[OD]";
        model = "hlc_wp_aug\mesh\auga2\auga2.p3d";
    };
    class hlc_rifle_augsr_t : hlc_rifle_augsr {
        author = "Sproily, Sarv, Tenoyl, Toadie";
        displayName = "Steyr AUG-SR[Tan]";
        hiddenSelections[] = { "Camo" };
        hiddenSelectionsTextures[] = { "\hlc_wp_aug\tex\steyr_aug_tan_co.paa" };
        picture = "\hlc_wp_aug\tex\ui\gear_auga2TAN_x_ca";
        HLC_CompatibleBarrels_Classes[] = { "hlc_rifle_augsr_t", "hlc_rifle_augsrcarb_t", "hlc_rifle_augsrhbar_t" };
        HLC_CurrentBarrel = "hlc_barrel_standard";
    };
    class hlc_rifle_augsr_b : hlc_rifle_augsr {
        author = "Sproily, Sarv, Tenoyl, Toadie";
        displayName = "Steyr AUG-SR[Black]";
        hiddenSelections[] = { "Camo" };
        hiddenSelectionsTextures[] = { "\hlc_wp_aug\tex\steyr_aug_BLACK_co.paa" };
        picture = "\hlc_wp_aug\tex\ui\gear_auga2TAN_x_ca";
        HLC_CompatibleBarrels_Classes[] = { "hlc_rifle_augsr_b", "hlc_rifle_augsrcarb_B", "hlc_rifle_augsrhbar_B" };
        HLC_CurrentBarrel = "hlc_barrel_standard";
    };
    class hlc_rifle_auga2para : hlc_aug_base {
        author = "Sproily, Sarv, Tenoyl, Toadie";
        AGM_Overheating_Dispersion[] = { 0, 0.001, 0.002, 0.004 };
        AGM_Overheating_SlowdownFactor[] = { 1, 1, 1, 0.9 };
        AGM_Overheating_JamChance[] = { 0, 0.0003, 0.0015, 0.0075 };
        AGM_Overheating_allowSwapBarrel = 1;
        scope = public;
        inertia = 0.28;
        dexterity = 1.6;
        AB_barrelTwist = 9;
        AB_barrelLength = 16.5;
        ACE_barrelTwist = 228.6;
        ACE_barrelLength = 419.1;
        magazines[] = { "hlc_25Rnd_9x19mm_M882_AUG", "hlc_25Rnd_9x19mm_JHP_AUG","hlc_25Rnd_9x19mm_Subsonic_AUG" };
        displayName = "Steyr AUGA2 9mm[OD]";
        hiddenSelections[] = { "Camo" };
        handanim[] = { "OFP2_ManSkeleton", "\hlc_wp_aug\gesture\aughands_hands.rtm" };
        hiddenSelectionsTextures[] = { "\hlc_wp_aug\tex\steyr_aug_co.paa" };
        model = "hlc_wp_aug\mesh\augSMG\AUGa2.p3d";
        reloadAction = "HLC_GestureReloadAUGPara";
        modes[] = { "FullAuto", "fullauto_medium", "single_medium_optics1", "single_far_optics2" };
        HLC_CompatibleBarrels_Classes[] = { "hlc_rifle_auga2", "hlc_rifle_auga2carb", "hlc_rifle_auga2lsw", "hlc_rifle_auga2para" };
        HLC_CurrentBarrel = "hlc_barrel_9mm";
        reloadMagazineSound[] = { "hlc_wp_aug\snd\aug-arra_reload", 1, 1, 30 };
        descriptionShort = "SMG<br/>Caliber: 9x19mm NATO";
        optics = 0;
        class OpticsModes {
            class Kolimator {
                cameradir = "";
                distancezoommax = 100;
                distancezoommin = 100;
                memorypointcamera = "eye";
                opticsdisableperipherialvision = 0;
                opticsflare = 0;
                opticsid = 1;
                opticsppeffects[] = { "OpticsCHAbera1", "OpticsBlur1" };
                opticszoominit = 0.75;
                opticszoommax = 1.1;
                opticszoommin = 0.25;
                usemodeloptics = 0;
                visionmode[] = {};
            };
        };
        discretedistance[] = { 100};
        discretedistanceinitindex = 0;
        picture = "\hlc_wp_aug\tex\ui\gear_aug9mmA2_x_ca";
        class FullAuto : Mode_FullAuto {
            sounds[] = { "StandardSound", "SilencedSound" };

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect = "DefaultRifle";

                closure1[] = { "\hlc_wp_aug\snd\aug_para_first", 1, 1, 10 };
                closure2[] = { "\hlc_wp_aug\snd\aug_para_first", 1, 1, 10 };
                soundClosure[] = { closure1, 0.5, closure2, 0.5 };
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "augpara_Shot_SoundSet", "augpara_Tail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[] = { "\hlc_wp_aug\snd\aug_para", 1, 1, 1200 };
                begin2[] = { "\hlc_wp_aug\snd\aug_para", 1, 1, 1200 };
                begin3[] = { "\hlc_wp_aug\snd\aug_para", 1, 1, 1200 };
                soundBegin[] = { begin1, 0.33, begin2, 0.33, begin3, 0.34 };
                class SoundTails {
                    class TailForest {
                        sound[] = { "\hlc_wp_aug\snd\tails\aug9mm_forest", 1.1, 1, 1200 };
                        frequency = 1;
                        volume = "(1-interior/1.4)*forest";
                    };
                    class TailInterior {
                        sound[] = { "\hlc_wp_aug\snd\tails\augpara_indoor", 1.0, 1, 1200 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "augpara_silencerShot_SoundSet", "augpara_silencerTail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[] = { "\hlc_wp_aug\snd\aug_para_suppressed", 1, 1, 200 };
                begin2[] = { "\hlc_wp_aug\snd\aug_para_suppressed", 1, 1, 200 };
                soundBegin[] = { begin1, 0.5, begin2, 0.5 };
                class SoundTails {
                    class TailInterior {
                        sound[] = { "\hlc_wp_aug\snd\tails\augpara_sil_indoor", 1.0, 1, 100 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };
            reloadTime = 0.08;
            begin1[] = { "hlc_wp_aug\snd\f88a1_fire", 1.0, 1, 900 };
            begin2[] = { "hlc_wp_aug\snd\f88a1_fire", 1.0, 1, 900 };
            soundBegin[] = { "begin1", 0.5, "begin2", 0.5 };
            closure1[] = { "hlc_wp_aug\snd\f88a1_first", 3.1622777, 1, 30 };
            closure2[] = { "hlc_wp_aug\snd\f88a1_first", 3.1622777, 1, 30 };
            soundClosure[] = { "closure1", 0.5, "closure2", 0.5 };
            recoil = "recoil_auto_primary_3outof10";
            recoilProne = "recoil_auto_primary_prone_3outof10";
            dispersion = 0.001044521;
        };
        class Single : Mode_SemiAuto {
            sounds[] = { "StandardSound", "SilencedSound" };

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect = "DefaultRifle";

                closure1[] = { "\hlc_wp_aug\snd\f88a1_first", 1, 1, 10 };
                closure2[] = { "\hlc_wp_aug\snd\f88a1_first", 1, 1, 10 };
                soundClosure[] = { closure1, 0.5, closure2, 0.5 };
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "augpara_Shot_SoundSet", "augpara_Tail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[] = { "\hlc_wp_aug\snd\f88a1_fire", 1, 1, 1200 };
                begin2[] = { "\hlc_wp_aug\snd\f88a1_fire", 1, 1, 1200 };
                begin3[] = { "\hlc_wp_aug\snd\f88a1_fire", 1, 1, 1200 };
                soundBegin[] = { begin1, 0.33, begin2, 0.33, begin3, 0.34 };
                class SoundTails {
                    class TailForest {
                        sound[] = { "\hlc_wp_aug\snd\tails\ar556_forest", 1.1, 1, 1200 };
                        frequency = 1;
                        volume = "(1-interior/1.4)*forest";
                    };
                    class TailInterior {
                        sound[] = { "\hlc_wp_aug\snd\tails\aug_indoor", 1.0, 1, 1200 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "augpara_silencerShot_SoundSet", "augpara_silencerTail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[] = { "\hlc_wp_aug\snd\f88A1_sil", 1, 1, 200 };
                begin2[] = { "\hlc_wp_aug\snd\f88A1_sil", 1, 1, 200 };
                soundBegin[] = { begin1, 0.5, begin2, 0.5 };
                class SoundTails {
                    class TailInterior {
                        sound[] = { "\hlc_wp_aug\snd\tails\aug_sil_indoor", 1.0, 1, 100 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };
            reloadTime = 0.091;
            begin1[] = { "hlc_wp_aug\snd\f88a1_fire", 1.0, 1, 900 };
            begin2[] = { "hlc_wp_aug\snd\f88a1_fire", 1.0, 1, 900 };
            soundBegin[] = { "begin1", 0.5, "begin2", 0.5 };
            closure1[] = { "hlc_wp_aug\snd\f88a1_first", 3.1622777, 1, 30 };
            closure2[] = { "hlc_wp_aug\snd\f88a1_first", 3.1622777, 1, 30 };
            soundClosure[] = { "closure1", 0.5, "closure2", 0.5 };
            recoil = "recoil_auto_primary_3outof10";
            recoilProne = "recoil_auto_primary_prone_3outof10";
            dispersion = 0.000308356;
            minRange = 0;
            minRangeProbab = 0.03;
            midRange = 75;
            midRangeProbab = 0.005;
            maxRange = 250;
            maxRangeProbab = 0.0003;
        };
        class fullauto_medium : FullAuto {
            showToPlayer = 0;
            burst = 3;
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 75;
            midRangeProbab = 0.7;
            maxRange = 150;
            maxRangeProbab = 0.05;
            aiRateOfFire = 2.0;
            aiRateOfFireDistance = 200;
        };
        class single_medium_optics1 : Single {
            requiredOpticType = 1;
            showToPlayer = 0;
            minRange = 2;
            minRangeProbab = 0.2;
            midRange = 450;
            midRangeProbab = 0.7;
            maxRange = 600;
            maxRangeProbab = 0.2;
            aiRateOfFire = 6;
            aiRateOfFireDistance = 600;
        };
        class single_far_optics2 : single_medium_optics1 {
            requiredOpticType = 2;
            showToPlayer = 0;
            minRange = 100;
            minRangeProbab = 0.1;
            midRange = 500;
            midRangeProbab = 0.6;
            maxRange = 700;
            maxRangeProbab = 0.05;
            aiRateOfFire = 8;
            aiRateOfFireDistance = 700;
        };
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 60;
            class MuzzleSlot : niarms_MuzzleSlot_augpara {};
            class CowsSlot : asdg_OpticRail1913_short {};
        };
        class Library {
            libTextDesc = "Steyr AUG A2";
        };
    };
    class hlc_rifle_auga2para_t : hlc_rifle_auga2para {
        author = "Sproily, Sarv, Tenoyl, Toadie";
        displayName = "Steyr AUGA2 9mm[Tan]";
        hiddenSelections[] = { "Camo" };
        hiddenSelectionsTextures[] = { "\hlc_wp_aug\tex\steyr_aug_tan_co.paa" };
        picture = "\hlc_wp_aug\tex\ui\gear_aug9mmA2TAN_x_ca";
        HLC_CompatibleBarrels_Classes[] = { "hlc_rifle_auga2_t", "hlc_rifle_auga2carb_t", "hlc_rifle_auga2lsw_T", "hlc_rifle_auga2para_T" };
        HLC_CurrentBarrel = "hlc_barrel_9mm";
    };
    class hlc_rifle_auga2para_b : hlc_rifle_auga2para {
        author = "Sproily, Sarv, Tenoyl, Toadie";
        displayName = "Steyr AUGA2 9mm[Black]";
        hiddenSelections[] = { "Camo" };
        hiddenSelectionsTextures[] = { "\hlc_wp_aug\tex\steyr_aug_BLACK_co.paa" };
        picture = "\hlc_wp_aug\tex\ui\gear_aug9mmA2BLACK_x_ca";
        HLC_CompatibleBarrels_Classes[] = { "hlc_rifle_auga2_b", "hlc_rifle_auga2carb_B", "hlc_rifle_auga2lsw_B", "hlc_rifle_auga2para_b" };
        HLC_CurrentBarrel = "hlc_barrel_9mm";
    };
    class hlc_rifle_auga2carb : hlc_rifle_auga2 {
        author = "Sproily, Sarv, Tenoyl, Toadie";
        inertia = 0.34;
        dexterity = 1.6;
        AB_barrelTwist = 9;
        AB_barrelLength = 18;
        ACE_barrelTwist = 228.6;
        ACE_barrelLength = 457.2;
        AGM_Overheating_Dispersion[] = { 0, 0.001, 0.002, 0.004 };
        AGM_Overheating_SlowdownFactor[] = { 1, 1, 1, 0.9 };
        AGM_Overheating_JamChance[] = { 0, 0.0003, 0.0015, 0.0075 };
        AGM_Overheating_allowSwapBarrel = 1;
        displayName = "Steyr AUGA2 Carbine[OD]";
        model = "hlc_wp_aug\mesh\auga2\AUGa2_carbine.p3d";
        HLC_CompatibleBarrels_Classes[] = { "hlc_rifle_auga2", "hlc_rifle_auga2carb", "hlc_rifle_auga2lsw", "hlc_rifle_auga2para" };
        HLC_CurrentBarrel = "hlc_barrel_carbine";
        picture = "\hlc_wp_aug\tex\ui\gear_auga2carbineOD_x_ca";
        hiddenSelections[] = { "Camo" };
        hiddenSelectionsTextures[] = { "\hlc_wp_aug\tex\steyr_aug_co.paa" };
        class FullAuto : Mode_FullAuto {
            sounds[] = { "StandardSound", "SilencedSound" };

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect = "DefaultRifle";

                closure1[] = { "\hlc_wp_aug\snd\f88a1_first", 1, 1, 10 };
                closure2[] = { "\hlc_wp_aug\snd\f88a1_first", 1, 1, 10 };
                soundClosure[] = { closure1, 0.5, closure2, 0.5 };
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "augcarbine_Shot_SoundSet", "augcarbine_Tail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[] = { "\hlc_wp_aug\snd\augcarbine_fire", 1, 1, 1200 };
                begin2[] = { "\hlc_wp_aug\snd\augcarbine_fire", 1, 1, 1200 };
                begin3[] = { "\hlc_wp_aug\snd\augcarbine_fire", 1, 1, 1200 };
                soundBegin[] = { begin1, 0.33, begin2, 0.33, begin3, 0.34 };
                class SoundTails {
                    class TailForest {
                        sound[] = { "\hlc_wp_aug\snd\tails\ar556_forest", 1.1, 1, 1200 };
                        frequency = 1;
                        volume = "(1-interior/1.4)*forest";
                    };
                    class TailInterior {
                        sound[] = { "\hlc_wp_aug\snd\tails\aug_indoor", 1.0, 1, 1200 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "aug_silencerTail_SoundSet", "aug_silencerShot_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[] = { "\hlc_wp_aug\snd\f88A1_sil", 1, 1, 200 };
                begin2[] = { "\hlc_wp_aug\snd\f88A1_sil", 1, 1, 200 };
                soundBegin[] = { begin1, 0.5, begin2, 0.5 };
                class SoundTails {
                        class TailInterior {
                            sound[] = { "\hlc_wp_aug\snd\tails\aug_sil_indoor", 1.0, 1, 100 };
                            frequency = 1;
                            volume = "interior";
                        };
                    };
            };
            reloadTime = 0.091;
            begin1[] = { "hlc_wp_aug\snd\f88a1_fire", 1.0, 1, 900 };
            begin2[] = { "hlc_wp_aug\snd\f88a1_fire", 1.0, 1, 900 };
            soundBegin[] = { "begin1", 0.5, "begin2", 0.5 };
            closure1[] = { "hlc_wp_aug\snd\f88a1_first", 3.1622777, 1, 30 };
            closure2[] = { "hlc_wp_aug\snd\f88a1_first", 3.1622777, 1, 30 };
            soundClosure[] = { "closure1", 0.5, "closure2", 0.5 };
            recoil = "recoil_auto_mk20";
            recoilProne = "recoil_auto_prone_mk20";
            dispersion = 0.000555596;
        };
        class Single : Mode_SemiAuto {
            sounds[] = { "StandardSound", "SilencedSound" };

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect = "DefaultRifle";

                closure1[] = { "\hlc_wp_aug\snd\f88a1_first", 1, 1, 10 };
                closure2[] = { "\hlc_wp_aug\snd\f88a1_first", 1, 1, 10 };
                soundClosure[] = { closure1, 0.5, closure2, 0.5 };
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "augcarbine_Shot_SoundSet", "augcarbine_Tail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[] = { "\hlc_wp_aug\snd\augcarbine_fire", 1, 1, 1200 };
                begin2[] = { "\hlc_wp_aug\snd\augcarbine_fire", 1, 1, 1200 };
                begin3[] = { "\hlc_wp_aug\snd\augcarbine_fire", 1, 1, 1200 };
                soundBegin[] = { begin1, 0.33, begin2, 0.33, begin3, 0.34 };
                class SoundTails {
                    class TailForest {
                        sound[] = { "\hlc_wp_aug\snd\tails\ar556_forest", 1.1, 1, 1200 };
                        frequency = 1;
                        volume = "(1-interior/1.4)*forest";
                    };
                    class TailInterior {
                        sound[] = { "\hlc_wp_aug\snd\tails\aug_indoor", 1.0, 1, 1200 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "aug_silencerTail_SoundSet", "aug_silencerShot_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[] = { "\hlc_wp_aug\snd\f88A1_sil", 1, 1, 200 };
                begin2[] = { "\hlc_wp_aug\snd\f88A1_sil", 1, 1, 200 };
                soundBegin[] = { begin1, 0.5, begin2, 0.5 };
                class SoundTails {
                        class TailInterior {
                            sound[] = { "\hlc_wp_aug\snd\tails\aug_sil_indoor", 1.0, 1, 100 };
                            frequency = 1;
                            volume = "interior";
                        };
                    };
            };
            reloadTime = 0.091;
            begin1[] = { "hlc_wp_aug\snd\f88a1_fire", 1.0, 1, 900 };
            begin2[] = { "hlc_wp_aug\snd\f88a1_fire", 1.0, 1, 900 };
            soundBegin[] = { "begin1", 0.5, "begin2", 0.5 };
            closure1[] = { "hlc_wp_aug\snd\f88a1_first", 3.1622777, 1, 30 };
            closure2[] = { "hlc_wp_aug\snd\f88a1_first", 3.1622777, 1, 30 };
            soundClosure[] = { "closure1", 0.5, "closure2", 0.5 };
            recoil = "recoil_single_mk20";
            recoilProne = "recoil_single_prone_mk20";
            dispersion = 0.000555596;
        };

        class fullauto_medium : FullAuto {
            showToPlayer = 0;
            burst = 3;
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 75;
            midRangeProbab = 0.7;
            maxRange = 150;
            maxRangeProbab = 0.05;
            aiRateOfFire = 2.0;
            aiRateOfFireDistance = 200;
        };
        class single_medium_optics1 : Single {
            requiredOpticType = 1;
            showToPlayer = 0;
            minRange = 2;
            minRangeProbab = 0.2;
            midRange = 450;
            midRangeProbab = 0.7;
            maxRange = 600;
            maxRangeProbab = 0.2;
            aiRateOfFire = 6;
            aiRateOfFireDistance = 600;
        };
        class single_far_optics2 : single_medium_optics1 {
            requiredOpticType = 2;
            showToPlayer = 0;
            minRange = 100;
            minRangeProbab = 0.1;
            midRange = 500;
            midRangeProbab = 0.6;
            maxRange = 700;
            maxRangeProbab = 0.05;
            aiRateOfFire = 8;
            aiRateOfFireDistance = 700;
        };
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 66;
        };
    };
    class hlc_rifle_auga2carb_t : hlc_rifle_auga2carb {
        author = "Sproily, Sarv, Tenoyl, Toadie";
        displayName = "Steyr AUGA2 Carbine[Tan]";
        hiddenSelections[] = { "Camo" };
        hiddenSelectionsTextures[] = { "\hlc_wp_aug\tex\steyr_aug_tan_co.paa" };
        picture = "\hlc_wp_aug\tex\ui\gear_auga2carbineTAN_x_ca";
        HLC_CompatibleBarrels_Classes[] = { "hlc_rifle_auga2_t", "hlc_rifle_auga2carb_t", "hlc_rifle_auga2lsw_T", "hlc_rifle_auga2para_T" };
        HLC_CurrentBarrel = "hlc_barrel_carbine";

    };
    class hlc_rifle_auga2carb_b : hlc_rifle_auga2carb {
        author = "Sproily, Sarv, Tenoyl, Toadie";
        displayName = "Steyr AUGA2 Carbine[Black]";
        hiddenSelections[] = { "Camo" };
        hiddenSelectionsTextures[] = { "\hlc_wp_aug\tex\steyr_aug_BLACK_co.paa" };
        picture = "\hlc_wp_aug\tex\ui\gear_auga2carbineBLACK_x_ca";
        HLC_CompatibleBarrels_Classes[] = { "hlc_rifle_auga2_b", "hlc_rifle_auga2carb_B", "hlc_rifle_auga2lsw_B", "hlc_rifle_auga2para_b" };
        HLC_CurrentBarrel = "hlc_barrel_carbine";
    };
    class hlc_rifle_augsrcarb : hlc_rifle_auga2carb {
        author = "Sproily, Sarv, Tenoyl, Toadie";
        modes[] = { "Single", "single_medium_optics1", "single_far_optics2" };
        model = "hlc_wp_aug\mesh\auga2\augsr_carbine.p3d";
        hiddenSelections[] = { "Camo" };
        hiddenSelectionsTextures[] = { "\hlc_wp_aug\tex\steyr_aug_co.paa" };
        bg_bipod = 0;
        reloadMagazineSound[] = { "hlc_wp_aug\snd\f88a1_reload2", 1, 1, 30 };
        HLC_CompatibleBarrels_Classes[] = { "hlc_rifle_augsr", "hlc_rifle_augsrcarb", "hlc_rifle_augsrhbar" };
        HLC_CurrentBarrel = "hlc_barrel_carbine";
        displayName = "Steyr AUG-SR Carbine[OD]";
    };
    class hlc_rifle_augsrcarb_t : hlc_rifle_augsrcarb {
        author = "Sproily, Sarv, Tenoyl, Toadie";
        displayName = "Steyr AUGA-SR Carbine[Tan]";
        hiddenSelections[] = { "Camo" };
        hiddenSelectionsTextures[] = { "\hlc_wp_aug\tex\steyr_aug_tan_co.paa" };
        picture = "\hlc_wp_aug\tex\ui\gear_auga2carbineTAN_x_ca";
        HLC_CompatibleBarrels_Classes[] = { "hlc_rifle_augsr_t", "hlc_rifle_augsrcarb_t", "hlc_rifle_augsrhbar_t" };
        HLC_CurrentBarrel = "hlc_barrel_carbine";
    };
    class hlc_rifle_augsrcarb_b : hlc_rifle_augsrcarb {
        author = "Sproily, Sarv, Tenoyl, Toadie";
        displayName = "Steyr AUG-SR Carbine[Black]";
        hiddenSelections[] = { "Camo" };
        hiddenSelectionsTextures[] = { "\hlc_wp_aug\tex\steyr_aug_BLACK_co.paa" };
        picture = "\hlc_wp_aug\tex\ui\gear_auga2carbineBLACK_x_ca";
        HLC_CompatibleBarrels_Classes[] = { "hlc_rifle_augsr_b", "hlc_rifle_augsrcarb_B", "hlc_rifle_augsrhbar_B" };
        HLC_CurrentBarrel = "hlc_barrel_carbine";
    };
    class hlc_rifle_auga2lsw : hlc_rifle_aughbar {
        author = "Sproily, Sarv, Tenoyl, Toadie";
        deployedPivot = "deploypivot";       /// what point should be used to be on surface while unfolded
        hasBipod = true;          /// a weapon with bipod obviously has a bipod
        soundBipodDown[] = { "A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_down", db - 3, 1, 20 }; /// sound of unfolding the bipod
        soundBipodUp[] = { "A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_up", db - 3, 1, 20 }; /// sound of folding the bipod
        inertia = 0.49;
        dexterity = 1.6;
        AB_barrelTwist = 9;
        AB_barrelLength = 24;
        ACE_barrelTwist = 228.6;
        ACE_barrelLength = 609.6;
        agm_bipod = 1;
        AGM_Overheating_Dispersion[] = { 0, 0.001, 0.002, 0.004 };
        AGM_Overheating_SlowdownFactor[] = { 1, 1, 1, 0.9 };
        AGM_Overheating_JamChance[] = { 0, 0.0003, 0.0015, 0.0075 };
        AGM_Overheating_allowSwapBarrel = 1;
        bg_bipod = 1;
        cse_bipod = 1;
        model = "hlc_wp_aug\mesh\auga2\auga2_hbar.p3d";
        displayName = "Steyr AUGA2 HBAR[OD]";    
        picture = "\hlc_wp_aug\tex\ui\gear_auga2hbarOD_x_ca";
        hiddenSelections[] = { "Camo" };
        hiddenSelectionsTextures[] = { "\hlc_wp_aug\tex\steyr_aug_co.paa" };
        HLC_CompatibleBarrels_Classes[] = { "hlc_rifle_auga2", "hlc_rifle_auga2carb", "hlc_rifle_auga2lsw", "hlc_rifle_auga2para" };
        HLC_CurrentBarrel = "hlc_barrel_hbar";
        class OpticsModes {
            class Kolimator {
                cameradir = "";
                distancezoommax = 100;
                distancezoommin = 100;
                memorypointcamera = "eye";
                opticsdisableperipherialvision = 0;
                opticsflare = 0;
                opticsid = 1;
                opticsppeffects[] = { "OpticsCHAbera1", "OpticsBlur1" };
                opticszoominit = 0.75;
                opticszoommax = 1.1;
                opticszoommin = 0.25;
                usemodeloptics = 0;
                visionmode[] = {};
            };
        };
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 80;
            class CowsSlot : asdg_OpticRail1913_short {};
        };
        class Library {
            libTextDesc = "Steyr AUG A2";
        };
        class FullAuto : Mode_FullAuto {
            sounds[] = { "StandardSound", "SilencedSound" };

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect = "DefaultRifle";

                closure1[] = { "\hlc_wp_aug\snd\f88a1_first", 1, 1, 10 };
                closure2[] = { "\hlc_wp_aug\snd\f88a1_first", 1, 1, 10 };
                soundClosure[] = { closure1, 0.5, closure2, 0.5 };
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "aughbar_Shot_SoundSet", "aughbar_Tail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[] = { "\hlc_wp_aug\snd\HBAR_fire", 1, 1, 1200 };
                begin2[] = { "\hlc_wp_aug\snd\HBAR_fire", 1, 1, 1200 };
                begin3[] = { "\hlc_wp_aug\snd\HBAR_fire", 1, 1, 1200 };
                soundBegin[] = { begin1, 0.33, begin2, 0.33, begin3, 0.34 };
                
                class SoundTails {
                    class TailForest {
                        sound[] = { "\hlc_wp_aug\snd\tails\ar556_forest", 1.1, 1, 1200 };
                        frequency = 1;
                        volume = "(1-interior/1.4)*forest";
                    };
                    class TailInterior {
                        sound[] = { "\hlc_wp_aug\snd\tails\aug_indoor", 1.0, 1, 1200 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "aug_silencerTail_SoundSet", "aug_silencerShot_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[] = { "\hlc_wp_aug\snd\f88A1_sil", 1, 1, 200 };
                begin2[] = { "\hlc_wp_aug\snd\f88A1_sil", 1, 1, 200 };
                soundBegin[] = { begin1, 0.5, begin2, 0.5 };
                            class SoundTails {
                        class TailInterior {
                            sound[] = { "\hlc_wp_aug\snd\tails\aug_sil_indoor", 1.0, 1, 100 };
                            frequency = 1;
                            volume = "interior";
                        };
                    };
            };
            reloadTime = 0.078;
            begin1[] = { "hlc_wp_aug\snd\f88a1_fire", 1.0, 1, 900 };
            begin2[] = { "hlc_wp_aug\snd\f88a1_fire", 1.0, 1, 900 };
            soundBegin[] = { "begin1", 0.5, "begin2", 0.5 };
            closure1[] = { "hlc_wp_aug\snd\f88a1_first", 3.1622777, 1, 30 };
            closure2[] = { "hlc_wp_aug\snd\f88a1_first", 3.1622777, 1, 30 };
            soundClosure[] = { "closure1", 0.5, "closure2", 0.5 };
            recoil = "recoil_auto_mk20";
            recoilProne = "recoil_auto_prone_mk20";
            dispersion = 0.000266686;
        };
        class Single : Mode_SemiAuto {
            sounds[] = { "StandardSound", "SilencedSound" };

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect = "DefaultRifle";

                closure1[] = { "\hlc_wp_aug\snd\f88a1_first", 1, 1, 10 };
                closure2[] = { "\hlc_wp_aug\snd\f88a1_first", 1, 1, 10 };
                soundClosure[] = { closure1, 0.5, closure2, 0.5 };
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "aughbar_Shot_SoundSet", "aughbar_Tail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[] = { "\hlc_wp_aug\snd\HBAR_fire", 1, 1, 1200 };
                begin2[] = { "\hlc_wp_aug\snd\HBAR_fire", 1, 1, 1200 };
                begin3[] = { "\hlc_wp_aug\snd\HBAR_fire", 1, 1, 1200 };
                soundBegin[] = { begin1, 0.33, begin2, 0.33, begin3, 0.34 };
                class SoundTails {
                    class TailForest {
                        sound[] = { "\hlc_wp_aug\snd\tails\ar556_forest", 1.1, 1, 1200 };
                        frequency = 1;
                        volume = "(1-interior/1.4)*forest";
                    };
                    class TailInterior {
                        sound[] = { "\hlc_wp_aug\snd\tails\aug_indoor", 1.0, 1, 1200 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "aug_silencerTail_SoundSet", "aug_silencerShot_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[] = { "\hlc_wp_aug\snd\f88A1_sil", 1, 1, 200 };
                begin2[] = { "\hlc_wp_aug\snd\f88A1_sil", 1, 1, 200 };
                soundBegin[] = { begin1, 0.5, begin2, 0.5 };
                class SoundTails {
                    class TailInterior {
                        sound[] = { "\hlc_wp_aug\snd\tails\aug_sil_indoor", 1.0, 1, 100 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };
            reloadTime = 0.078;
            begin1[] = { "hlc_wp_aug\snd\f88a1_fire", 1.0, 1, 900 };
            begin2[] = { "hlc_wp_aug\snd\f88a1_fire", 1.0, 1, 900 };
            soundBegin[] = { "begin1", 0.5, "begin2", 0.5 };
            closure1[] = { "hlc_wp_aug\snd\f88a1_first", 3.1622777, 1, 30 };
            closure2[] = { "hlc_wp_aug\snd\f88a1_first", 3.1622777, 1, 30 };
            soundClosure[] = { "closure1", 0.5, "closure2", 0.5 };
            recoil = "recoil_single_mk20";
            recoilProne = "recoil_single_prone_mk20";
            dispersion = 0.000266686;
        };
        class fullauto_medium : FullAuto {
            showToPlayer = 0;
            burst = 3;
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 75;
            midRangeProbab = 0.7;
            maxRange = 150;
            maxRangeProbab = 0.05;
            aiRateOfFire = 2.0;
            aiRateOfFireDistance = 200;
        };
        class single_medium_optics1 : Single {
            requiredOpticType = 1;
            showToPlayer = 0;
            minRange = 2;
            minRangeProbab = 0.2;
            midRange = 450;
            midRangeProbab = 0.7;
            maxRange = 600;
            maxRangeProbab = 0.2;
            aiRateOfFire = 6;
            aiRateOfFireDistance = 600;
        };
        class single_far_optics2 : single_medium_optics1 {
            requiredOpticType = 2;
            showToPlayer = 0;
            minRange = 100;
            minRangeProbab = 0.1;
            midRange = 500;
            midRangeProbab = 0.6;
            maxRange = 700;
            maxRangeProbab = 0.05;
            aiRateOfFire = 8;
            aiRateOfFireDistance = 700;
        };
    };
    class hlc_rifle_auga2lsw_t : hlc_rifle_auga2lsw {
        author = "Sproily, Sarv, Tenoyl, Toadie";
        displayName = "Steyr AUGA2 HBAR[Tan]";
        hiddenSelections[] = { "Camo" };
        hiddenSelectionsTextures[] = { "\hlc_wp_aug\tex\steyr_aug_tan_co.paa" };
        picture = "\hlc_wp_aug\tex\ui\gear_auga2hbarTAN_x_ca";
        HLC_CompatibleBarrels_Classes[] = { "hlc_rifle_auga2_t", "hlc_rifle_auga2carb_t", "hlc_rifle_auga2lsw_T", "hlc_rifle_auga2para_T" };
        HLC_CurrentBarrel = "hlc_barrel_hbar";
    };
    class hlc_rifle_auga2lsw_b : hlc_rifle_auga2lsw {
        author = "Sproily, Sarv, Tenoyl, Toadie";
        displayName = "Steyr AUGA2 HBAR[Black]";
        hiddenSelections[] = { "Camo" };
        hiddenSelectionsTextures[] = { "\hlc_wp_aug\tex\steyr_aug_BLACK_co.paa" };
        picture = "\hlc_wp_aug\tex\ui\gear_auga2hbarBLACK_x_ca";
        HLC_CompatibleBarrels_Classes[] = { "hlc_rifle_auga2_b", "hlc_rifle_auga2carb_B", "hlc_rifle_auga2lsw_B", "hlc_rifle_auga2para_b" };
        HLC_CurrentBarrel = "hlc_barrel_hbar";
    };
    class hlc_rifle_augsrhbar : hlc_rifle_auga2lsw {
        author = "Sproily, Sarv, Tenoyl, Toadie";
        deployedPivot = "deploypivot";       /// what point should be used to be on surface while unfolded
        hasBipod = true;          /// a weapon with bipod obviously has a bipod
        soundBipodDown[] = { "A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_down", db - 3, 1, 20 }; /// sound of unfolding the bipod
        soundBipodUp[] = { "A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_up", db - 3, 1, 20 }; /// sound of folding the bipod
        modes[] = { "Single", "Single", "single_medium_optics1", "single_far_optics2" };
        model = "hlc_wp_aug\mesh\auga2\augsr_hbar.p3d";
        hiddenSelections[] = { "Camo" };
        hiddenSelectionsTextures[] = { "\hlc_wp_aug\tex\steyr_aug_co.paa" };
        bg_bipod = 0;
        reloadMagazineSound[] = { "hlc_wp_aug\snd\f88a1_reload2", 1, 1, 30 };
        displayName = "Steyr AUG-SR HBAR[OD]";
        HLC_CompatibleBarrels_Classes[] = { "hlc_rifle_augsr", "hlc_rifle_augsrcarb", "hlc_rifle_augsrhbar" };
        HLC_CurrentBarrel = "hlc_barrel_hbar";
    };
    class hlc_rifle_augsrhbar_t : hlc_rifle_augsrhbar {
        author = "Sproily, Sarv, Tenoyl, Toadie";
        displayName = "Steyr AUG-SR HBAR[Tan]";
        hiddenSelections[] = { "Camo" };
        hiddenSelectionsTextures[] = { "\hlc_wp_aug\tex\steyr_aug_tan_co.paa" };
        picture = "\hlc_wp_aug\tex\ui\gear_auga2hbarTAN_x_ca";
        HLC_CompatibleBarrels_Classes[] = { "hlc_rifle_augsr_t", "hlc_rifle_augsrcarb_t", "hlc_rifle_augsrhbar_t" };
        HLC_CurrentBarrel = "hlc_barrel_hbar";
    };
    class hlc_rifle_augsrhbar_b : hlc_rifle_augsrhbar {
        author = "Sproily, Sarv, Tenoyl, Toadie";
        displayName = "Steyr AUG-SR HBAR[Black]";
        hiddenSelections[] = { "Camo" };
        hiddenSelectionsTextures[] = { "\hlc_wp_aug\tex\steyr_aug_BLACK_co.paa" };
        picture = "\hlc_wp_aug\tex\ui\gear_auga2hbarBLACK_x_ca";
        HLC_CompatibleBarrels_Classes[] = { "hlc_rifle_augsr_b", "hlc_rifle_augsrcarb_B", "hlc_rifle_augsrhbar_B" };
        HLC_CurrentBarrel = "hlc_barrel_hbar";
    };
    class hlc_rifle_auga3 : hlc_rifle_aug {
        author = "Wang_Chung, Philibuster, Toadie";
        inertia = 0.4;
        dexterity = 1.6;
        AB_barrelTwist = 9;
        AB_barrelLength = 18;
        ACE_barrelTwist = 228.6;
        ACE_barrelLength = 457.2;
        AGM_Overheating_Dispersion[] = { 0, 0.001, 0.002, 0.004 };
        AGM_Overheating_SlowdownFactor[] = { 1, 1, 1, 0.9 };
        AGM_Overheating_JamChance[] = { 0, 0.0003, 0.0015, 0.0075 };
        AGM_Overheating_allowSwapBarrel = 1;
        scope = public;
        displayName = "Steyr AUGA3[Green]";
        model = "hlc_wp_aug\mesh\auga3\auga3.p3d";
        magazines[] = { "hlc_30Rnd_556x45_B_AUG", "hlc_30Rnd_556x45_SOST_AUG", "hlc_30Rnd_556x45_SPR_AUG", "hlc_30Rnd_556x45_T_AUG", "hlc_30Rnd_556x45_MDIM_AUG", "hlc_30Rnd_556x45_TDIM_AUG", "hlc_40Rnd_556x45_B_AUG", "hlc_40Rnd_556x45_SOST_AUG", "hlc_40Rnd_556x45_SPR_AUG", "hlc_40Rnd_556x45_TDIM_AUG" };
        drysound[] = { "\hlc_wp_aug\snd\clipempty_rifle", 1, 1, 10 };
        UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
        descriptionShort = "Assault Rifle<br/>Caliber: 5.56mm NATO";
        handanim[] = {"OFP2_ManSkeleton", "\hlc_wp_aug\gesture\a3\auga3_hands.rtm"};
        modes[] = { "FullAuto", "fullauto_medium", "single_medium_optics1", "single_far_optics2" };
        hiddenSelections[] = { "Camo","Vert" };
        hiddenSelectionsTextures[] = { "\hlc_wp_aug\tex\Philibust_A3\Wangchung\map2_co.paa","\hlc_wp_aug\tex\redrogue_MVG\MVG_Diffuse-Green_co.paa" };
        bg_bipod = 0;    
        optics = 0;
        class OpticsModes {
            class Kolimator {
                cameradir = "";
                distancezoommax = 100;
                distancezoommin = 100;
                memorypointcamera = "eye";
                opticsdisableperipherialvision = 0;
                opticsflare = 0;
                opticsid = 1;
                opticsppeffects[] = { "OpticsCHAbera1", "OpticsBlur1" };
                opticszoominit = 0.75;
                opticszoommax = 1.1;
                opticszoommin = 0.25;
                usemodeloptics = 0;
                visionmode[] = {};
            };
        };
        reloadAction = "HLC_GestureReloadAUGA3";
        reloadMagazineSound[] = { "hlc_wp_aug\snd\auga3_reload", 1, 1, 30 };
        picture = "\hlc_wp_aug\tex\ui\gear_auga3GREEN_x_ca";
        class FullAuto: Mode_FullAuto {
            sounds[] = {"StandardSound","SilencedSound"};

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect  = "DefaultRifle";

                closure1[]={"\hlc_wp_aug\snd\f88a1_first", 1, 1,10};
                closure2[]={"\hlc_wp_aug\snd\f88a1_first", 1, 1,10};
                soundClosure[]={closure1,0.5, closure2,0.5};
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "aug_Shot_SoundSet", "aug_Tail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[]={"\hlc_wp_aug\snd\f88a1_fire", 1, 1,1200};
                begin2[]={"\hlc_wp_aug\snd\f88a1_fire", 1, 1,1200};
                begin3[]={"\hlc_wp_aug\snd\f88a1_fire", 1, 1,1200};
                soundBegin[]={begin1,0.33, begin2,0.33, begin3,0.34};
                class SoundTails {
                    class TailForest {
                        sound[] = { "\hlc_wp_aug\snd\tails\ar556_forest", 1.1, 1, 1200 };
                        frequency = 1;
                        volume = "(1-interior/1.4)*forest";
                    };
                    class TailInterior {
                        sound[] = { "\hlc_wp_aug\snd\tails\aug_indoor", 1.0, 1, 1200 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "aug_silencerShot_SoundSet", "aug_silencerTail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[]={"\hlc_wp_aug\snd\f88A1_sil", 1, 1,200};
                begin2[]={"\hlc_wp_aug\snd\f88A1_sil", 1, 1,200};
                soundBegin[]={begin1,0.5, begin2,0.5};
                class SoundTails {
                    class TailInterior {
                        sound[] = { "\hlc_wp_aug\snd\tails\aug_sil_indoor", 1.0, 1, 100 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };
            reloadTime = 0.091;
            begin1[] = {"hlc_wp_aug\snd\f88a1_fire",1.0,1,900};
            begin2[] = {"hlc_wp_aug\snd\f88a1_fire",1.0,1,900};
            soundBegin[] = {"begin1",0.5,"begin2",0.5};
            closure1[] = {"hlc_wp_aug\snd\f88a1_first",3.1622777,1,30};
            closure2[] = {"hlc_wp_aug\snd\f88a1_first",3.1622777,1,30};
            soundClosure[] = {"closure1",0.5,"closure2",0.5};
            recoil = "recoil_auto_mk20";
            recoilProne = "recoil_auto_prone_mk20";
        };
        class Single : Mode_SemiAuto {
            sounds[] = {"StandardSound","SilencedSound"};

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect  = "DefaultRifle";

                closure1[]={"\hlc_wp_aug\snd\f88a1_first", 1, 1,10};
                closure2[]={"\hlc_wp_aug\snd\f88a1_first", 1, 1,10};
                soundClosure[]={closure1,0.5, closure2,0.5};
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "aug_Shot_SoundSet", "aug_Tail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[]={"\hlc_wp_aug\snd\f88a1_fire", 1, 1,1200};
                begin2[]={"\hlc_wp_aug\snd\f88a1_fire", 1, 1,1200};
                begin3[]={"\hlc_wp_aug\snd\f88a1_fire", 1, 1,1200};
                soundBegin[]={begin1,0.33, begin2,0.33, begin3,0.34};
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "aug_silencerShot_SoundSet", "aug_silencerTail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[]={"\hlc_wp_aug\snd\f88A1_sil", 1, 1,200};
                begin2[]={"\hlc_wp_aug\snd\f88A1_sil", 1, 1,200};
                soundBegin[]={begin1,0.5, begin2,0.5};
            };
            reloadTime = 0.091;
            begin1[] = {"hlc_wp_aug\snd\f88a1_fire",1.0,1,900};
            begin2[] = {"hlc_wp_aug\snd\f88a1_fire",1.0,1,900};
            soundBegin[] = {"begin1",0.5,"begin2",0.5};
            closure1[] = {"hlc_wp_aug\snd\f88a1_first",3.1622777,1,30};
            closure2[] = {"hlc_wp_aug\snd\f88a1_first",3.1622777,1,30};
            soundClosure[] = {"closure1",0.5,"closure2",0.5};
            recoil = "recoil_single_mk20";
            recoilProne = "recoil_single_prone_mk20";
            dispersion = 0.000286132;
        };
        class Library {
            libTextDesc = "Steyr AUG A3";
        };
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 76;
            class CowsSlot: asdg_OpticRail1913 {};
            class PointerSlot: asdg_FrontSideRail {};
            class UnderBarrelSlot : asdg_UnderSlot {};
        };
    };

    class hlc_rifle_auga3_bl : hlc_rifle_auga3 {
        author = "Wang_Chung, Philibuster, Toadie";
        displayName = "Steyr AUGA3[Blue]";
        hiddenSelections[] = { "Camo", "Vert" };
        hiddenSelectionsTextures[] = { "\hlc_wp_aug\tex\Philibust_A3\Wangchung\map2_blue_co.paa", "\hlc_wp_aug\tex\redrogue_MVG\MVG_Diffuse-Black_co.paa" };
        picture = "\hlc_wp_aug\tex\ui\gear_auga3BLUE_x_ca";

    };
    class hlc_rifle_auga3_b : hlc_rifle_auga3 {
        author = "Wang_Chung, Philibuster, Toadie";
        displayName = "Steyr AUGA3[Black]";
        hiddenSelections[] = { "Camo", "Vert" };
        hiddenSelectionsTextures[] = { "\hlc_wp_aug\tex\Philibust_A3\Wangchung\map2_black_co.paa", "\hlc_wp_aug\tex\redrogue_MVG\MVG_Diffuse-Black_co.paa" };
        picture = "\hlc_wp_aug\tex\ui\gear_auga3BLACK_x_ca";
    };
    class hlc_rifle_auga3_GL : hlc_rifle_aug {
        author = "Wang_Chung, Philibuster, Toadie";
        scope = public;
        ACE_barrelTwist = 228.6;
        ACE_barrelLength = 457.2;
        magazines[] = { "hlc_30Rnd_556x45_B_AUG", "hlc_30Rnd_556x45_SOST_AUG", "hlc_30Rnd_556x45_SPR_AUG", "hlc_30Rnd_556x45_T_AUG", "hlc_30Rnd_556x45_MDIM_AUG", "hlc_30Rnd_556x45_TDIM_AUG", "hlc_40Rnd_556x45_B_AUG", "hlc_40Rnd_556x45_SOST_AUG", "hlc_40Rnd_556x45_SPR_AUG", "hlc_40Rnd_556x45_TDIM_AUG" };
        drysound[] = { "\hlc_wp_aug\snd\clipempty_rifle", 1, 1, 10 };
        UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
        descriptionShort = "Assault Rifle<br/>Caliber: 5.56mm NATO";
        modes[] = { "FullAuto", "fullauto_medium", "single_medium_optics1", "single_far_optics2" };
        hiddenSelections[] = { "Camo", "Vert" };
        hiddenSelectionsTextures[] = { "\hlc_wp_aug\tex\Philibust_A3\Wangchung\map2_co.paa", "\hlc_wp_aug\tex\redrogue_MVG\MVG_Diffuse-Green_co.paa" };
        bg_bipod = 0;
        optics = 0;
        class OpticsModes {
            class Kolimator {
                cameradir = "";
                distancezoommax = 100;
                distancezoommin = 100;
                memorypointcamera = "eye";
                opticsdisableperipherialvision = 0;
                opticsflare = 0;
                opticsid = 1;
                opticsppeffects[] = { "OpticsCHAbera1", "OpticsBlur1" };
                opticszoominit = 0.75;
                opticszoommax = 1.1;
                opticszoommin = 0.25;
                usemodeloptics = 0;
                visionmode[] = {};
            };
        };
        reloadAction = "HLC_GestureReloadAUGA3";
        reloadMagazineSound[] = { "hlc_wp_aug\snd\auga3_reload", 1, 1, 30 };
        class FullAuto : Mode_FullAuto {
            sounds[] = { "StandardSound", "SilencedSound" };

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect = "DefaultRifle";

                closure1[] = { "\hlc_wp_aug\snd\f88a1_first", 1, 1, 10 };
                closure2[] = { "\hlc_wp_aug\snd\f88a1_first", 1, 1, 10 };
                soundClosure[] = { closure1, 0.5, closure2, 0.5 };
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "aug_Shot_SoundSet", "aug_Tail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[] = { "\hlc_wp_aug\snd\f88a1_fire", 1, 1, 1200 };
                begin2[] = { "\hlc_wp_aug\snd\f88a1_fire", 1, 1, 1200 };
                begin3[] = { "\hlc_wp_aug\snd\f88a1_fire", 1, 1, 1200 };
                soundBegin[] = { begin1, 0.33, begin2, 0.33, begin3, 0.34 };
                class SoundTails {
                    class TailForest {
                        sound[] = { "\hlc_wp_aug\snd\tails\ar556_forest", 1.1, 1, 1200 };
                        frequency = 1;
                        volume = "(1-interior/1.4)*forest";
                    };
                    class TailInterior {
                        sound[] = { "\hlc_wp_aug\snd\tails\aug_indoor", 1.0, 1, 1200 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "aug_silencerShot_SoundSet", "aug_silencerTail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[] = { "\hlc_wp_aug\snd\f88A1_sil", 1, 1, 200 };
                begin2[] = { "\hlc_wp_aug\snd\f88A1_sil", 1, 1, 200 };
                soundBegin[] = { begin1, 0.5, begin2, 0.5 };
                class SoundTails {
                    class TailInterior {
                        sound[] = { "\hlc_wp_aug\snd\tails\aug_sil_indoor", 1.0, 1, 100 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };
            reloadTime = 0.091;
            begin1[] = { "hlc_wp_aug\snd\f88a1_fire", 1.0, 1, 900 };
            begin2[] = { "hlc_wp_aug\snd\f88a1_fire", 1.0, 1, 900 };
            soundBegin[] = { "begin1", 0.5, "begin2", 0.5 };
            closure1[] = { "hlc_wp_aug\snd\f88a1_first", 3.1622777, 1, 30 };
            closure2[] = { "hlc_wp_aug\snd\f88a1_first", 3.1622777, 1, 30 };
            soundClosure[] = { "closure1", 0.5, "closure2", 0.5 };
            recoil = "recoil_auto_mk20";
            recoilProne = "recoil_auto_prone_mk20";
        };
        class Single : Mode_SemiAuto {
            sounds[] = { "StandardSound", "SilencedSound" };

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect = "DefaultRifle";

                closure1[] = { "\hlc_wp_aug\snd\f88a1_first", 1, 1, 10 };
                closure2[] = { "\hlc_wp_aug\snd\f88a1_first", 1, 1, 10 };
                soundClosure[] = { closure1, 0.5, closure2, 0.5 };
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                begin1[] = { "\hlc_wp_aug\snd\f88a1_fire", 1, 1, 1200 };
                begin2[] = { "\hlc_wp_aug\snd\f88a1_fire", 1, 1, 1200 };
                begin3[] = { "\hlc_wp_aug\snd\f88a1_fire", 1, 1, 1200 };
                soundBegin[] = { begin1, 0.33, begin2, 0.33, begin3, 0.34 };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                begin1[] = { "\hlc_wp_aug\snd\f88A1_sil", 1, 1, 200 };
                begin2[] = { "\hlc_wp_aug\snd\f88A1_sil", 1, 1, 200 };
                soundBegin[] = { begin1, 0.5, begin2, 0.5 };
            };
            reloadTime = 0.091;
            begin1[] = { "hlc_wp_aug\snd\f88a1_fire", 1.0, 1, 900 };
            begin2[] = { "hlc_wp_aug\snd\f88a1_fire", 1.0, 1, 900 };
            soundBegin[] = { "begin1", 0.5, "begin2", 0.5 };
            closure1[] = { "hlc_wp_aug\snd\f88a1_first", 3.1622777, 1, 30 };
            closure2[] = { "hlc_wp_aug\snd\f88a1_first", 3.1622777, 1, 30 };
            soundClosure[] = { "closure1", 0.5, "closure2", 0.5 };
            recoil = "recoil_single_mk20";
            recoilProne = "recoil_single_prone_mk20";
            dispersion = 0.000286132;
        };
        class Library {
            libTextDesc = "Steyr AUG A3";
        };
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 87;

            class CowsSlot: asdg_OpticRail1913 {};
            class PointerSlot: asdg_FrontSideRail {};
        };
        inertia = 0.6;
        dexterity = 1.6;
        AGM_Overheating_Dispersion[] = { 0, 0.001, 0.002, 0.004 };
        AGM_Overheating_SlowdownFactor[] = { 1, 1, 1, 0.9 };
        AGM_Overheating_JamChance[] = { 0, 0.0003, 0.0015, 0.0075 };
        AGM_Overheating_allowSwapBarrel = 1;
        displayName = "Steyr AUGA3(GL)[Green]";
        model = "hlc_wp_aug\mesh\auga3\AUGa3GL.p3d";
        handanim[] = { "OFP2_ManSkeleton", "\hlc_wp_aug\gesture\a3\auga3gl_hands.rtm" };
        muzzles[] = { "this", "hlc_M203_AUGA3" };
        picture = "\hlc_wp_aug\tex\ui\gear_augglGREEN_x_ca";
        class hlc_M203_AUGA3 : UGL_F {
            cameradir = "GL Look";
            discreteDistance[] = { 50, 100, 150, 200, 250, 300, 350, 400 };
            discreteDistanceCameraPoint[] = { "GL Eye1", "GL Eye15", "GL Eye2", "GL Eye25", "GL Eye3", "GL Eye35", "GL Eye4", "GL Eye45" }; /// the angle of gun changes with zeroing
            discreteDistanceInitIndex = 1;
            displayname = "M203A1";
            useModelOptics = false;
            useExternalOptic = false;
            optics = 1;
            reloadAction = "GestureReloadTrgUGL";
            drysound[] = { "A3\sounds_f\Weapons\other\sfx5", 1, 1, 400 };
            cursoraim = "gl";
            magazinereloadtime = 0;
            magazines[] = { "1Rnd_HE_Grenade_shell", "UGL_FlareWhite_F", "UGL_FlareGreen_F", "UGL_FlareRed_F", "UGL_FlareYellow_F", "UGL_FlareCIR_F", "1Rnd_Smoke_Grenade_shell", "1Rnd_SmokeRed_Grenade_shell", "1Rnd_SmokeGreen_Grenade_shell", "1Rnd_SmokeYellow_Grenade_shell", "1Rnd_SmokePurple_Grenade_shell", "1Rnd_SmokeBlue_Grenade_shell", "1Rnd_SmokeOrange_Grenade_shell" };
            opticszoominit = 0.75;
            opticszoommax = 1.1;
            opticszoommin = 0.375;
            reloadmagazinesound[] = { "A3\sounds_f\Weapons\grenades\ugl_reload", 1, 1, 20 };
            reloadtime = 0.1;
            sound[] = { "A3\sounds_f\Weapons\grenades\ugl_shot_1", 1, 1, 400 };
            weaponinfotype = "RscWeaponZeroing";
        };
    };
    class hlc_rifle_auga3_GL_BL : hlc_rifle_auga3_GL {
        author = "Wang_Chung, Philibuster, Toadie";
        displayName = "Steyr AUGA3(GL)[Blue]";
        hiddenSelections[] = { "Camo"};
        hiddenSelectionsTextures[] = { "\hlc_wp_aug\tex\Philibust_A3\Wangchung\map2_blue_co.paa"};
        picture = "\hlc_wp_aug\tex\ui\gear_augglBLUE_x_ca";
    };
    class hlc_rifle_auga3_GL_B : hlc_rifle_auga3_GL {
        author = "Wang_Chung, Philibuster, Toadie";
        displayName = "Steyr AUGA3(GL)[Black]";
        hiddenSelections[] = { "Camo"};
        hiddenSelectionsTextures[] = { "\hlc_wp_aug\tex\Philibust_A3\Wangchung\map2_black_co.paa"};
        picture = "\hlc_wp_aug\tex\ui\gear_augglBLACK_x_ca";
    };
};
