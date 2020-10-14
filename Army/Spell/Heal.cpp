#include "Heal.hpp"

Heal::Heal(SpellCaster* owner, int manaCost) : Spell(owner, manaCost) {}

Heal::~Heal() {
    
}

void Heal::cast(Unit* target, double otherMultiplier) {
    target->addHp(this->owner->getMagicPower() * this->owner->getHealingMultiplier() * otherMultiplier);
}
