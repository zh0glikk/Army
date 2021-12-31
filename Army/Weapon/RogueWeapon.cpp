#include "RogueWeapon.hpp"

RogueWeapon::RogueWeapon(Unit* unit) : Weapon(unit) { }

RogueWeapon::~RogueWeapon() {
    delete this->owner;
}

void RogueWeapon::attack(Unit* enemy) {
    enemy->takeDamage(this->owner->getDamage());
}

void RogueWeapon::counterAttack(Unit* enemy) {}

