# 1 "data/maps/PetalburgCity/scripts.pory"

# 2 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_MapScripts::
# 3 "data/maps/PetalburgCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PetalburgCity_OnTransition
# 4 "data/maps/PetalburgCity/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PetalburgCity_OnFrame
# 5 "data/maps/PetalburgCity/scripts.pory"
	.byte 0
# 6 "data/maps/PetalburgCity/scripts.pory"

# 7 "data/maps/PetalburgCity/scripts.pory"
	@ State descriptions for VAR_PETALBURG_INTRO_STATE
# 8 "data/maps/PetalburgCity/scripts.pory"
	@ 1 - in truck, male player
# 9 "data/maps/PetalburgCity/scripts.pory"
	@ 2 - in truck, female player
# 10 "data/maps/PetalburgCity/scripts.pory"
	@ 3 - entered house
# 11 "data/maps/PetalburgCity/scripts.pory"
	@ 4 - told to go set clock
# 12 "data/maps/PetalburgCity/scripts.pory"
	@ 5 - entered 2f, to set clock
# 13 "data/maps/PetalburgCity/scripts.pory"
	@ 6 - set clock, ready to leave
# 14 "data/maps/PetalburgCity/scripts.pory"
	@ 7 - told to go and meet dad at gym
# 15 "data/maps/PetalburgCity/scripts.pory"

# 16 "data/maps/PetalburgCity/scripts.pory"
	@ State descriptions for VAR_PETALBURG_HOUSE_STATE
# 17 "data/maps/PetalburgCity/scripts.pory"
	@ 1 - on truck 
# 18 "data/maps/PetalburgCity/scripts.pory"

# 19 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_OnTransition:
# 20 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_VISITED_PETALBURG_CITY
# 21 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_PETALBURG_INTRO_STATE, 1, PetalburgCity_EventScript_MoveDadToHouseDoor
# 22 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_PETALBURG_INTRO_STATE, 2, PetalburgCity_EventScript_MoveDadToHouseDoor
# 23 "data/maps/PetalburgCity/scripts.pory"

# 24 "data/maps/PetalburgCity/scripts.pory"

# 25 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_PETALBURG_CITY_STATE, 0, PetalburgCity_EventScript_MoveGymBoyToWestEntrance
# 26 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_PETALBURG_CITY_STATE, 2, PetalburgCity_EventScript_DisableMapNameAndMusic
# 27 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_PETALBURG_CITY_STATE, 4, PetalburgCity_EventScript_DisableMapNameAndMusic
# 28 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_PETALBURG_GYM_STATE, 8, PetalburgCity_EventScript_SetGymDoorsUnlocked
# 29 "data/maps/PetalburgCity/scripts.pory"
	end
# 30 "data/maps/PetalburgCity/scripts.pory"

# 31 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_OnFrame::
# 32 "data/maps/PetalburgCity/scripts.pory"
	map_script_2 VAR_PETALBURG_INTRO_STATE, 1, PetalburgCity_EventScript_StepOffTruck
# 33 "data/maps/PetalburgCity/scripts.pory"
	map_script_2 VAR_PETALBURG_INTRO_STATE, 2, PetalburgCity_EventScript_StepOffTruck
# 34 "data/maps/PetalburgCity/scripts.pory"
	map_script_2 VAR_PETALBURG_CITY_STATE, 2, PetalburgCity_EventScript_WallyTutorial
# 35 "data/maps/PetalburgCity/scripts.pory"
	map_script_2 VAR_PETALBURG_CITY_STATE, 4, PetalburgCity_EventScript_WalkToWallyHouse
# 36 "data/maps/PetalburgCity/scripts.pory"
	.2byte 0
# 37 "data/maps/PetalburgCity/scripts.pory"

# 38 "data/maps/PetalburgCity/scripts.pory"
// Event Scripts
# 39 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_StepOffTruck::
# 40 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 41 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8004, 20
# 42 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8005, 24
# 43 "data/maps/PetalburgCity/scripts.pory"
	call PetalburgCity_EventScript_GoInsideWithDad
# 44 "data/maps/PetalburgCity/scripts.pory"
	warpsilent MAP_PETALBURG_CITY_PLAYERS_HOUSE_1F, 2, 8
# 45 "data/maps/PetalburgCity/scripts.pory"
	waitstate
# 46 "data/maps/PetalburgCity/scripts.pory"
	releaseall
# 47 "data/maps/PetalburgCity/scripts.pory"
	end
# 48 "data/maps/PetalburgCity/scripts.pory"

# 49 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_GoInsideWithDad::
# 50 "data/maps/PetalburgCity/scripts.pory"
	delay 15
# 51 "data/maps/PetalburgCity/scripts.pory"
	playse SE_LEDGE
