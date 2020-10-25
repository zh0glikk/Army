#include "VampireWeapon.hpp"

VampireWeapon::VampireWeapon(Unit* unit) : Weapon(unit) { }

VampireWeapon::~VampireWeapon() {
    delete this->owner;
}

void VampireWeapon::attack(Unit* enemy) {
    enemy->takeDamage(this->owner->getDamage());
    
    this->owner->addHp(this->owner->getDamage()/2);
    
    if ( enemy->getHitPoints() > 0 ) {
        counterAttack(enemy);
    }
}

void VampireWeapon::counterAttack(Unit* enemy) {
    this->owner->takeDamage(enemy->getDamage()/2);
}
