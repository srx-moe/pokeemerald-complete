# 1 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"

# 2 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
PetalburgCity_PlayersHouse_1F_MapScripts::
# 3 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, PetalburgCity_PlayersHouse_1F_OnLoad
# 4 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PetalburgCity_PlayersHouse_1F_OnTransition
# 5 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PetalburgCity_PlayersHouse_1F_OnFrame
# 6 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"

# 7 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
	.byte 0
# 8 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"

# 9 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
PetalburgCity_PlayersHouse_1F_OnLoad:
# 10 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
	// call PetalburgCity_PlayersHouse_1F_EventScript_SetMovingBoxes
# 11 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
	// call_if_set FLAG_RECEIVED_RUNNING_SHOES, LittlerootTown_MaysHouse_1F_EventScript_CheckShowShoesManual
# 12 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
	end
# 13 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"

# 14 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
PetalburgCity_PlayersHouse_1F_OnTransition:
# 15 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
	call_if_eq VAR_PETALBURG_INTRO_STATE, 3, PetalburgCity_PlayersHouse_1F_EventScript_MoveDadToDoor
# 16 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
	call_if_eq VAR_PETALBURG_INTRO_STATE, 5, PetalburgCity_PlayersHouse_1F_EventScript_MoveDadToStairs
# 17 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
	call_if_eq VAR_PETALBURG_INTRO_STATE, 6, PetalburgCity_PlayersHouse_1F_EventScript_MoveDadToTV
# 18 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
	end
# 19 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"

# 20 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
PetalburgCity_PlayersHouse_1F_OnFrame:
# 21 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
 	map_script_2 VAR_PETALBURG_INTRO_STATE, 3, PetalburgCity_PlayersHouse_1F_EventScript_EnterHouseMovingIn
# 22 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 5, LittlerootTown_MaysHouse_1F_EventScript_GoUpstairsToSetClock
# 23 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 6, LittlerootTown_MaysHouse_1F_EventScript_PetalburgGymReport
# 24 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	map_script_2 VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 1, LittlerootTown_MaysHouse_1F_EventScript_YoureNewNeighbor
# 25 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	map_script_2 VAR_LITTLEROOT_HOUSES_STATE_MAY, 3, PlayersHouse_1F_EventScript_GetSSTicketAndSeeLatiTV
# 26 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
 	.2byte 0
# 27 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"

# 28 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// PetalburgCity_PlayersHouse_1F_EventScript_SetMovingBoxes::
# 29 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	setmetatile 5, 4, METATILE_BrendansMaysHouse_MovingBox_Open, TRUE
# 30 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	setmetatile 5, 2, METATILE_BrendansMaysHouse_MovingBox_Closed, TRUE
# 31 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	setmetatile 4, 2, METATILE_BrendansMaysHouse_MovingBox_Open, TRUE
# 32 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	return
# 33 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"

# 34 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// PetalburgCity_PlayersHouse_1F_EventScript_CheckShowShoesManual::
# 35 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	checkplayergender
# 36 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	goto_if_eq VAR_RESULT, FEMALE, LittlerootTown_MaysHouse_1F_EventScript_ShowRunningShoesManual
# 37 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	return
# 38 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"

# 39 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// PetalburgCity_PlayersHouse_1F_EventScript_ShowRunningShoesManual::
# 40 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	setmetatile 6, 7, METATILE_BrendansMaysHouse_BookOnTable, TRUE
# 41 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	return
# 42 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"

# 43 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"

# 44 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// the blow scripts are used during the intro sequence to move dad around 
# 45 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
PetalburgCity_PlayersHouse_1F_EventScript_MoveDadToDoor::
# 46 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
	setobjectxyperm LOCALID_PLAYERS_HOUSE_1F_DAD, 1, 8
# 47 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
	setobjectmovementtype LOCALID_PLAYERS_HOUSE_1F_DAD, MOVEMENT_TYPE_FACE_UP
# 48 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
	return
# 49 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"

# 50 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
PetalburgCity_PlayersHouse_1F_EventScript_MoveDadToStairs::
# 51 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
	setobjectxyperm LOCALID_PLAYERS_HOUSE_1F_DAD, 2, 4
# 52 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
	setobjectmovementtype LOCALID_PLAYERS_HOUSE_1F_DAD, MOVEMENT_TYPE_FACE_UP
# 53 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
	return
# 54 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"

