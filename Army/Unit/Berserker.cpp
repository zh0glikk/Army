#include "Berserker.hpp"

Berserker::Berserker(const std::string& name, int hp, int dmg) : Unit(name, hp, dmg) {
    this->weapon = new BerserkerWeapon(this);
}

Berserker::~Berserker() {}

void Berserker::takeMagicDamage(int dmg) {
    Unit::takeMagicDamage(0);
}
