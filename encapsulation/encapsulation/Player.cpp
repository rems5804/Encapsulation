#include "Player.h"

Player::Player(float x, float y, float maxLife, const Vector2& direction, float speed)
    : Entity(x, y), Alive(maxLife), AMovable(direction, speed) {
    std::cout << "Player just created at x = " << x
        << " and y = " << y << " with " << maxHealth << " life"
        << " with direction x = " << direction.getX()
        << " and y = " << direction.getY() << std::endl;
}

void Player::takeDamage(float damage) {
    Alive::takeDamage(damage);      if (currentHealth <= 0) {
        std::cout << "Player just died" << std::endl;
    }
}

void Player::move() {
        float newX = getPosition().getX() + direction.getX() * speed;
    float newY = getPosition().getY() + direction.getY() * speed;
    setPosition(newX, newY);  
    std::cout << "Player moved to x = " << newX << " and y = " << newY << std::endl;
}

void Player::attack(Alive* target) {
    if (target != nullptr) {
        std::cout << "Player just attacked." << std::endl;
        target->takeDamage(10.0f);      }
}