# 55 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
PetalburgCity_PlayersHouse_1F_EventScript_MoveDadToTV::
# 56 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
	setobjectxyperm LOCALID_PLAYERS_HOUSE_1F_DAD, 6, 5
# 57 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
	setobjectmovementtype LOCALID_PLAYERS_HOUSE_1F_DAD, MOVEMENT_TYPE_FACE_UP
# 58 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
	return
# 59 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"

# 60 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"

# 61 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
PetalburgCity_PlayersHouse_1F_EventScript_EnterHouseMovingIn::
# 62 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
	lockall
# 63 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
	// setvar VAR_0x8004, LOCALID_PLAYERS_HOUSE_1F_DAD
# 64 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
	// setvar VAR_0x8005, FEMALE
# 65 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
	// goto PlayersHouse_1F_EventScript_EnterHouseMovingIn
# 66 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
	// end
# 67 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
	msgbox PetalburgCity_PlayersHouse_1F_Text_TooShabby, MSGBOX_DEFAULT
# 68 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYERS_HOUSE_1F_DAD, Common_Movement_FacePlayer
# 69 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
	waitmovement 0
# 70 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 71 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
	waitmovement 0
# 72 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
	msgbox PetalburgCity_PlayersHouse_1F_Text_MoversPokemonGoSetClock, MSGBOX_DEFAULT
# 73 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
	setvar VAR_PETALBURG_INTRO_STATE, 4
# 74 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_PlayersHouse_1F_Movement_PlayerWalkIn
# 75 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYERS_HOUSE_1F_DAD, Common_Movement_WalkInPlaceFasterUp
# 76 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
	waitmovement 0
# 77 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
	releaseall
# 78 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
	end
# 79 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"

# 80 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"

# 81 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
PetalburgCity_PlayersHouse_1F_Movement_PlayerWalkIn:
# 82 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
	walk_up
# 83 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
	step_end
# 84 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"

# 85 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
PetalburgCity_PlayersHouse_1F_Text_TooShabby:
# 86 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
	.string "DAD: See, kiddo?\n"
# 87 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
	.string "Not too shabby, is it?$"
# 88 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"

# 89 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
PetalburgCity_PlayersHouse_1F_Text_MoversPokemonGoSetClock:
# 90 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
	.string "The mover's POKéMON do all the work\n"
# 91 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
	.string "of moving us in and cleaning up after.\l"
# 92 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
	.string "It's very convenient!\p"
# 93 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
	.string "{PLAYER}, your room is upstairs.\n"
# 94 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
	.string "Go check it out, kiddo.\p"
# 95 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
	.string "I bought you a new clock to mark\n"
# 96 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
	.string "our move here.\l"
# 97 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
	.string "Don't forget to set it.$"
# 98 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"

# 99 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"

# 100 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// LittlerootTown_MaysHouse_1F_EventScript_GoUpstairsToSetClock::
# 101 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	lockall
# 102 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	msgbox PlayersHouse_1F_Text_GoSetTheClock, MSGBOX_DEFAULT
# 103 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	closemessage
# 104 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	applymovement LOCALID_PLAYER, LittlerootTown_MaysHouse_1F_Movement_PushTowardStairs
# 105 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	applymovement LOCALID_PLAYERS_HOUSE_1F_MOM, LittlerootTown_MaysHouse_1F_Movement_PushTowardStairs
# 106 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	waitmovement 0
# 107 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	warp MAP_LITTLEROOT_TOWN_MAYS_HOUSE_2F, 1, 1
# 108 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	waitstate
# 109 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	releaseall
# 110 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	end
# 111 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"

# 112 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// LittlerootTown_MaysHouse_1F_Movement_PushTowardStairs:
# 113 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	walk_up
# 114 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	step_end
# 115 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"

# 116 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"

# 117 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// LittlerootTown_MaysHouse_1F_EventScript_PetalburgGymReport::
# 118 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	lockall
# 119 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	setvar VAR_0x8004, FEMALE
# 120 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	setvar VAR_0x8005, LOCALID_PLAYERS_HOUSE_1F_MOM
# 121 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	goto PlayersHouse_1F_EventScript_PetalburgGymReportFemale
# 122 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	end
# 123 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"

