#include "al/util.hpp"
#include "al/util/NerveUtil.h"
#include "al/util/SensorUtil.h"
#include "game/GameData/GameDataFile.h"
#include "game/Player/PlayerActorBase.h"
#include "game/Player/PlayerActorHakoniwa.h"

#include "rs/util/InputUtil.h"
#include "rs/util/SensorUtil.h"
#include "server/Client.hpp"
#include "server/freeze/FreezeTagMode.hpp"
#include "server/gamemode/GameModeManager.hpp"

#include "al/nerve/Nerve.h"
#include "rs/util.hpp"

bool freezeDeathArea(al::LiveActor const* player)
{
    // If player isn't actively playing freeze tag, perform normal functionality
    if (!GameModeManager::instance()->isModeAndActive(GameMode::FREEZETAG))
        return al::isInDeathArea(player);

    // If player is in a death area but in Freeze Tag mode, start a recovery event
    if (al::isInAreaObj(player, "DeathArea")) {
        FreezeTagMode* mode = GameModeManager::instance()->getMode<FreezeTagMode>();
        if (!mode->isEndgameActive())
            mode->tryStartRecoveryEvent(false);
    }

    return false;
}

bool freezeMoonHitboxDisable(al::IUseNerve* nrvUse, al::Nerve* nrv)
{
    if(GameModeManager::instance()->isModeAndActive(GameMode::FREEZETAG))
        return true;

    return al::isNerve(nrvUse, nrv);
}