# 52 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Movement_PlayerStepOffTruck
# 53 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 54 "data/maps/PetalburgCity/scripts.pory"
	opendoor VAR_0x8004, VAR_0x8005
# 55 "data/maps/PetalburgCity/scripts.pory"
	waitdooranim
# 56 "data/maps/PetalburgCity/scripts.pory"
	addobject LOCALID_PETALBURG_DAD
# 57 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_DAD, PetalburgCity_Movement_DadExitHouse
# 58 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 59 "data/maps/PetalburgCity/scripts.pory"
	closedoor VAR_0x8004, VAR_0x8005
# 60 "data/maps/PetalburgCity/scripts.pory"
	waitdooranim
# 61 "data/maps/PetalburgCity/scripts.pory"
	delay 10
# 62 "data/maps/PetalburgCity/scripts.pory"
	// applymovement LOCALID_PETALBURG_DAD, PetalburgCity_Movement_DadApproachPlayerAtTruck
# 63 "data/maps/PetalburgCity/scripts.pory"
	// waitmovement 0
# 64 "data/maps/PetalburgCity/scripts.pory"
	msgbox LittlerootTown_Text_OurNewHomeLetsGoInside, MSGBOX_DEFAULT
# 65 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 66 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_DAD, PetalburgCity_Movement_DadApproachDoor
# 67 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Movement_PlayerApproachDoor
# 68 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 69 "data/maps/PetalburgCity/scripts.pory"
	opendoor VAR_0x8004, VAR_0x8005
# 70 "data/maps/PetalburgCity/scripts.pory"
	waitdooranim
# 71 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_DAD, PetalburgCity_Movement_DadEnterHouse
# 72 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Movement_PlayerEnterHouse
# 73 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 74 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MOM_OUTSIDE
# 75 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_PETALBURG_INTRO_STATE, 3
# 76 "data/maps/PetalburgCity/scripts.pory"
	hideplayer
# 77 "data/maps/PetalburgCity/scripts.pory"
	closedoor VAR_0x8004, VAR_0x8005
# 78 "data/maps/PetalburgCity/scripts.pory"
	waitdooranim
# 79 "data/maps/PetalburgCity/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_FAT_MAN
# 80 "data/maps/PetalburgCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 81 "data/maps/PetalburgCity/scripts.pory"
	return
# 82 "data/maps/PetalburgCity/scripts.pory"

# 83 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerStepOffTruck:
# 84 "data/maps/PetalburgCity/scripts.pory"
	jump_right
# 85 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 86 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 87 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 88 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 89 "data/maps/PetalburgCity/scripts.pory"

# 90 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_DadExitHouse:
# 91 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 92 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 93 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 94 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 95 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 96 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 97 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 98 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 99 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 100 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 101 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 102 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 103 "data/maps/PetalburgCity/scripts.pory"

# 104 "data/maps/PetalburgCity/scripts.pory"
// PetalburgCity_Movement_DadApproachPlayerAtTruck:
# 105 "data/maps/PetalburgCity/scripts.pory"
// 	walk_in_place_faster_left
# 106 "data/maps/PetalburgCity/scripts.pory"
// 	step_end
# 107 "data/maps/PetalburgCity/scripts.pory"

# 108 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_DadApproachDoor:
# 109 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 110 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 111 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 112 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 113 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 114 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 115 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 116 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 117 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 118 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 119 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 120 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 121 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 122 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 123 "data/maps/PetalburgCity/scripts.pory"

# 124 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_DadEnterHouse:
# 125 "data/maps/PetalburgCity/scripts.pory"
	set_invisible
# 126 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 127 "data/maps/PetalburgCity/scripts.pory"

# 128 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerApproachDoor:
# 129 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 130 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 131 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 132 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 133 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 134 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 135 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 136 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 137 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 138 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 139 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 140 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 141 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 142 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 143 "data/maps/PetalburgCity/scripts.pory"

# 144 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerEnterHouse:
# 145 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 146 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 147 "data/maps/PetalburgCity/scripts.pory"

# 148 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_MoveDadToHouseDoor::
# 149 "data/maps/PetalburgCity/scripts.pory"
	setobjectxyperm LOCALID_PETALBURG_DAD, 20, 24
# 150 "data/maps/PetalburgCity/scripts.pory"
	return
# 151 "data/maps/PetalburgCity/scripts.pory"

# 152 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_SetHomeDoorCoords::
# 153 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8004, 20
# 154 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8005, 24
# 155 "data/maps/PetalburgCity/scripts.pory"
	return
# 156 "data/maps/PetalburgCity/scripts.pory"

# 157 "data/maps/PetalburgCity/scripts.pory"

# 158 "data/maps/PetalburgCity/scripts.pory"

# 159 "data/maps/PetalburgCity/scripts.pory"

# 160 "data/maps/PetalburgCity/scripts.pory"

# 161 "data/maps/PetalburgCity/scripts.pory"