# 124 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// LittlerootTown_MaysHouse_1F_EventScript_YoureNewNeighbor::
# 125 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	lockall
# 126 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	playse SE_PIN
# 127 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	applymovement LOCALID_RIVALS_HOUSE_1F_MOM, Common_Movement_ExclamationMark
# 128 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	waitmovement 0
# 129 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	applymovement LOCALID_RIVALS_HOUSE_1F_MOM, Common_Movement_Delay48
# 130 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	waitmovement 0
# 131 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 132 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	applymovement LOCALID_RIVALS_HOUSE_1F_MOM, LittlerootTown_MaysHouse_1F_Movement_RivalMomApproach
# 133 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	waitmovement 0
# 134 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	special GetRivalSonDaughterString
# 135 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	msgbox RivalsHouse_1F_Text_OhYoureTheNewNeighbor, MSGBOX_DEFAULT
# 136 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	setflag FLAG_MET_RIVAL_MOM
# 137 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	setvar VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 2
# 138 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	releaseall
# 139 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	end
# 140 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"

# 141 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// LittlerootTown_MaysHouse_1F_Movement_RivalMomApproach:
# 142 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	walk_down
# 143 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	walk_left
# 144 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	walk_left
# 145 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	walk_left
# 146 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	walk_left
# 147 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	walk_left
# 148 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	step_end
# 149 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"

# 150 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// RivalsHouse_1F_EventScript_RivalMom::
# 151 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	lock
# 152 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	faceplayer
# 153 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	goto_if_set FLAG_DEFEATED_RIVAL_ROUTE103, RivalsHouse_1F_EventScript_GoHomeEverySoOften
# 154 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	goto_if_set FLAG_SYS_POKEMON_GET, RivalsHouse_1F_EventScript_RivalIsOnRoute103
# 155 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	goto_if_eq VAR_LITTLEROOT_RIVAL_STATE, 3, RivalsHouse_1F_EventScript_RivalTooBusy
# 156 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	special GetRivalSonDaughterString
# 157 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	msgbox RivalsHouse_1F_Text_LikeChildLikeFather, MSGBOX_DEFAULT
# 158 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	release
# 159 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	end
# 160 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"

# 161 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// RivalsHouse_1F_EventScript_RivalTooBusy::
# 162 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	msgbox RivalsHouse_1F_Text_TooBusyToNoticeVisit, MSGBOX_DEFAULT
# 163 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	release
# 164 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	end
# 165 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"

# 166 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// RivalsHouse_1F_EventScript_RivalIsOnRoute103::
# 167 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	msgbox RivalsHouse_1F_Text_WentOutToRoute103, MSGBOX_DEFAULT
# 168 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	release
# 169 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	end
# 170 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"

# 171 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// RivalsHouse_1F_EventScript_GoHomeEverySoOften::
# 172 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	msgbox RivalsHouse_1F_Text_ShouldGoHomeEverySoOften, MSGBOX_DEFAULT
# 173 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	release
# 174 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	end
# 175 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"

# 176 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// RivalsHouse_1F_EventScript_RivalSibling::
# 177 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	lock
# 178 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	faceplayer
# 179 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	special GetPlayerBigGuyGirlString
# 180 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	msgbox RivalsHouse_1F_Text_DoYouHavePokemon, MSGBOX_DEFAULT
# 181 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	release
# 182 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	end
# 183 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"

# 184 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// LittlerootTown_MaysHouse_1F_EventScript_GoSeeRoom::
# 185 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	lockall
# 186 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	setvar VAR_0x8004, LOCALID_PLAYERS_HOUSE_1F_MOM
# 187 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	setvar VAR_0x8005, FEMALE
# 188 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	applymovement VAR_0x8004, Common_Movement_WalkInPlaceFasterRight
# 189 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	waitmovement 0
# 190 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	goto PlayersHouse_1F_EventScript_MomGoSeeRoom
# 191 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	end
# 192 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"

# 193 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// LittlerootTown_MaysHouse_1F_EventScript_MeetRival0::
# 194 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	lockall
# 195 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	setvar VAR_0x8008, 0
# 196 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	goto LittlerootTown_MaysHouse_1F_EventScript_MeetRival
# 197 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	end
# 198 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"

# 199 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// LittlerootTown_MaysHouse_1F_EventScript_MeetRival1::
# 200 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	lockall
# 201 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	setvar VAR_0x8008, 1
# 202 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	goto LittlerootTown_MaysHouse_1F_EventScript_MeetRival
# 203 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	end
# 204 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"

# 205 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// LittlerootTown_MaysHouse_1F_EventScript_MeetRival2::
# 206 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	lockall
# 207 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	setvar VAR_0x8008, 2
# 208 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	goto LittlerootTown_MaysHouse_1F_EventScript_MeetRival
# 209 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	end
# 210 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"

