#include "Vector2.h"

Vector2::Vector2() : x(0.0f), y(0.0f) {}

Vector2::Vector2(float x, float y) : x(x), y(y) {}

float Vector2::getX() const {
    return x;
}

float Vector2::getY() const {
    return y;
}

void Vector2::setX(float x) {
    this->x = x;
}

void Vector2::setY(float y) {
    this->y = y;
}
