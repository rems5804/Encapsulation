#ifndef ENTITY_H__
#define ENTITY_H__

#include "Vector2.h"

class Entity {
protected:
    Vector2 position;

public:
        Entity(float x, float y);

        virtual ~Entity() {}

        virtual Vector2 getPosition() const;

        virtual void setPosition(float x, float y);
};

#endif 