#ifndef Soldier_hpp
#define Soldier_hpp

#include <iostream>

#include "Unit.hpp"
#include "../Weapon/SoldierWeapon.hpp"

class Soldier : public Unit {
public:
    Soldier(const std::string& name = "Soldier", int hp = 100, int dmg = 10);
    virtual ~Soldier();
    
};

#endif /* Soldier_hpp */
