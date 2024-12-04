#include "al/LiveActor/LiveActor.h"
#include "game/GameData/GameDataFunction.h"
#include "game/GameData/GameDataFile.h"

void healTwice(const al::LiveActor* actor){
    if(actor){
        GameDataFunction::recoveryPlayer(actor);
        GameDataFunction::recoveryPlayer(actor);
    }
}

void healThreeTimes(const al::LiveActor* actor){
    if(actor){
        GameDataFunction::recoveryPlayer(actor);
        GameDataFunction::recoveryPlayer(actor);
        GameDataFunction::recoveryPlayer(actor);
    }
}

