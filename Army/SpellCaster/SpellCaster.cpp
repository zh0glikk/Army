#include "SpellCaster.hpp"

SpellCaster::SpellCaster(const std::string& name, int hp, int dmg, int manaLimit, int magicPower, double dmgMult, double healMult) : Unit(name, hp, dmg) {
    this->magicState = new MagicState(manaLimit, magicPower, dmgMult, healMult);
    this->weapon = new SpellCasterWeapon(this);
}

SpellCaster::~SpellCaster() {
    delete this->spell;
    delete this->magicState;
    
    std::map<std::string, std::shared_ptr<Spell>>::iterator it = this->spellBook.begin();

    for (; it != this->spellBook.end(); it++ ) {
        this->spellBook.erase(it);
    }
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

void SpellCaster::cast(Unit* target, double otherMultiplier) {
    int tmp = this->getMana() - this->spell->getManaCost();
    
    if ( tmp > 0 ) {
        
        try {
            this->spell->cast(target, otherMultiplier);
        } catch(UnitIsDead e) {
            target->notifyAboutDeath();
            target->changeState(new DeadState(this->getName()));
        } catch(CantAttack e) {
            tmp = this->getMana();
            // some code when u r attacking dead unit
        }
        this->magicState->setMana(tmp);
    }
}

void SpellCaster::changeSpell(Spell* newSpell) {
    delete this->spell;
    this->spell = newSpell;
}

void SpellCaster::changeSpell(std::string spellName) {
    auto it = this->spellBook.find(spellName);
    if (it != this->spellBook.end()) {
        this->spell = it->second.get();
    }
}

double SpellCaster::getHealingMultiplier() {
    return this->magicState->getHealingMultiplier();
}

double SpellCaster::getDmgMuliplier() {
    return this->magicState->getDmgMultiplier();
}
