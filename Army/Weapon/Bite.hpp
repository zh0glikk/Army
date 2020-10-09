#ifndef Bite_hpp
#define Bite_hpp

#include <iostream>

#include "Weapon.hpp"
#include "../Unit/Vampire.hpp"

class Bite : public Weapon {
public:
    Bite(Unit* owner);
    ~Bite();
    
    void attack(Unit* enemy);
    void counterAttack(Unit* enemy);
    
//    virtual void infect(Unit* other);
};

#endif /* Bite_hpp */