# 162 "data/maps/PetalburgCity/scripts.pory"

# 163 "data/maps/PetalburgCity/scripts.pory"

# 164 "data/maps/PetalburgCity/scripts.pory"

# 165 "data/maps/PetalburgCity/scripts.pory"

# 166 "data/maps/PetalburgCity/scripts.pory"

# 167 "data/maps/PetalburgCity/scripts.pory"

# 168 "data/maps/PetalburgCity/scripts.pory"

# 169 "data/maps/PetalburgCity/scripts.pory"

# 170 "data/maps/PetalburgCity/scripts.pory"

# 171 "data/maps/PetalburgCity/scripts.pory"

# 172 "data/maps/PetalburgCity/scripts.pory"

# 173 "data/maps/PetalburgCity/scripts.pory"

# 174 "data/maps/PetalburgCity/scripts.pory"

# 175 "data/maps/PetalburgCity/scripts.pory"

# 176 "data/maps/PetalburgCity/scripts.pory"

# 177 "data/maps/PetalburgCity/scripts.pory"

# 178 "data/maps/PetalburgCity/scripts.pory"

# 179 "data/maps/PetalburgCity/scripts.pory"

# 180 "data/maps/PetalburgCity/scripts.pory"

# 181 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_MoveGymBoyToWestEntrance::
# 182 "data/maps/PetalburgCity/scripts.pory"
	setobjectxyperm LOCALID_GYM_BOY, 5, 11
# 183 "data/maps/PetalburgCity/scripts.pory"
	return
# 184 "data/maps/PetalburgCity/scripts.pory"

# 185 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_DisableMapNameAndMusic::
# 186 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 187 "data/maps/PetalburgCity/scripts.pory"
	savebgm MUS_FOLLOW_ME
# 188 "data/maps/PetalburgCity/scripts.pory"
	return
# 189 "data/maps/PetalburgCity/scripts.pory"

# 190 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_SetGymDoorsUnlocked::
# 191 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_PETALBURG_GYM_STATE, 7
# 192 "data/maps/PetalburgCity/scripts.pory"
	return
# 193 "data/maps/PetalburgCity/scripts.pory"

# 194 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_WallyTutorial::
# 195 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 196 "data/maps/PetalburgCity/scripts.pory"
	special SavePlayerParty
# 197 "data/maps/PetalburgCity/scripts.pory"
	special LoadWallyZigzagoon
# 198 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_WALLY, PetalburgCity_Movement_WallyTutorialWally
# 199 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Movement_WallyTutorialPlayer
# 200 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 201 "data/maps/PetalburgCity/scripts.pory"
	msgbox Route102_Text_WatchMeCatchPokemon, MSGBOX_DEFAULT
# 202 "data/maps/PetalburgCity/scripts.pory"
	special StartWallyTutorialBattle
# 203 "data/maps/PetalburgCity/scripts.pory"
	waitstate
# 204 "data/maps/PetalburgCity/scripts.pory"
	msgbox Route102_Text_WallyIDidIt, MSGBOX_DEFAULT
# 205 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_WALLY, Common_Movement_WalkInPlaceFasterLeft, MAP_PETALBURG_CITY
# 206 "data/maps/PetalburgCity/scripts.pory"
	waitmovement LOCALID_PETALBURG_WALLY, MAP_PETALBURG_CITY
# 207 "data/maps/PetalburgCity/scripts.pory"
	msgbox Route102_Text_LetsGoBack, MSGBOX_DEFAULT
# 208 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 209 "data/maps/PetalburgCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 210 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_PETALBURG_CITY_STATE, 3
# 211 "data/maps/PetalburgCity/scripts.pory"
	fadedefaultbgm
# 212 "data/maps/PetalburgCity/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 213 "data/maps/PetalburgCity/scripts.pory"
	special LoadPlayerParty
# 214 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_PETALBURG_GYM_STATE, 1
# 215 "data/maps/PetalburgCity/scripts.pory"
	warp MAP_PETALBURG_CITY_GYM, 4, 108
# 216 "data/maps/PetalburgCity/scripts.pory"
	waitstate
# 217 "data/maps/PetalburgCity/scripts.pory"
	releaseall
# 218 "data/maps/PetalburgCity/scripts.pory"
	end
# 219 "data/maps/PetalburgCity/scripts.pory"

# 220 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_WalkToWallyHouse::
# 221 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 222 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 223 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_WALLYS_DAD, PetalburgCity_Movement_WalkToWallyHouseWallysDad
# 224 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Movement_WalkToWallyHousePlayer
# 225 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 226 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8004, 7
# 227 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8005, 5
# 228 "data/maps/PetalburgCity/scripts.pory"
	opendoor VAR_0x8004, VAR_0x8005
# 229 "data/maps/PetalburgCity/scripts.pory"
	waitdooranim
