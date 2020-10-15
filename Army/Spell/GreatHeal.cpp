#include "GreatHeal.hpp"

GreatHeal::GreatHeal(SpellCaster* owner, int manaCost, int spellType) : Spell(owner, manaCost, spellType) {}

GreatHeal::~GreatHeal() {
    
}

void GreatHeal::cast(Unit* target, double otherMultiplier) {
    target->addHp(this->owner->getMagicPower() * this->owner->getHealingMultiplier() * 2 * otherMultiplier);
}
