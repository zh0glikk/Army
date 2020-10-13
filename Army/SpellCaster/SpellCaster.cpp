#include "SpellCaster.hpp"

SpellCaster::SpellCaster(const std::string& name, int hp, int dmg, int manaLimit, int magicPower, double dmgMult, double healMult) : Unit(name, hp, dmg) {
    this->magicState = new MagicState(manaLimit, magicPower, dmgMult, healMult);
    this->weapon = new SpellCasterWeapon(this);
}

SpellCaster::~SpellCaster() {
    delete this->spell;
    delete this->magicState;
}

int SpellCaster::getMana() {
    return this->magicState->getMana();
}

int SpellCaster::getManaLimit() {
    return this->magicState->getManaLimit();
}

int SpellCaster::getMagicPower() {
    return this->magicState->getMagicPower();
}

void SpellCaster::cast(Unit* target) {
    int tmp = this->getMana() - this->spell->getManaCost();
    
    if ( tmp > 0 ) {
        this->magicState->setMana(tmp);
        this->spell->cast(target);
    }
}

void SpellCaster::changeSpell(Spell* newSpell) {
    delete this->spell;
    this->spell = newSpell;
}

double SpellCaster::getHealingMultiplier() {
    return this->magicState->getHealingMultiplier();
}

double SpellCaster::getDmgMuliplier() {
    return this->magicState->getDmgMultiplier();
}