# 230 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_WALLYS_DAD, PetalburgCity_Movement_WalkInsideHouseWallysDad
# 231 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Movement_WalkInsideHousePlayer
# 232 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 233 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_HIDE_PETALBURG_CITY_WALLYS_DAD
# 234 "data/maps/PetalburgCity/scripts.pory"
	hideobjectat LOCALID_PLAYER, MAP_PETALBURG_CITY
# 235 "data/maps/PetalburgCity/scripts.pory"
	closedoor VAR_0x8004, VAR_0x8005
# 236 "data/maps/PetalburgCity/scripts.pory"
	waitdooranim
# 237 "data/maps/PetalburgCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 238 "data/maps/PetalburgCity/scripts.pory"
	fadedefaultbgm
# 239 "data/maps/PetalburgCity/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 240 "data/maps/PetalburgCity/scripts.pory"
	warp MAP_PETALBURG_CITY_WALLYS_HOUSE, 2, 4
# 241 "data/maps/PetalburgCity/scripts.pory"
	waitstate
# 242 "data/maps/PetalburgCity/scripts.pory"
	releaseall
# 243 "data/maps/PetalburgCity/scripts.pory"
	end
# 244 "data/maps/PetalburgCity/scripts.pory"

# 245 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Boy::
# 246 "data/maps/PetalburgCity/scripts.pory"
	lock
# 247 "data/maps/PetalburgCity/scripts.pory"
	faceplayer
# 248 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_WaterReflection, MSGBOX_DEFAULT
# 249 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 250 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_BOY, Common_Movement_FaceOriginalDirection
# 251 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 252 "data/maps/PetalburgCity/scripts.pory"
	release
# 253 "data/maps/PetalburgCity/scripts.pory"
	end
# 254 "data/maps/PetalburgCity/scripts.pory"

# 255 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_WallysMom::
# 256 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_WhereIsWally, MSGBOX_NPC
# 257 "data/maps/PetalburgCity/scripts.pory"
	end
# 258 "data/maps/PetalburgCity/scripts.pory"

# 259 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WalkToWallyHousePlayer:
# 260 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 261 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 262 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 263 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 264 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 265 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 266 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 267 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 268 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 269 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 270 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 271 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 272 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 273 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 274 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 275 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 276 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 277 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 278 "data/maps/PetalburgCity/scripts.pory"

# 279 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WalkInsideHousePlayer:
# 280 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 281 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 282 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 283 "data/maps/PetalburgCity/scripts.pory"

# 284 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WalkToWallyHouseWallysDad:
# 285 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 286 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 287 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 288 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 289 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 290 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 291 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 292 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 293 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 294 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 295 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 296 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 297 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 298 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 299 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 300 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 301 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 302 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 303 "data/maps/PetalburgCity/scripts.pory"

# 304 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WalkInsideHouseWallysDad:
# 305 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 306 "data/maps/PetalburgCity/scripts.pory"
	set_invisible
# 307 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 308 "data/maps/PetalburgCity/scripts.pory"

# 309 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WallyTutorialPlayer:
# 310 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 311 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 312 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 313 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 314 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 315 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 316 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 317 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 318 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 319 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 320 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 321 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 322 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 323 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 324 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 325 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 326 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 327 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 328 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 329 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 330 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 331 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 332 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 333 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 334 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 335 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 336 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 337 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 338 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 339 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 340 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 341 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_right
# 342 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 343 "data/maps/PetalburgCity/scripts.pory"

# 344 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WallyTutorialWally:
# 345 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 346 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 347 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 348 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 349 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 350 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 351 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 352 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 353 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 354 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 355 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 356 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 357 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 358 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 359 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 360 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 361 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 362 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 363 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 364 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 365 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 366 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 367 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 368 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 369 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 370 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 371 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 372 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 373 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 374 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 375 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 376 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 377 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 378 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 379 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 380 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_right
# 381 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 382 "data/maps/PetalburgCity/scripts.pory"

# 383 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_GymSign::
# 384 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_GymSign, MSGBOX_SIGN
# 385 "data/maps/PetalburgCity/scripts.pory"
	end
# 386 "data/maps/PetalburgCity/scripts.pory"

# 387 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_CitySign::
# 388 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_CitySign, MSGBOX_SIGN
# 389 "data/maps/PetalburgCity/scripts.pory"
	end
# 390 "data/maps/PetalburgCity/scripts.pory"

# 391 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Gentleman::
# 392 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_FullPartyExplanation, MSGBOX_NPC
# 393 "data/maps/PetalburgCity/scripts.pory"
	end
# 394 "data/maps/PetalburgCity/scripts.pory"

# 395 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_WallyHouseSign::
# 396 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_WallyHouseSign, MSGBOX_SIGN
# 397 "data/maps/PetalburgCity/scripts.pory"
	end
