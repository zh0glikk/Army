#ifndef Axe_hpp
#define Axe_hpp

#include <iostream>

#include "Weapon.hpp"

class Axe : public Weapon {
public:
    Axe(Unit* owner);
    ~Axe();
    
    void attack(Unit* enemy);
    void counterAttack(Unit* enemy);
};

#endif /* Axe_hpp */
