#include "Entity.h"

Entity::Entity(float x, float y) : position(x, y) {}

Vector2 Entity::getPosition() const {
    return position;
}

void Entity::setPosition(float x, float y) {
    position.setX(x);
    position.setY(y);
}
