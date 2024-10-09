#include <iostream>
#include "StaticObject.h"
#include "BreakableObject.h"
#include "Mob.h"
#include "Player.h"
#include "Integer.h"


int main() {
        /*std::cout << "\n=== StaticObject ===" << std::endl;
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
    */


    Integer a1 = 2;
    Integer a2 = 2;

    a1.Pow(3) ;

    std::cout<<a1.a<<std::endl;


    return 0;
}