# 398 "data/maps/PetalburgCity/scripts.pory"

# 399 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer0::
# 400 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 401 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 0
# 402 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer
# 403 "data/maps/PetalburgCity/scripts.pory"
	end
# 404 "data/maps/PetalburgCity/scripts.pory"

# 405 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer1::
# 406 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 407 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 1
# 408 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer
# 409 "data/maps/PetalburgCity/scripts.pory"
	end
# 410 "data/maps/PetalburgCity/scripts.pory"

# 411 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer2::
# 412 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 413 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 2
# 414 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer
# 415 "data/maps/PetalburgCity/scripts.pory"
	end
# 416 "data/maps/PetalburgCity/scripts.pory"

# 417 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer3::
# 418 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 419 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 3
# 420 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer
# 421 "data/maps/PetalburgCity/scripts.pory"
	end
# 422 "data/maps/PetalburgCity/scripts.pory"

# 423 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer::
# 424 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, Common_Movement_FacePlayer
# 425 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 426 "data/maps/PetalburgCity/scripts.pory"
	playbgm MUS_FOLLOW_ME, FALSE
# 427 "data/maps/PetalburgCity/scripts.pory"
	playse SE_PIN
# 428 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, Common_Movement_ExclamationMark
# 429 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 430 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, Common_Movement_Delay48
# 431 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 432 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_EventScript_BoyApproachPlayer0
# 433 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_EventScript_BoyApproachPlayer1
# 434 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_EventScript_BoyApproachPlayer2
# 435 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_EventScript_BoyApproachPlayer3
# 436 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_AreYouRookieTrainer, MSGBOX_DEFAULT
# 437 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 438 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_EventScript_LeadPlayerToGym0
# 439 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_EventScript_LeadPlayerToGym1
# 440 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_EventScript_LeadPlayerToGym2
# 441 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_EventScript_LeadPlayerToGym3
# 442 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_ThisIsPetalburgGym, MSGBOX_DEFAULT
# 443 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, Common_Movement_WalkInPlaceFasterRight
# 444 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 445 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 446 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_ThisIsGymSign, MSGBOX_DEFAULT
# 447 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 448 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkAway
# 449 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 450 "data/maps/PetalburgCity/scripts.pory"
	fadedefaultbgm
# 451 "data/maps/PetalburgCity/scripts.pory"
	releaseall
# 452 "data/maps/PetalburgCity/scripts.pory"
	end
# 453 "data/maps/PetalburgCity/scripts.pory"

# 454 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_BoyApproachPlayer0::
# 455 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyApproachPlayer0
# 456 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 457 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 458 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 459 "data/maps/PetalburgCity/scripts.pory"
	return
# 460 "data/maps/PetalburgCity/scripts.pory"

# 461 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_BoyApproachPlayer1::
# 462 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyApproachPlayer1
# 463 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 464 "data/maps/PetalburgCity/scripts.pory"
	return
# 465 "data/maps/PetalburgCity/scripts.pory"

# 466 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_BoyApproachPlayer2::
# 467 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyApproachPlayer2
# 468 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 469 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 470 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 471 "data/maps/PetalburgCity/scripts.pory"
	return
# 472 "data/maps/PetalburgCity/scripts.pory"

# 473 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_BoyApproachPlayer3::
# 474 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyApproachPlayer3
# 475 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 476 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 477 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 478 "data/maps/PetalburgCity/scripts.pory"
	return
# 479 "data/maps/PetalburgCity/scripts.pory"

# 480 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_LeadPlayerToGym0::
# 481 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkToGym0
# 482 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym0
# 483 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 484 "data/maps/PetalburgCity/scripts.pory"
	return
# 485 "data/maps/PetalburgCity/scripts.pory"

# 486 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_LeadPlayerToGym1::
# 487 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkToGym1
# 488 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym1
# 489 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 490 "data/maps/PetalburgCity/scripts.pory"
	return
# 491 "data/maps/PetalburgCity/scripts.pory"

# 492 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_LeadPlayerToGym2::
# 493 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkToGym2
# 494 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym2
# 495 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 496 "data/maps/PetalburgCity/scripts.pory"
	return
# 497 "data/maps/PetalburgCity/scripts.pory"

# 498 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_LeadPlayerToGym3::
# 499 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkToGym3
# 500 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym3
# 501 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 502 "data/maps/PetalburgCity/scripts.pory"
	return
# 503 "data/maps/PetalburgCity/scripts.pory"

# 504 "data/maps/PetalburgCity/scripts.pory"
@ Unused
# 505 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_Delay48::
# 506 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 507 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 508 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 509 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 510 "data/maps/PetalburgCity/scripts.pory"

# 511 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyApproachPlayer0:
# 512 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 513 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 514 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 515 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 516 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 517 "data/maps/PetalburgCity/scripts.pory"

