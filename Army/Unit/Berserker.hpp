#ifndef Berserker_hpp
#define Berserker_hpp

#include <iostream>

#include "Unit.hpp"
#include "../Weapon/Sword.hpp"

class Berserker : public Unit{
public:
    Berserker(const std::string& name = "Berserker", int hp = 70, int dmg = 15);
    virtual ~Berserker();
    
    void takeMagicDamage(int dmg);
};

#endif /* Berserker_hpp */
