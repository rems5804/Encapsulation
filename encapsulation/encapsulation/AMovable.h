#ifndef AMOVABLE_H__
#define AMOVABLE_H__

#include "Vector2.h"

class AMovable {
protected:
    Vector2 direction;
    float speed;

public:
        AMovable(const Vector2& direction, float speed);

        virtual ~AMovable() {}

        virtual void setDirection(const Vector2& newDirection);

        virtual void setSpeed(float newSpeed);

        Vector2 getDirection() const;

        float getSpeed() const;

        virtual void move() = 0;
};

#endif 