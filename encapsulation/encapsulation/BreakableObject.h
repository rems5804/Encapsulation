#ifndef BREAKABLEOBJECT_H__
#define BREAKABLEOBJECT_H__

#include "Entity.h"
#include "Alive.h"
#include <iostream>

class BreakableObject : public Entity, public Alive {
public:
        BreakableObject(float x, float y, float maxLife);

        void takeDamage(float damage) override;
};

#endif 