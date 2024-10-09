#ifndef PLAYER_H__
#define PLAYER_H__

#include "Entity.h"
#include "Alive.h"
#include "AMovable.h"
#include "IAttacker.h"
#include <iostream>

class Player : public Entity, public Alive, public AMovable, public IAttacker {
public:
        Player(float x, float y, float maxLife, const Vector2& direction, float speed);

        void takeDamage(float damage) override;

        void move() override;

        void attack(Alive* target) override;
};

#endif 