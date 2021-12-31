#include "Spell.hpp"

Spell::Spell(SpellCaster* owner, int manaCost, int spellType) {
    this->owner = owner;
    this->spellType = spellType;
    this->manaCost = manaCost;
}

Spell::~Spell() {
//    delete this->owner;
}

void Spell::cast(Unit* target, double otherMultiplier) {
    target->takeMagicDamage(owner->getMagicPower() * owner->getDmgMuliplier() * otherMultiplier);
}

int Spell::getManaCost() {
    return this->manaCost;
}

int Spell::getSpellType() {
    return this->spellType;
}
