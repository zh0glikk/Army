#ifndef Dagger_hpp
#define Dagger_hpp

#include <iostream>

#include "Weapon.hpp"
#include "../Unit/Rogue.hpp"

class Dagger : public Weapon {
public:
    Dagger(Unit* owner);
    ~Dagger();
    
    void attack(Unit* enemy);
    void counterAttack(Unit* enemy);
};

#endif /* Dagger_hpp */
