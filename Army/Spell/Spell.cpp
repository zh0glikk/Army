#include "Spell.hpp"

Spell::Spell(SpellCaster* owner, int manaCost) {
    this->owner = owner;
    this->manaCost = manaCost;
}

Spell::~Spell() {
//    delete this->owner;
}

void Spell::cast(Unit* target) {
    target->takeMagicDamage(owner->getMagicPower() * owner->getDmgMuliplier());
}

int Spell::getManaCost() {
    return this->manaCost;
}
