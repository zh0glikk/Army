#include "Sword.hpp"

Sword::Sword(Unit* unit) : Weapon(unit) {}

Sword::~Sword() {
    
}

void Sword::attack(Unit* enemy) {
//    std::cout << owner->getName() << " damaged " << enemy->getName() << " using sword" << std::endl;
    
    enemy->takeDamage(this->owner->getDamage());

    if ( enemy->getHitPoints() > 0 ) {
        counterAttack(enemy);
    }
}

void Sword::counterAttack(Unit* enemy) {
    this->owner->takeDamage(enemy->getDamage()/2);
}
