#include "Weapon.hpp"

Weapon::Weapon(Unit* unit) {
    this->owner = unit;
}

Weapon::~Weapon() {
    delete this->owner;
}

void Weapon::attack(Unit* enemy) {
    enemy->takeDamage(this->owner->getDamage());

    if ( enemy->getHitPoints() > 0 ) {
        counterAttack(enemy);
    }
}

void Weapon::counterAttack(Unit* enemy) {
    this->owner->takeDamage(enemy->getDamage()/2);
}
