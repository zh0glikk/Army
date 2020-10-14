#include "GreatHeal.hpp"

GreatHeal::GreatHeal(SpellCaster* owner, int manaCost) : Spell(owner, manaCost) {}

GreatHeal::~GreatHeal() {
    
}

void GreatHeal::cast(Unit* target, double otherMultiplier) {
    target->addHp(this->owner->getMagicPower() * this->owner->getHealingMultiplier() * 2 * otherMultiplier);
}
