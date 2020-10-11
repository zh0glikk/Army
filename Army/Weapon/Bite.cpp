#include "Bite.hpp"

Bite::Bite(Unit* unit) : Weapon(unit) { }

Bite::~Bite() {
    delete this->owner;
}

void Bite::attack(Unit* enemy) {
    enemy->takeDamage(this->owner->getDamage());
    
    this->owner->addHp(this->owner->getDamage()/2);
    
    if ( enemy->getHitPoints() > 0 ) {
        counterAttack(enemy);
    }
}

void Bite::counterAttack(Unit* enemy) {
    this->owner->takeDamage(enemy->getDamage()/2);
}


