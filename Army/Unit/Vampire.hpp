#ifndef Vampire_hpp
#define Vampire_hpp

#include <iostream>

#include "Unit.hpp"
#include "../Weapon/VampireWeapon.hpp"

#include "../Mediator/InfectMediator.hpp"

class Vampire : public Unit{
public:
    Vampire(const std::string& name = "Vampire", int hp = 150, int dmg = 10);
    virtual ~Vampire();
    
    void infect(Unit* other);
};

#endif /* Vampire_hpp */
