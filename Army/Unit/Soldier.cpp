#include "Soldier.hpp"

Soldier::Soldier(const std::string& name, int hp, int dmg) : Unit(name, hp, dmg) {
    this->weapon = new Axe(this);
}

Soldier::~Soldier() {
    
}