# 518 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyApproachPlayer1:
# 519 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 520 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 521 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 522 "data/maps/PetalburgCity/scripts.pory"

# 523 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyApproachPlayer2:
# 524 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 525 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 526 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 527 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
# 528 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 529 "data/maps/PetalburgCity/scripts.pory"

# 530 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyApproachPlayer3:
# 531 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 532 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 533 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 534 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 535 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
# 536 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 537 "data/maps/PetalburgCity/scripts.pory"

# 538 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkToGym0:
# 539 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 540 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 541 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 542 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 543 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 544 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 545 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 546 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 547 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 548 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 549 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 550 "data/maps/PetalburgCity/scripts.pory"

# 551 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkToGym1:
# 552 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 553 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 554 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 555 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 556 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 557 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 558 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 559 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 560 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 561 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 562 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 563 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 564 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 565 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 566 "data/maps/PetalburgCity/scripts.pory"

# 567 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkToGym2:
# 568 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 569 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 570 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 571 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 572 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 573 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 574 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 575 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 576 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 577 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 578 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 579 "data/maps/PetalburgCity/scripts.pory"

# 580 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkToGym3:
# 581 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 582 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 583 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 584 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 585 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 586 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 587 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 588 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 589 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 590 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 591 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 592 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 593 "data/maps/PetalburgCity/scripts.pory"

# 594 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkAway:
# 595 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 596 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 597 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 598 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 599 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 600 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 601 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 602 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 603 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 604 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 605 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 606 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 607 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 608 "data/maps/PetalburgCity/scripts.pory"

# 609 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWalkToGym0:
# 610 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 611 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 612 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 613 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 614 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 615 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 616 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 617 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 618 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 619 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 620 "data/maps/PetalburgCity/scripts.pory"

# 621 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWalkToGym1:
# 622 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 623 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 624 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 625 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 626 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 627 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 628 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 629 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 630 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 631 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 632 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 633 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 634 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 635 "data/maps/PetalburgCity/scripts.pory"

# 636 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWalkToGym2:
# 637 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 638 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 639 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 640 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 641 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 642 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 643 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 644 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 645 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 646 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 647 "data/maps/PetalburgCity/scripts.pory"

# 648 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWalkToGym3:
# 649 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 650 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 651 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 652 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 653 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 654 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 655 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 656 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 657 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 658 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 659 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 660 "data/maps/PetalburgCity/scripts.pory"

# 661 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott0::
# 662 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 663 "data/maps/PetalburgCity/scripts.pory"
	addobject LOCALID_PETALBURG_SCOTT
# 664 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 0
# 665 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy LOCALID_PETALBURG_SCOTT, 13, 10
# 666 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_Scott
# 667 "data/maps/PetalburgCity/scripts.pory"
	end
# 668 "data/maps/PetalburgCity/scripts.pory"

# 669 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott1::
# 670 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 671 "data/maps/PetalburgCity/scripts.pory"
	addobject LOCALID_PETALBURG_SCOTT
# 672 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 1
# 673 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy LOCALID_PETALBURG_SCOTT, 13, 11
# 674 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_Scott
# 675 "data/maps/PetalburgCity/scripts.pory"
	end
# 676 "data/maps/PetalburgCity/scripts.pory"

# 677 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott2::
# 678 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 679 "data/maps/PetalburgCity/scripts.pory"
	addobject LOCALID_PETALBURG_SCOTT
# 680 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 2
# 681 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy LOCALID_PETALBURG_SCOTT, 13, 12
# 682 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_Scott
# 683 "data/maps/PetalburgCity/scripts.pory"
	end
# 684 "data/maps/PetalburgCity/scripts.pory"

# 685 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott3::
# 686 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 687 "data/maps/PetalburgCity/scripts.pory"
	addobject LOCALID_PETALBURG_SCOTT
# 688 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 3
# 689 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy LOCALID_PETALBURG_SCOTT, 13, 13
# 690 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_Scott
# 691 "data/maps/PetalburgCity/scripts.pory"
	end
# 692 "data/maps/PetalburgCity/scripts.pory"

# 693 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott::
# 694 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, PetalburgCity_Movement_ScottStartWalkLeft
# 695 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 696 "data/maps/PetalburgCity/scripts.pory"
	playse SE_PIN
# 697 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, Common_Movement_ExclamationMark
# 698 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 699 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, Common_Movement_Delay48
# 700 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 701 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, PetalburgCity_Movement_ScottApproachPlayer
# 702 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 703 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 704 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 705 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_SCOTT_STATE, 1
# 706 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_AreYouATrainer, MSGBOX_DEFAULT
# 707 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 708 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, Common_Movement_WalkInPlaceFasterRight
# 709 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 710 "data/maps/PetalburgCity/scripts.pory"
	delay 30
