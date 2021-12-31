#include "SoldierWeapon.hpp"

SoldierWeapon::SoldierWeapon(Unit* unit) : Weapon(unit) {}

SoldierWeapon::~SoldierWeapon() {
    delete this->owner;
}

void SoldierWeapon::attack(Unit* enemy) {
    enemy->takeDamage(this->owner->getDamage());

    if ( enemy->getHitPoints() > 0 ) {
        counterAttack(enemy);
    }
}

void SoldierWeapon::counterAttack(Unit* enemy) {
    this->owner->takeDamage(enemy->getDamage()/2);
}
