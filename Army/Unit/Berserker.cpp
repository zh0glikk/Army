#include "Berserker.hpp"

Berserker::Berserker(const std::string& name, int hp, int dmg) : Unit(name, hp, dmg) {
    this->weapon = new Sword(this);
}

Berserker::~Berserker() {}