# 211 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// LittlerootTown_MaysHouse_1F_EventScript_MeetRival::
# 212 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	playse SE_EXIT
# 213 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	delay 10
# 214 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	addobject LOCALID_RIVALS_HOUSE_1F_RIVAL
# 215 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	delay 30
# 216 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	playse SE_PIN
# 217 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	applymovement LOCALID_RIVALS_HOUSE_1F_RIVAL, Common_Movement_ExclamationMark
# 218 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	waitmovement 0
# 219 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	applymovement LOCALID_RIVALS_HOUSE_1F_RIVAL, Common_Movement_Delay48
# 220 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	waitmovement 0
# 221 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	call_if_ne VAR_0x8008, 1, LittlerootTown_MaysHouse_1F_EventScript_PlayerFaceMay
# 222 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	playbgm MUS_ENCOUNTER_MAY, TRUE
# 223 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	call_if_eq VAR_0x8008, 0, LittlerootTown_MaysHouse_1F_EventScript_MayApproachPlayer0
# 224 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	call_if_eq VAR_0x8008, 1, LittlerootTown_MaysHouse_1F_EventScript_MayApproachPlayer1
# 225 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	call_if_eq VAR_0x8008, 2, LittlerootTown_MaysHouse_1F_EventScript_MayApproachPlayer2
# 226 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	msgbox RivalsHouse_1F_Text_MayWhoAreYou, MSGBOX_DEFAULT
# 227 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	closemessage
# 228 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	call_if_eq VAR_0x8008, 0, LittlerootTown_MaysHouse_1F_EventScript_MayGoUpstairs0
# 229 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	call_if_eq VAR_0x8008, 1, LittlerootTown_MaysHouse_1F_EventScript_MayGoUpstairs1
# 230 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	call_if_eq VAR_0x8008, 2, LittlerootTown_MaysHouse_1F_EventScript_MayGoUpstairs2
# 231 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	playse SE_EXIT
# 232 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	removeobject LOCALID_RIVALS_HOUSE_1F_RIVAL
# 233 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_MAY
# 234 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_2F_POKE_BALL
# 235 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	clearflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_BEDROOM
# 236 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	delay 30
# 237 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	setvar VAR_LITTLEROOT_RIVAL_STATE, 3
# 238 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	setvar VAR_LITTLEROOT_TOWN_STATE, 1
# 239 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	savebgm MUS_DUMMY
# 240 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	fadedefaultbgm
# 241 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	releaseall
# 242 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	end
# 243 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"

# 244 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// LittlerootTown_MaysHouse_1F_EventScript_PlayerFaceMay::
# 245 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 246 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	waitmovement 0
# 247 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	return
# 248 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"

# 249 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// LittlerootTown_MaysHouse_1F_EventScript_MayApproachPlayer0::
# 250 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	applymovement LOCALID_RIVALS_HOUSE_1F_RIVAL, LittlerootTown_MaysHouse_1F_Movement_MayApproachPlayer0
# 251 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	waitmovement 0
# 252 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	return
# 253 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"

# 254 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// LittlerootTown_MaysHouse_1F_EventScript_MayApproachPlayer1::
# 255 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	applymovement LOCALID_RIVALS_HOUSE_1F_RIVAL, LittlerootTown_MaysHouse_1F_Movement_MayApproachPlayer1
# 256 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	waitmovement 0
# 257 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	return
# 258 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"

# 259 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// LittlerootTown_MaysHouse_1F_EventScript_MayApproachPlayer2::
# 260 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	applymovement LOCALID_RIVALS_HOUSE_1F_RIVAL, LittlerootTown_MaysHouse_1F_Movement_MayApproachPlayer2
# 261 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	waitmovement 0
# 262 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	return
# 263 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"

# 264 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// LittlerootTown_MaysHouse_1F_Movement_MayApproachPlayer0:
# 265 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	walk_in_place_faster_left
# 266 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	walk_left
# 267 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	walk_in_place_faster_up
# 268 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	walk_up
# 269 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	walk_up
# 270 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	walk_up
# 271 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	walk_up
# 272 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	step_end
# 273 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"

# 274 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// LittlerootTown_MaysHouse_1F_Movement_MayApproachPlayer1:
# 275 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	walk_up
# 276 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	walk_up
# 277 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	walk_up
# 278 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	step_end
# 279 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"

