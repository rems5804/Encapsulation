// Mob.cpp
#include "Mob.h"

// Constructeur qui initialise la position, le maximum de vie, la direction et affiche un message
Mob::Mob(float x, float y, float maxLife, const Vector2& direction, float speed)
    : Entity(x, y), Alive(maxLife), AMovable(direction, speed) {
    std::cout << "Mob just created at x = " << x
        << " and y = " << y << " with " << maxHealth << " life"
        << " with direction x = " << direction.getX()
        << " and y = " << direction.getY() << std::endl;
}

// Red�finition de la m�thode takeDamage
void Mob::takeDamage(float damage) {
    Alive::takeDamage(damage);  // Appel de la fonction parent pour r�duire la vie
    if (currentHealth <= 0) {
        std::cout << "Mob just die" << std::endl;
    }
}

// Red�finition de la m�thode move
void Mob::move() {
    // Mise � jour de la position en utilisant la direction et la vitesse
    float newX = getPosition().getX() + direction.getX() * speed;

