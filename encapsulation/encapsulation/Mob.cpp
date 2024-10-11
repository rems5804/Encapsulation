#include "Mob.h"

Mob::Mob(float x, float y, float maxLife, const Vector2& direction, float speed)
    : Entity(x, y), Alive(maxLife), AMovable(direction, speed) {
    std::cout << "Mob just created at x = " << x
        << " and y = " << y << " with " << maxHealth << " life"
        << " with direction x = " << direction.getX()
        << " and y = " << direction.getY() << std::endl;
}

void Mob::takeDamage(float damage) {
    Alive::takeDamage(damage);      if (currentHealth <= 0) {
        std::cout << "Mob just die" << std::endl;
    }
}

void Mob::move() {
        float newX = getPosition().getX() + direction.getX() * speed;
}