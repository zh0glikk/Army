#include "Spell.hpp"

Spell::Spell(SpellCaster* owner, int manaCost) {
    this->owner = owner;
    this->manaCost = manaCost;
}

Spell::~Spell() {
    delete this->owner;
}

void Spell::cast(Unit* enemy) {
    enemy->takeMagicDamage(owner->getMagicDamage());
}

int Spell::getManaCost() {
    return this->manaCost;
}
