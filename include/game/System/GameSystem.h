#pragma once

#include "GameSystemInfo.h"
#include "al/nerve/NerveExecutor.h"

namespace al {
    class Sequence;
}

class GameSystem : public al::NerveExecutor {
    public:
        void init();
        al::Sequence* mSequence;
        al::GameSystemInfo* mSystemInfo;  // 0x18
        // 0x78 GameConfigData
};

namespace GameSystemFunction {
    GameSystem* getGameSystem();
}
