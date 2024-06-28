# Super Mario Odyssey - Online Multiplayer Mod

Welcome to the modified repository for the Super Mario Odyssey Online mod!
This Repository Features the ManHunt Gamemode !

## Features
* Moon Cutscenes are Faster
* Globe Cutscenes are Faster
* Cap Kingdom as been Made Faster
* Cappy Deals Damage
* Almost every captures in the game is synced between players
* Full 2D and Costume models syncing
### Available Gamemodes
* ManHunt

## SMO Version Support

* 1.0

## Installation Tutorial

Before installing, Ensure that your switch is hacked. If not, follow [This Guide](https://switch.homebrew.guide/) to get your switch setup for modding. Make sure you set up a way to block Nintendo's servers as you will need to have your switch connected to the internet for this mod to work!

1. Download the latest mod build from either [Gamebanana](https://gamebanana.com/mods/384214) or from the [Releases](https://github.com/DaDev123/SMOO-ManHunt/releases) tab. (Alternatively, build from source)
2. Extract the downloaded zip onto the root of your Switch's SD card.
3. If you need to host an online server, head over to the [Super Mario Odyssey Online Server](https://github.com/Sanae6/SmoOnlineServer) repository and follow the instructions there to set up the server.
4. Launch the game! Upon first time bootup, the mod should ask for a server IP to save to the games common save file. This IP address will be the server you wish to connect to every time you launch the game with the mod installed. (Note: un-installing the mod and launching the game will remove the server IP from the common save file.)

## Gamemode Info
### ManHunt
* Depending on Group size, select who will start as a Runner at the beginning of each round.
* When Cappy (Player Cap) hits a player, the player will take damage.
* During the round, the Hunter who die by the Runner can still Respawn
* If the Runner beats the game he wins! if he dies, he lost.
* While not a concrete rule but 2 Player Mode is not Allowed

## Gamemode Rule
* The Runner is not allowed to warp until he's gotten all of the Moons


## Gamemode Controls
### ManHunt
- Hit Start
- Hit Options
- Hit ManHunt Settings
- Choose you're Role

## Building Prerequisites

- [devkitPro](https://devkitpro.org/) 
- Python 3
- The [Keystone-Engine](https://www.keystone-engine.org/) Python Module

## Building

Build has only been tested on WSL2 running Ubuntu 20.04.1.

Just run:
```
DEVKITPRO={path_to_devkitpro} make
```

On Ubuntu (and other Debian-based systems), devkitPro will be installed to `/opt/devkitpro` by default:

```
DEVKITPRO=/opt/devkitpro/ make
```

## Installing (Atmosphère)

After a successful build, simply transfer the `atmosphere` folder located inside `starlight_patch_100` to the root of your switch's SD card.

---

# Contributors

- [Sanae](https://github.com/sanae6) Wrote the majority of the server code
- [Shadow](https://github.com/shadowninja108) original author of starlight, the tool used to make this entire modpossible.
- [Hesmakka](https://github.com/LynxDev2) Wrote the Code for Cappy Dealing Damage and Compass to Track other Players
- [Crazalu]() Making Faster Moon Cutscenes
- [Secret Dev(me)](https://github.com/dadev123) Making the mod Look Good (RomFS)
- [Gorganim](https://www.youtube.com/channel/UCyARR33zAmB9s0vjvJZnl3g), me, and some Friends for Most Test
# Credits
- [OdysseyDecomp](https://github.com/shibbo/OdysseyDecomp)
- [OdysseyReversed](https://github.com/shibbo/OdysseyReversed)
- [open-ead](https://github.com/open-ead/sead) sead Headers