# 280 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// LittlerootTown_MaysHouse_1F_Movement_MayApproachPlayer2:
# 281 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	walk_in_place_faster_right
# 282 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	walk_right
# 283 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	walk_in_place_faster_up
# 284 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	walk_up
# 285 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	walk_up
# 286 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	walk_up
# 287 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	walk_up
# 288 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	step_end
# 289 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"

# 290 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// LittlerootTown_MaysHouse_1F_EventScript_MayGoUpstairs0::
# 291 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	applymovement LOCALID_PLAYER, LittlerootTown_MaysHouse_1F_Movement_PlayerWatchMayExit0
# 292 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	applymovement LOCALID_RIVALS_HOUSE_1F_RIVAL, LittlerootTown_MaysHouse_1F_Movement_MayGoUpstairs0
# 293 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	waitmovement 0
# 294 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	return
# 295 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"

# 296 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// LittlerootTown_MaysHouse_1F_EventScript_MayGoUpstairs1::
# 297 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	applymovement LOCALID_PLAYER, LittlerootTown_MaysHouse_1F_Movement_PlayerWatchMayExit1
# 298 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	applymovement LOCALID_RIVALS_HOUSE_1F_RIVAL, LittlerootTown_MaysHouse_1F_Movement_MayGoUpstairs1
# 299 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	waitmovement 0
# 300 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	return
# 301 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"

# 302 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// LittlerootTown_MaysHouse_1F_EventScript_MayGoUpstairs2::
# 303 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	applymovement LOCALID_PLAYER, LittlerootTown_MaysHouse_1F_Movement_PlayerWatchMayExit2
# 304 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	applymovement LOCALID_RIVALS_HOUSE_1F_RIVAL, LittlerootTown_MaysHouse_1F_Movement_MayGoUpstairs2
# 305 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	waitmovement 0
# 306 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	return
# 307 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"

# 308 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// LittlerootTown_MaysHouse_1F_Movement_PlayerWatchMayExit0:
# 309 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	delay_16
# 310 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	delay_8
# 311 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	walk_in_place_faster_right
# 312 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	step_end
# 313 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"

# 314 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// LittlerootTown_MaysHouse_1F_Movement_PlayerWatchMayExit1:
# 315 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	delay_16
# 316 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	delay_8
# 317 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	walk_in_place_faster_right
# 318 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	delay_16
# 319 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	delay_16
# 320 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	walk_in_place_faster_up
# 321 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	step_end
# 322 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"

# 323 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// LittlerootTown_MaysHouse_1F_Movement_PlayerWatchMayExit2:
# 324 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	delay_16
# 325 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	delay_8
# 326 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	walk_in_place_faster_left
# 327 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	step_end
# 328 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"

# 329 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// LittlerootTown_MaysHouse_1F_Movement_MayGoUpstairs0:
# 330 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	walk_in_place_faster_right
# 331 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	walk_right
# 332 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	walk_in_place_faster_up
# 333 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	walk_up
# 334 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	walk_up
# 335 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	step_end
# 336 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"

# 337 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// LittlerootTown_MaysHouse_1F_Movement_MayGoUpstairs1:
# 338 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	walk_in_place_faster_right
# 339 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	walk_right
# 340 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	walk_in_place_faster_up
# 341 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	walk_up
# 342 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	walk_up
# 343 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	walk_in_place_faster_left
# 344 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	walk_left
# 345 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	walk_in_place_faster_up
# 346 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	walk_up
# 347 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	step_end
# 348 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"

# 349 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// LittlerootTown_MaysHouse_1F_Movement_MayGoUpstairs2:
# 350 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	walk_in_place_faster_left
# 351 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	walk_left
# 352 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	walk_in_place_faster_up
# 353 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	walk_up
# 354 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	walk_up
# 355 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	step_end
# 356 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"

# 357 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// RivalsHouse_1F_Text_OhYoureTheNewNeighbor:
# 358 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	.string "Oh, hello. And you are?\p"
# 359 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	.string "… … … … … … … … …\n"
# 360 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	.string "… … … … … … … … …\p"
# 361 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	.string "Oh, you're {PLAYER}{KUN}, our new next-door\n"
# 362 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	.string "neighbor! Hi!\p"
# 363 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	.string "We have a {STR_VAR_1} about the same\n"
# 364 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	.string "age as you.\p"
# 365 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	.string "Our {STR_VAR_1} was excited about making\n"
# 366 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	.string "a new friend.\p"
# 367 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	.string "Our {STR_VAR_1} is upstairs, I think.$"
# 368 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"

