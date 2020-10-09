#ifndef Rogue_hpp
#define Rogue_hpp

#include <iostream>

#include "Unit.hpp"
#include "../Weapon/Dagger.hpp"

class Rogue : public Unit {
public:
    Rogue(const std::string& name = "Rogue", int hp = 50, int dmg = 20);
    ~Rogue();
    
};

#endif /* Rogue_hpp */
