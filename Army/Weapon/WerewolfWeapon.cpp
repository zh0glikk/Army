#include "WerewolfWeapon.hpp"

WerewolfWeapon::WerewolfWeapon(Unit* unit) : Weapon(unit) {}

WerewolfWeapon::~WerewolfWeapon() {
    
}

void WerewolfWeapon::attack(Unit* enemy) {
    enemy->takeDamage(this->owner->getDamage());

    if ( enemy->getHitPoints() > 0 ) {
        counterAttack(enemy);
    }
}

void WerewolfWeapon::counterAttack(Unit* enemy) {
    this->owner->takeDamage(enemy->getDamage()/2);
}
