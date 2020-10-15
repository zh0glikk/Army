#include "Demon.hpp"

Demon::Demon( Warlock* owner, const std::string& name, int hp, int dmg) : Soldier(name, hp, dmg) {
    this->owner = owner;
}

Demon::~Demon() {
    
}
