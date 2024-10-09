// Player.cpp
#include "Player.h"

// Constructeur qui initialise la position, la vie, la direction, et affiche un message
Player::Player(float x, float y, float maxLife, const Vector2& direction, float speed)
    : Entity(x, y), Alive(maxLife), AMovable(direction, speed) {
    std::cout << "Player just created at x = " << x
        << " and y = " << y << " with " << maxHealth << " life"
        << " with direction x = " << direction.getX()
        << " and y = " << direction.getY() << std::endl;
}

// Red�finition de la m�thode takeDamage
void Player::takeDamage(float damage) {
    Alive::takeDamage(damage);  // Appel de la fonction parent pour r�duire la vie
    if (currentHealth <= 0) {
        std::cout << "Player just died" << std::endl;
    }
}

// Red�finition de la m�thode move
void Player::move() {
    // Mise � jour de la position en utilisant la direction et la vitesse
    float newX = getPosition().getX() + direction.getX() * speed;
    float newY = getPosition().getY() + direction.getY() * speed;
    setPosition(newX, newY);  // Met � jour la position dans Entity

    std::cout << "Player moved to x = " << newX << " and y = " << newY << std::endl;
}

// Impl�mentation de la m�thode attack
void Player::attack(Alive* target) {
    if (target != nullptr) {
        std::cout << "Player just attacked." << std::endl;
        target->takeDamage(10.0f);  // Inflige 10 points de d�g�ts � la cible
    }
}
