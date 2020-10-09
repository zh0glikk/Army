#include "Axe.hpp"

Axe::Axe(Unit* unit) : Weapon(unit) {}

Axe::~Axe() {
    delete this->owner;
}

void Axe::attack(Unit* enemy) {
    std::cout << "Axe ATTTAAAACK  " << owner->getName() << " -> " << enemy->getName() <<
    std::endl;
    enemy->takeDamage(this->owner->getDamage());

    if ( enemy->getHitPoints() > 0 ) {
        counterAttack(enemy);
    }
}

void Axe::counterAttack(Unit* enemy) {
    this->owner->takeDamage(enemy->getDamage()/2);
}
