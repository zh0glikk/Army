#include "Spell.hpp"

Spell::Spell(SpellCaster* owner, int manaCost) {
    this->owner = owner;
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
