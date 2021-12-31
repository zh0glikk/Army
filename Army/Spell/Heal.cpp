#include "Heal.hpp"

Heal::Heal(SpellCaster* owner, int manaCost, int spellType) : Spell(owner, manaCost, spellType) {}

Heal::~Heal() {
    
}

void Heal::cast(Unit* target, double otherMultiplier) {
    target->addHp(this->owner->getMagicPower() * this->owner->getHealingMultiplier() * otherMultiplier);
}
