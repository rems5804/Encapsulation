#include "Alive.h"

Alive::Alive(float health) : maxHealth(health), currentHealth(health) {}

float Alive::getMaxHealth() const {
    return maxHealth;
}

float Alive::getCurrentHealth() const {
    return currentHealth;
}

void Alive::takeDamage(float damage) {
    currentHealth -= damage;
    if (currentHealth < 0) {
        currentHealth = 0;      }
}

void Alive::heal(float amount) {
    currentHealth += amount;
    if (currentHealth > maxHealth) {
        currentHealth = maxHealth;      }
}
