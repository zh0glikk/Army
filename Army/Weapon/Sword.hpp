#ifndef Sword_hpp
#define Sword_hpp

#include <iostream>

#include "Weapon.hpp"

class Sword : public Weapon {
public:
    Sword(Unit* owner);
    ~Sword();
    
    void attack(Unit* enemy);
    void counterAttack(Unit* enemy);
};

#endif /* Sword_hpp */
