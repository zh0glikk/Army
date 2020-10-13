#include "Heal.hpp"

Heal::Heal(SpellCaster* owner, int manaCost) : Spell(owner, manaCost) {}

Heal::~Heal() {
    
}

void Heal::cast(Unit* target) {
    target->addHp(this->owner->getMagicPower() * this->owner->getHealingMultiplier());
}
