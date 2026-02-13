# 1 "data/maps/PetalburgCity_PlayersHouse_2F/scripts.pory"

# 2 "data/maps/PetalburgCity_PlayersHouse_2F/scripts.pory"
PetalburgCity_PlayersHouse_2F_MapScripts::
# 3 "data/maps/PetalburgCity_PlayersHouse_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PetalburgCity_PlayersHouse_2F_OnTransition
# 4 "data/maps/PetalburgCity_PlayersHouse_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, PetalburgCity_PlayersHouse_2F_OnWarp
# 5 "data/maps/PetalburgCity_PlayersHouse_2F/scripts.pory"
	.byte 0
# 6 "data/maps/PetalburgCity_PlayersHouse_2F/scripts.pory"

# 7 "data/maps/PetalburgCity_PlayersHouse_2F/scripts.pory"
PetalburgCity_PlayersHouse_2F_OnTransition:
# 8 "data/maps/PetalburgCity_PlayersHouse_2F/scripts.pory"
	call_if_eq VAR_LITTLEROOT_INTRO_STATE, 4, PlayersHouse_2F_EventScript_BlockStairsUntilClockIsSet
# 9 "data/maps/PetalburgCity_PlayersHouse_2F/scripts.pory"
	call SecretBase_EventScript_SetDecorationFlags
# 10 "data/maps/PetalburgCity_PlayersHouse_2F/scripts.pory"
	setvar VAR_SECRET_BASE_INITIALIZED, 0
# 11 "data/maps/PetalburgCity_PlayersHouse_2F/scripts.pory"
	end
# 12 "data/maps/PetalburgCity_PlayersHouse_2F/scripts.pory"

# 13 "data/maps/PetalburgCity_PlayersHouse_2F/scripts.pory"
PetalburgCity_PlayersHouse_2F_OnWarp:
# 14 "data/maps/PetalburgCity_PlayersHouse_2F/scripts.pory"
	map_script_2 VAR_SECRET_BASE_INITIALIZED, 0, PetalburgCity_PlayersHouse_2F_EventScript_CheckInitDecor
# 15 "data/maps/PetalburgCity_PlayersHouse_2F/scripts.pory"
	.2byte 0
# 16 "data/maps/PetalburgCity_PlayersHouse_2F/scripts.pory"

# 17 "data/maps/PetalburgCity_PlayersHouse_2F/scripts.pory"
PetalburgCity_PlayersHouse_2F_EventScript_CheckInitDecor::
# 18 "data/maps/PetalburgCity_PlayersHouse_2F/scripts.pory"
	goto SecretBase_EventScript_InitDecorations
# 19 "data/maps/PetalburgCity_PlayersHouse_2F/scripts.pory"

# 20 "data/maps/PetalburgCity_PlayersHouse_2F/scripts.pory"
PetalburgCity_PlayersHouse_2F_EventScript_PC::
# 21 "data/maps/PetalburgCity_PlayersHouse_2F/scripts.pory"
	lockall
# 22 "data/maps/PetalburgCity_PlayersHouse_2F/scripts.pory"
	setvar VAR_0x8004, PC_LOCATION_MAYS_HOUSE
# 23 "data/maps/PetalburgCity_PlayersHouse_2F/scripts.pory"
	special DoPCTurnOnEffect
# 24 "data/maps/PetalburgCity_PlayersHouse_2F/scripts.pory"
	playse SE_PC_ON
# 25 "data/maps/PetalburgCity_PlayersHouse_2F/scripts.pory"
	msgbox gText_PlayerHouseBootPC, MSGBOX_DEFAULT
# 26 "data/maps/PetalburgCity_PlayersHouse_2F/scripts.pory"
	special BedroomPC
# 27 "data/maps/PetalburgCity_PlayersHouse_2F/scripts.pory"
	waitstate
# 28 "data/maps/PetalburgCity_PlayersHouse_2F/scripts.pory"
	releaseall
# 29 "data/maps/PetalburgCity_PlayersHouse_2F/scripts.pory"
	end
# 30 "data/maps/PetalburgCity_PlayersHouse_2F/scripts.pory"

# 31 "data/maps/PetalburgCity_PlayersHouse_2F/scripts.pory"
PetalburgCity_PlayersHouse_2F_EventScript_TurnOffPlayerPC::
# 32 "data/maps/PetalburgCity_PlayersHouse_2F/scripts.pory"
	setvar VAR_0x8004, PC_LOCATION_MAYS_HOUSE
# 33 "data/maps/PetalburgCity_PlayersHouse_2F/scripts.pory"
	playse SE_PC_OFF
# 34 "data/maps/PetalburgCity_PlayersHouse_2F/scripts.pory"
	special DoPCTurnOffEffect
# 35 "data/maps/PetalburgCity_PlayersHouse_2F/scripts.pory"
	releaseall
# 36 "data/maps/PetalburgCity_PlayersHouse_2F/scripts.pory"
	end
