#include "AMovable.h"

AMovable::AMovable(const Vector2& direction, float speed) : direction(direction), speed(speed) {}

void AMovable::setDirection(const Vector2& newDirection) {
    direction = newDirection;
}

void AMovable::setSpeed(float newSpeed) {
    speed = newSpeed;
}

Vector2 AMovable::getDirection() const {
    return direction;
}

float AMovable::getSpeed() const {
    return speed;
}
