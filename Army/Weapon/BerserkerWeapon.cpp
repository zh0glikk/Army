#include "BerserkerWeapon.hpp"

BerserkerWeapon::BerserkerWeapon(Unit* unit) : Weapon(unit) {}

BerserkerWeapon::~BerserkerWeapon() {
    
}

void BerserkerWeapon::attack(Unit* enemy) {
//    std::cout << owner->getName() << " damaged " << enemy->getName() << " using BerserkerWeapon" << std::endl;
    
    enemy->takeDamage(this->owner->getDamage());

    if ( enemy->getHitPoints() > 0 ) {
        counterAttack(enemy);
    }
}

void BerserkerWeapon::counterAttack(Unit* enemy) {
    this->owner->takeDamage(enemy->getDamage()/2);
}
