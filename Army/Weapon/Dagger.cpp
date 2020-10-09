#include "Dagger.hpp"

Dagger::Dagger(Unit* unit) : Weapon(unit) { }

Dagger::~Dagger() {
    delete this->owner;
}

void Dagger::attack(Unit* enemy) {
    enemy->takeDamage(this->owner->getDamage());
}

void Dagger::counterAttack(Unit* enemy) {}

