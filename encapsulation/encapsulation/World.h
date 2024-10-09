#ifndef WORLD_H__
#define WORLD_H__

#include <vector>
#include "Entity.h"
#include "StaticObject.h"
#include "BreakableObject.h"
#include "Mob.h"
#include "Player.h"

class World {
private:
    std::vector<Entity*> entities;

public:
        ~World();

        void Init();

        void Step();
};

#endif 