# 369 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// RivalsHouse_1F_Text_LikeChildLikeFather:
# 370 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	.string "Like child, like father.\p"
# 371 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	.string "My husband is as wild about POKéMON\n"
# 372 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	.string "as our child.\p"
# 373 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	.string "If he's not at his LAB, he's likely\n"
# 374 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	.string "scrabbling about in grassy places.$"
# 375 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"

# 376 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// RivalsHouse_1F_Text_TooBusyToNoticeVisit:
# 377 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	.string "That {RIVAL}!\p"
# 378 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	.string "I guess our child is too busy with\n"
# 379 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	.string "POKéMON to notice that you came\l"
# 380 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	.string "to visit, {PLAYER}{KUN}.$"
# 381 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"

# 382 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// RivalsHouse_1F_Text_WentOutToRoute103:
# 383 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	.string "Oh, {RIVAL} went out to ROUTE 103\n"
# 384 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	.string "just a little while ago.\p"
# 385 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	.string "Like father, like child.\n"
# 386 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	.string "{RIVAL} can't stay quietly at home.$"
# 387 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"

# 388 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// RivalsHouse_1F_Text_ShouldGoHomeEverySoOften:
# 389 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	.string "I think it's wonderful for people to\n"
# 390 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	.string "travel with POKéMON.\p"
# 391 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	.string "But you should go home every so often\n"
# 392 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	.string "to let your mother know you're okay.\p"
# 393 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	.string "She might not say it, but I'm sure she\n"
# 394 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	.string "worries about you, {PLAYER}{KUN}.$"
# 395 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"

# 396 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// RivalsHouse_1F_Text_MayWhoAreYou:
# 397 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	.string "Huh?\n"
# 398 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	.string "Who… Who are you?\p"
# 399 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	.string "… … … … … … … …\n"
# 400 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	.string "… … … … … … … …\p"
# 401 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	.string "Oh, you're {PLAYER}{KUN}.\n"
# 402 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	.string "So your move was today.\p"
# 403 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	.string "Um… I'm MAY.\n"
# 404 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	.string "Glad to meet you!\p"
# 405 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	.string "I…\n"
# 406 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	.string "I have this dream of becoming friends\l"
# 407 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	.string "with POKéMON all over the world.\p"
# 408 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	.string "I… I heard about you, {PLAYER}{KUN}, from\n"
# 409 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	.string "my dad, PROF. BIRCH.\p"
# 410 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	.string "I was hoping that you would be nice,\n"
# 411 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	.string "{PLAYER}{KUN}, and that we could be friends.\p"
# 412 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	.string "Oh, this is silly, isn't it?\n"
# 413 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	.string "I… I've just met you, {PLAYER}{KUN}.\p"
# 414 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	.string "Eheheh…\p"
# 415 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	.string "Oh, no! I forgot!\p"
# 416 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	.string "I was supposed to go help Dad catch\n"
# 417 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	.string "some wild POKéMON!\p"
# 418 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	.string "{PLAYER}{KUN}, I'll catch you later!$"
# 419 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"

# 420 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// RivalsHouse_1F_Text_BrendanWhoAreYou:
# 421 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	.string "Hey!\n"
# 422 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	.string "You…\p"
# 423 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	.string "Who are you?\p"
# 424 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	.string "Oh, you're {PLAYER}, aren't you?\n"
# 425 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	.string "Moved in next door, right?\p"
# 426 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	.string "I didn't know that you're a girl.\p"
# 427 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	.string "Dad, PROF. BIRCH, said that our new\n"
# 428 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	.string "next-door neighbor is a GYM LEADER's\l"
# 429 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	.string "kid, so I assumed you'd be a guy.\p"
# 430 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	.string "My name's BRENDAN.\n"
# 431 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	.string "So, hi, neighbor!\p"
# 432 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	.string "Huh? Hey, {PLAYER}, don't you have\n"
# 433 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	.string "a POKéMON?\p"
# 434 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	.string "Do you want me to go catch you one?\p"
# 435 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	.string "Aw, darn, I forgot…\p"
# 436 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	.string "I'm supposed to go help my dad catch\n"
# 437 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	.string "some wild POKéMON.\p"
# 438 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	.string "Some other time, okay?$"
# 439 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"

# 440 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// RivalsHouse_1F_Text_DoYouHavePokemon:
# 441 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	.string "Hi, neighbor!\p"
# 442 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	.string "Do you already have your\n"
# 443 "data/maps/PetalburgCity_PlayersHouse_1F/scripts.pory"
// 	.string "own POKéMON?$"
