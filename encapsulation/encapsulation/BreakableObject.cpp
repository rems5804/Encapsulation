// BreakableObject.cpp
#include "BreakableObject.h"

// Constructeur qui initialise la position, le maximum de vie et affiche un message
BreakableObject::BreakableObject(float x, float y, float maxLife)
    : Entity(x, y), Alive(maxLife) {
    std::cout << "Breakable Object just created at x = " << x
        << " and y = " << y << " with " << maxHealth << " life" << std::endl;
}

// Redéfinition de la méthode takeDamage
void BreakableObject::takeDamage(float damage) {
    Alive::takeDamage(damage);  // Appel de la fonction parent pour modifier la vie
    if (currentHealth <= 0) {
        std::cout << "Breakable Object just broke" << std::endl;
    }
}
