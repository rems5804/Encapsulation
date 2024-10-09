#ifndef ALIVE_H__
#define ALIVE_H__

class Alive {
protected:
    float maxHealth;
    float currentHealth;

public:
        Alive(float health);

        virtual ~Alive() {}

        virtual float getMaxHealth() const;

        virtual float getCurrentHealth() const;

        virtual void takeDamage(float damage);

        virtual void heal(float amount);
};

#endif 