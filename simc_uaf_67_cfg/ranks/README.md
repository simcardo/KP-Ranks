# KP Ranks
[![GitHub license](https://img.shields.io/github/license/KillahPotatoes/KP-Ranks.svg)](https://github.com/KillahPotatoes/KP-Ranks/blob/master/LICENSE)
[![GitHub release](https://img.shields.io/github/release/KillahPotatoes/KP-Ranks.svg)](https://github.com/KillahPotatoes/KP-Ranks/releases)
[![GitHub Release Date](https://img.shields.io/github/release-date/KillahPotatoes/KP-Ranks.svg)](https://github.com/KillahPotatoes/KP-Ranks/releases)
[![Github All Releases](https://img.shields.io/github/downloads/KillahPotatoes/KP-Ranks/total.svg)](https://github.com/KillahPotatoes/KP-Ranks)

[![GitHub issues](https://img.shields.io/github/issues-raw/KillahPotatoes/KP-Ranks.svg)](https://github.com/KillahPotatoes/KP-Ranks/issues)
[![GitHub closed issues](https://img.shields.io/github/issues-closed-raw/KillahPotatoes/KP-Ranks.svg)](https://github.com/KillahPotatoes/KP-Ranks/issues?q=is%3Aissue+is%3Aclosed)
[![GitHub pull requests](https://img.shields.io/github/issues-pr-raw/KillahPotatoes/KP-Ranks.svg)](https://github.com/KillahPotatoes/KP-Ranks/pulls)
[![GitHub closed pull requests](https://img.shields.io/github/issues-pr-closed-raw/KillahPotatoes/KP-Ranks.svg)](https://github.com/KillahPotatoes/KP-Ranks/pulls?q=is%3Apr+is%3Aclosed)

[BI Forum Thread](https://forums.bistudio.com/topic/195034-kp-ranks/) - [Steam Workshop](http://steamcommunity.com/sharedfiles/filedetails/?id=741621641) - [Discord](https://discord.gg/fjSPn8t)

If you like the work and think it's worth a small donation, feel free to use the following link:

[Donate via paypal.me](https://www.paypal.me/wyqer)

## Description
This mod provides a complete management system for the ranks/levels of the players of a server/community/group. It's configurable completely ingame on the server without the need to edit/maintain scripts or other files. The included insignias are based on the original ones of the corresponding nations and can also be applied to units in the Eden Editor. This way mission makers can give their AI troops an immersive addition.
Beside of the possibility to manage the ranks of your players you can also enable an optional leveling system. This system will automatically save the score of the players, which is earned during their game sessions, and takes care of the promotion and degradation. You can, of course, individually set the needed score to get/keep a rank, the amount of points a player gets as reward for killing infantry, destroying light, armored or air vehicles and the playtime interval, after which the player gets additional points.

## Features
* Currently provides Eden compatible insignias of German Bundeswehr in *Flecktarn* and *Tropentarn* camo pattern, US Army and Croatian Army.
* Ingame management system for player specific ranks and valid uniforms on servers.
* Mod settings integrated in the CBA settings system.
* A manual action for the player to check and apply his current insignia to the uniform. (Deactivated when auto mode enabled and level system disabled)
* An editor module which can be placed by mission makers, to ensure all players will load the mod when playing the mission.
* Import/Export your KP Ranks player list to exchange them between servers.
* Automatically assigns the appropriate insignia depending on the uniform. (e.g. German uniform will get the German insignia)
* Automatically detects ACE and moves the action to the ACE self-interactions.
* Optional automatic mode which ensures that the player has always the insignia on his uniform. (deactivates manual action)
* Optional leveling system which handles promotion and degradation of players automatically depending on their score and playtime (fully configurable by the server admin).

## Languages
Currently the mod is localized for:
* English
* German
* Polish
* Portuguese
* Spanish

## Mods
Required:
* [CBA_A3](https://steamcommunity.com/workshop/filedetails/?id=450814997)

Supported:
* [ACE 3](https://steamcommunity.com/workshop/filedetails/?id=463939057)

Supported Uniforms by default:
* Vanilla NATO Uniforms
* [Bundeswehr Kleiderkammer (PBW)](https://steamcommunity.com/sharedfiles/filedetails/?id=835394852)
* [BW Mod](https://steamcommunity.com/sharedfiles/filedetails/?id=1200127537)
* [D-Man's Croatian Military mod](https://steamcommunity.com/sharedfiles/filedetails/?id=662483132)
* [KSK 2035](https://steamcommunity.com/sharedfiles/filedetails/?id=705947357)
* [RHS USAF](https://steamcommunity.com/sharedfiles/filedetails/?id=843577117)

## Licence
Copyright (C) 2016
* [Wyqer](https://github.com/Wyqer) (Code)
* [Nils](https://steamcommunity.com/id/butmumsaysimspecial) (Insignias)
* [Degman](https://steamcommunity.com/id/degman) (Croatian Insignias)

This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.

This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details.

You should have received a copy of the GNU General Public License along with this program. If not, see http://www.gnu.org/licenses/.

## Changelog
### v2.0.2
* Added: Portuguese localization. Thanks to [AngusDLX](https://github.com/AngusDLX)
* Added: Spanish localization. Thanks to [Jettfiremachine](https://github.com/amunoz20)
* Added: Some more functions which could become handy for mission creators:
    * [KPR_fnc_getInsigniaData](https://github.com/KillahPotatoes/KP-Ranks/blob/master/addons/KP_Ranks/fnc/fn_getInsigniaData.sqf)
    * [KPR_fnc_getRankName](https://github.com/KillahPotatoes/KP-Ranks/blob/master/addons/KP_Ranks/fnc/fn_getRankName.sqf)
    * [KPR_fnc_getPlaytime](https://github.com/KillahPotatoes/KP-Ranks/blob/master/addons/KP_Ranks/fnc/fn_getPlaytime.sqf)
    * [KPR_fnc_getPlaytimePlain](https://github.com/KillahPotatoes/KP-Ranks/blob/master/addons/KP_Ranks/fnc/fn_getPlaytimePlain.sqf)
    * [KPR_fnc_getRankScore](https://github.com/KillahPotatoes/KP-Ranks/blob/master/addons/KP_Ranks/fnc/fn_getRankScore.sqf)
    * [KPR_fnc_getRankScoreNext](https://github.com/KillahPotatoes/KP-Ranks/blob/master/addons/KP_Ranks/fnc/fn_getRankScoreNext.sqf)
* Added: Tooltip for deactivated rank setting in the player dialog, if the leveling system is enabled.
* Added: Playtime in the player name tooltip in the player management dialog.
* Added: [KP Ranks Wiki](https://github.com/KillahPotatoes/KP-Ranks/wiki) on GitHub with examples to use the functions.
* Tweaked: Undefined arguments for calls replaced with empty arrays as arguments.
* Tweaked: Usage of getter/setter functions in internal scripts.
* Fixed: Rank apply auto loop could be running in two instances.
* Fixed: Dialogs close directly if opened with "standard action" key.

### v2.0.1
* Added: Getter/Setter and helpful functions, so content/mission creators can easily access the KP Ranks data:
    * [KPR_fnc_getRank](https://github.com/KillahPotatoes/KP-Ranks/blob/master/addons/KP_Ranks/fnc/fn_getRank.sqf)
    * [KPR_fnc_setRank](https://github.com/KillahPotatoes/KP-Ranks/blob/master/addons/KP_Ranks/fnc/fn_setRank.sqf)
    * [KPR_fnc_hasRank](https://github.com/KillahPotatoes/KP-Ranks/blob/master/addons/KP_Ranks/fnc/fn_hasRank.sqf)
    * [KPR_fnc_getScore](https://github.com/KillahPotatoes/KP-Ranks/blob/master/addons/KP_Ranks/fnc/fn_getScore.sqf)
    * [KPR_fnc_setScore](https://github.com/KillahPotatoes/KP-Ranks/blob/master/addons/KP_Ranks/fnc/fn_setScore.sqf)
    * [KPR_fnc_addScore](https://github.com/KillahPotatoes/KP-Ranks/blob/master/addons/KP_Ranks/fnc/fn_addScore.sqf)
* Added: If all players are deleted from the player list, the server will reinitialize the list with all connected players.
* Updated: Polish localization. Thanks to [veteran29](https://github.com/veteran29)
* Fixed: Small uncritical script error on map screen, when there is no player registered on the server.
* Fixed: Needed restart of the server/mission, if all players were deleted via the player management dialog.

### v2.0.0
* Added: New codebase.
* Added: Usage of CfgFunctions.
* Added: Uniforms and player ranks stored in the servers profile namespace.
* Added: CBA config entries.
* Added: CBA Settings.
* Added: ACE Interaction and Vanilla action to check the current rank.
* Added: Multi language support via stringtable.
* Added: Dialog for player management without the need to edit files and restart the server.
* Added: RHS USAF uniforms support.
* Added: BW Kleiderkammer uniforms support.
* Added: Dialog for uniform management, so admins can choose supported uniforms on the fly during the game.
* Added: Optional automatic leveling system.
* Tweaked: Insignia material in config changed from general default to BIs insignia material.
* Tweaked: Editor module is now just available to create a dependency in a mission.
* Removed: Unnecessary loops.
* Removed: Manual function compiling.
* Removed: Userconfig folder and files.

### v1.5
* Added: All insignias are now available in the arsenal and editor.
* Added: initPlayerLocal.sqf example for mission creators.
* Tweaked: Automatic insignia assignment functionality can only be enabled via initPlayerLocal.sqf or by placing the "Force KP Ranks" module.
* Tweaked: Some small code and config changes.

### v1.4
* Added: Croatian ranksigns. Many thanks to [Degman](http://steamcommunity.com/id/degman)
* Tweaked: Brighten up the german "Tropentarn" ranksigns a little bit.

### v1.3
* Added: Support for Croatian Military Mod.
* Tweaked: Some Code optimizations.
* Fixed: Small error when the player is virtual zeus.

### v1.2
* Added: own textures for the ranksigns.
* Added: uniform list.
* Added: Mission Module.
* Tweaked: Rewritten the Code.
* Tweaked: Renamed from "KP Dienstgrade" to "KP Ranks".

### v1.1
* Fixed: Full Ghillies got weird textures.

### v1.0
* Initial Release.
