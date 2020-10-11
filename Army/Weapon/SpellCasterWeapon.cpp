#include "SpellCasterWeapon.hpp"

SpellCasterWeapon::SpellCasterWeapon(Unit* unit) : Weapon(unit) {}

SpellCasterWeapon::~SpellCasterWeapon() {
    delete this->owner;
}

void SpellCasterWeapon::attack(Unit* enemy) {
    enemy->takeDamage(this->owner->getDamage());

    if ( enemy->getHitPoints() > 0 ) {
        counterAttack(enemy);
    }
}

void SpellCasterWeapon::counterAttack(Unit* enemy) {
    this->owner->takeDamage(enemy->getDamage()/2);
}
