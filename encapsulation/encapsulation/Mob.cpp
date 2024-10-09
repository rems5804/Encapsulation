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

// Redéfinition de la méthode takeDamage
void Mob::takeDamage(float damage) {
    Alive::takeDamage(damage);  // Appel de la fonction parent pour réduire la vie
    if (currentHealth <= 0) {
        std::cout << "Mob just die" << std::endl;
    }
}

// Redéfinition de la méthode move
void Mob::move() {
    // Mise à jour de la position en utilisant la direction et la vitesse
    float newX = getPosition().getX() + direction.getX() * speed;