# 711 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_WellMaybeNot, MSGBOX_DEFAULT
# 712 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 713 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, Common_Movement_WalkInPlaceFasterLeft
# 714 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 715 "data/maps/PetalburgCity/scripts.pory"
	delay 30
# 716 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_ImLookingForTalentedTrainers, MSGBOX_DEFAULT
# 717 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 718 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_EventScript_ScottExit0
# 719 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_EventScript_ScottExit1
# 720 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_EventScript_ScottExit2
# 721 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_EventScript_ScottExit3
# 722 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_SCOTT_PETALBURG_ENCOUNTER, 1
# 723 "data/maps/PetalburgCity/scripts.pory"
	removeobject LOCALID_PETALBURG_SCOTT
# 724 "data/maps/PetalburgCity/scripts.pory"
	releaseall
# 725 "data/maps/PetalburgCity/scripts.pory"
	end
# 726 "data/maps/PetalburgCity/scripts.pory"

# 727 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ScottExit0::
# 728 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit0
# 729 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, PetalburgCity_Movement_ScottExit0
# 730 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 731 "data/maps/PetalburgCity/scripts.pory"
	return
# 732 "data/maps/PetalburgCity/scripts.pory"

# 733 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ScottExit1::
# 734 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit1
# 735 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, PetalburgCity_Movement_ScottExit1
# 736 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 737 "data/maps/PetalburgCity/scripts.pory"
	return
# 738 "data/maps/PetalburgCity/scripts.pory"

# 739 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ScottExit2::
# 740 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit2
# 741 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, PetalburgCity_Movement_ScottExit2
# 742 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 743 "data/maps/PetalburgCity/scripts.pory"
	return
# 744 "data/maps/PetalburgCity/scripts.pory"

# 745 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ScottExit3::
# 746 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit3
# 747 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, PetalburgCity_Movement_ScottExit3
# 748 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 749 "data/maps/PetalburgCity/scripts.pory"
	return
# 750 "data/maps/PetalburgCity/scripts.pory"

# 751 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottStartWalkLeft:
# 752 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 753 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 754 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 755 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 756 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 757 "data/maps/PetalburgCity/scripts.pory"

# 758 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottApproachPlayer:
# 759 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 760 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 761 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 762 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 763 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 764 "data/maps/PetalburgCity/scripts.pory"

# 765 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottExit0:
# 766 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 767 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 768 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 769 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 770 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 771 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 772 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 773 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 774 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 775 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 776 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 777 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 778 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 779 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 780 "data/maps/PetalburgCity/scripts.pory"

# 781 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWatchScottExit0:
# 782 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 783 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
# 784 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 785 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 786 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 787 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_left
# 788 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 789 "data/maps/PetalburgCity/scripts.pory"

# 790 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottExit1:
# 791 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 792 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 793 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 794 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 795 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 796 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 797 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 798 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 799 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 800 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 801 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 802 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 803 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 804 "data/maps/PetalburgCity/scripts.pory"

# 805 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWatchScottExit1:
# 806 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 807 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
# 808 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 809 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 810 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_left
# 811 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 812 "data/maps/PetalburgCity/scripts.pory"

# 813 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottExit2:
# 814 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 815 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 816 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 817 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 818 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 819 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 820 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 821 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 822 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 823 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 824 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 825 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 826 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 827 "data/maps/PetalburgCity/scripts.pory"

# 828 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWatchScottExit2:
# 829 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 830 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
# 831 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 832 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 833 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_left
# 834 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 835 "data/maps/PetalburgCity/scripts.pory"

# 836 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottExit3:
# 837 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 838 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 839 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 840 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 841 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 842 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 843 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 844 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 845 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 846 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 847 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 848 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 849 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 850 "data/maps/PetalburgCity/scripts.pory"

# 851 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWatchScottExit3:
# 852 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 853 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 854 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 855 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 856 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_left
# 857 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 858 "data/maps/PetalburgCity/scripts.pory"

# 859 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_GymBoy::
# 860 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_AreYouRookieTrainer, MSGBOX_NPC
# 861 "data/maps/PetalburgCity/scripts.pory"
	end
# 862 "data/maps/PetalburgCity/scripts.pory"

# 863 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_WhereIsWally:
# 864 "data/maps/PetalburgCity/scripts.pory"
	.string "Where has our WALLY gone?\p"
# 865 "data/maps/PetalburgCity/scripts.pory"
	.string "We have to leave for VERDANTURF TOWN\n"
# 866 "data/maps/PetalburgCity/scripts.pory"
	.string "very soon…$"
# 867 "data/maps/PetalburgCity/scripts.pory"

# 868 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_AreYouRookieTrainer:
# 869 "data/maps/PetalburgCity/scripts.pory"
	.string "Hiya! Are you maybe…\n"
# 870 "data/maps/PetalburgCity/scripts.pory"
	.string "A rookie TRAINER?\p"
