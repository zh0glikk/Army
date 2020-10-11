#include "SpellCaster.hpp"

SpellCaster::SpellCaster(const std::string& name, int hp, int dmg, int manaLimit, int magicDamage) : Unit(name, hp, dmg) {
    this->manaLimit = manaLimit;
    this->mana = manaLimit;
    this->magicDamage = magicDamage;
    this->weapon = new SpellCasterWeapon(this);
    this->attackSpell = new Spell(this, 10);
    this->healingSpell = new Spell(this, 20);
}

SpellCaster::~SpellCaster() {
    
}

void SpellCaster::ensureCanCast() {
    if ( mana <= 0 ) {
        mana = 0;
        throw LowMana();
    }
}

int SpellCaster::getMana() {
    return this->mana;
}

int SpellCaster::getManaLimit() {
    return this->manaLimit;
}

int SpellCaster::getMagicDamage() {
    return this->magicDamage;
}

void SpellCaster::cast(Unit* enemy) {
    this->mana -= this->attackSpell->getManaCost();
    ensureCanCast();
    
    this->attackSpell->cast(enemy);
}

void SpellCaster::heal(Unit* target) {
    this->mana -= this->healingSpell->getManaCost();
    ensureCanCast();
    
    target->addHp(this->magicDamage);
}


void SpellCaster::changeSpell(Spell* newSpell) {
    delete this->attackSpell;
    this->attackSpell = newSpell;
}

