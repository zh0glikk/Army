#include "Rogue.hpp"

Rogue::Rogue(const std::string& name, int hp, int dmg) : Unit(name, hp, dmg){
    this->weapon = new Dagger(this);
}

Rogue::~Rogue() {}