# 871 "data/maps/PetalburgCity/scripts.pory"
	.string "Do you know what POKéMON TRAINERS\n"
# 872 "data/maps/PetalburgCity/scripts.pory"
	.string "do when they reach a new town?\p"
# 873 "data/maps/PetalburgCity/scripts.pory"
	.string "They first check what kind of GYM\n"
# 874 "data/maps/PetalburgCity/scripts.pory"
	.string "is in the town.$"
# 875 "data/maps/PetalburgCity/scripts.pory"

# 876 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_ThisIsPetalburgGym:
# 877 "data/maps/PetalburgCity/scripts.pory"
	.string "See? This is PETALBURG CITY's GYM.$"
# 878 "data/maps/PetalburgCity/scripts.pory"

# 879 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_ThisIsGymSign:
# 880 "data/maps/PetalburgCity/scripts.pory"
	.string "This is the GYM's sign. Look for it\n"
# 881 "data/maps/PetalburgCity/scripts.pory"
	.string "whenever you're looking for a GYM.$"
# 882 "data/maps/PetalburgCity/scripts.pory"

# 883 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_WaterReflection:
# 884 "data/maps/PetalburgCity/scripts.pory"
	.string "My face is reflected in the water.\p"
# 885 "data/maps/PetalburgCity/scripts.pory"
	.string "It's a shining grin full of hope…\p"
# 886 "data/maps/PetalburgCity/scripts.pory"
	.string "Or it could be a look of somber silence\n"
# 887 "data/maps/PetalburgCity/scripts.pory"
	.string "struggling with fear…\p"
# 888 "data/maps/PetalburgCity/scripts.pory"
	.string "What do you see reflected in your face?$"
# 889 "data/maps/PetalburgCity/scripts.pory"

# 890 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_FullPartyExplanation:
# 891 "data/maps/PetalburgCity/scripts.pory"
	.string "Let's say you have six POKéMON.\n"
# 892 "data/maps/PetalburgCity/scripts.pory"
	.string "If you catch another one…\p"
# 893 "data/maps/PetalburgCity/scripts.pory"
	.string "It is automatically sent to a STORAGE\n"
# 894 "data/maps/PetalburgCity/scripts.pory"
	.string "BOX over a PC connection.$"
# 895 "data/maps/PetalburgCity/scripts.pory"

# 896 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_GymSign:
# 897 "data/maps/PetalburgCity/scripts.pory"
	.string "PETALBURG CITY POKéMON GYM\n"
# 898 "data/maps/PetalburgCity/scripts.pory"
	.string "LEADER: NORMAN\l"
# 899 "data/maps/PetalburgCity/scripts.pory"
	.string "“A man in pursuit of power!”$"
# 900 "data/maps/PetalburgCity/scripts.pory"

# 901 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_CitySign:
# 902 "data/maps/PetalburgCity/scripts.pory"
	.string "PETALBURG CITY\n"
# 903 "data/maps/PetalburgCity/scripts.pory"
	.string "“Where people mingle with nature.”$"
# 904 "data/maps/PetalburgCity/scripts.pory"

# 905 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_WallyHouseSign:
# 906 "data/maps/PetalburgCity/scripts.pory"
	.string "WALLY'S HOUSE$"
# 907 "data/maps/PetalburgCity/scripts.pory"

# 908 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_AreYouATrainer:
# 909 "data/maps/PetalburgCity/scripts.pory"
	.string "Excuse me!\p"
# 910 "data/maps/PetalburgCity/scripts.pory"
	.string "Let me guess, from the way you're\n"
# 911 "data/maps/PetalburgCity/scripts.pory"
	.string "dressed, are you a POKéMON TRAINER?$"
# 912 "data/maps/PetalburgCity/scripts.pory"

# 913 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_WellMaybeNot:
# 914 "data/maps/PetalburgCity/scripts.pory"
	.string "… … … … … …\p"
# 915 "data/maps/PetalburgCity/scripts.pory"
	.string "Well, maybe not.\n"
# 916 "data/maps/PetalburgCity/scripts.pory"
	.string "Your clothes aren't all that dirty.\p"
# 917 "data/maps/PetalburgCity/scripts.pory"
	.string "You're either a rookie TRAINER,\n"
# 918 "data/maps/PetalburgCity/scripts.pory"
	.string "or maybe you're just an ordinary kid.$"
# 919 "data/maps/PetalburgCity/scripts.pory"

# 920 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_ImLookingForTalentedTrainers:
# 921 "data/maps/PetalburgCity/scripts.pory"
	.string "I'm roaming the land in search of\n"
# 922 "data/maps/PetalburgCity/scripts.pory"
	.string "talented TRAINERS.\p"
# 923 "data/maps/PetalburgCity/scripts.pory"
	.string "I'm sorry to have taken your time.$"
