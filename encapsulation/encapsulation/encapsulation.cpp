#include <iostream>
#include "StaticObject.h"
#include "BreakableObject.h"
#include "Mob.h"
#include "Player.h"
#include "Integer.h"


int main() {
        std::cout << "\n=== StaticObject ===" << std::endl;
    StaticObject staticObj(0.0f, 0.0f);

        std::cout << "\n=== BreakableObject ===" << std::endl;
    BreakableObject breakableObj(1.0f, 1.0f, 20.0f);
    breakableObj.takeDamage(10.0f);      breakableObj.takeDamage(15.0f);  
        std::cout << "\n=== Mob ===" << std::endl;
    Vector2 mobDirection(0.5f, 0.5f);
    Mob mob(2.0f, 2.0f, 50.0f, mobDirection, 2.0f);
    mob.move();                        mob.takeDamage(20.0f);             mob.takeDamage(40.0f);         
        std::cout << "\n=== Player ===" << std::endl;
    Vector2 playerDirection(1.0f, 0.0f);
    Player player(3.0f, 3.0f, 100.0f, playerDirection, 3.0f);
    player.move();                     player.takeDamage(30.0f);          player.takeDamage(80.0f);      
        std::cout << "\n=== Player Attacking BreakableObject ===" << std::endl;
    BreakableObject target(4.0f, 4.0f, 25.0f);
    player.attack(&target);
    std::cout << "Vie restante de la cible : " << target.getCurrentHealth() << std::endl;
    


        /*Integer a1 = 2;
    Integer a2 = 2;

    a1.Pow(3) ;

    std::cout<<a1.a<<std::endl;


    return 0;*/



    World::~World() {
        for (Entity* entity : entities) {
            delete entity;
        }
        entities.clear();
    }

    void World::Init() {
        entities.push_back(new StaticObject(0.0f, 0.0f));
        entities.push_back(new BreakableObject(2.0f, 2.0f, 1.0f));
        entities.push_back(new Mob(5.0f, 5.0f, 20.0f, Vector2(-1.0f, -1.0f), 1.0f));
        entities.push_back(new Player(1.0f, 1.0f, 10.0f, Vector2(1.0f, 1.0f), 2.0f));
    }

    float calculateDistance(Entity * a, Entity * b) {
        Vector2 posA = a->getPosition();
        Vector2 posB = b->getPosition();
        return std::sqrt(std::pow(posA.getX() - posB.getX(), 2) + std::pow(posA.getY() - posB.getY(), 2));
    }

    void World::Step() {
        bool allDestroyed = true;
        for (Entity* entity : entities) {
            BreakableObject* breakable = dynamic_cast<BreakableObject*>(entity);
            Mob* mob = dynamic_cast<Mob*>(entity);

            if ((breakable && breakable->getCurrentHealth() > 0) ||
                (mob && mob->getCurrentHealth() > 0)) {
                allDestroyed = false;
                break;
            }
        }

        if (allDestroyed) {
            std::cout << "Simulation Finished" << std::endl;
            simulationFinished = true;
            return;
        }

        for (Entity* entity : entities) {
            Mob* mob = dynamic_cast<Mob*>(entity);
            Player* player = dynamic_cast<Player*>(entity);

            if (mob && mob->getCurrentHealth() > 0) {
                for (Entity* target : entities) {
                    BreakableObject* breakable = dynamic_cast<BreakableObject*>(target);
                    if (breakable && breakable->getCurrentHealth() > 0) {
                        mob->setDirection(Vector2(
                            breakable->getPosition().getX() - mob->getPosition().getX(),
                            breakable->getPosition().getY() - mob->getPosition().getY()
                        ));
                        mob->move();
                        break;
                    }
                }
            }
            else if (player) {
                Entity* targetEntity = nullptr;

                for (Entity* target : entities) {
                    Mob* targetMob = dynamic_cast<Mob*>(target);
                    BreakableObject* targetBreakable = dynamic_cast<BreakableObject*>(target);

                    if (targetMob && targetMob->getCurrentHealth() > 0) {
                        targetEntity = targetMob;
                        break;
                    }
                    else if (!targetMob && targetBreakable && targetBreakable->getCurrentHealth() > 0) {
                        targetEntity = targetBreakable;
                    }
                }

                if (targetEntity) {
                    player->setDirection(Vector2(
                        targetEntity->getPosition().getX() - player->getPosition().getX(),
                        targetEntity->getPosition().getY() - player->getPosition().getY()
                    ));
                    player->move();

                    if (calculateDistance(player, targetEntity) < 1.0f) {
                        Alive* aliveTarget = dynamic_cast<Alive*>(targetEntity);
                        if (aliveTarget) {
                            player->attack(aliveTarget);
                        }
                    }
                }
            }
        }
    }

}
