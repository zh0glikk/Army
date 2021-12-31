#include "Priest.hpp"

Priest::Priest(const std::string& name, int hp, int dmg, int manaLimit, int magicPower, double dmgMult, double healMult) : SpellCaster(name, hp, dmg, manaLimit, magicPower, dmgMult, healMult) {
    
    this->spellBook.emplace("FireBall", std::shared_ptr<Spell>(new FireBall(this)));
    this->spellBook.emplace("Heal", std::shared_ptr<Spell>(new Heal(this)));
    this->spellBook.emplace("FrostBall", std::shared_ptr<Spell>(new FrostBall(this)));
    this->spellBook.emplace("GreatHeal", std::shared_ptr<Spell>(new GreatHeal(this)));
    
    this->spell = this->spellBook.find("Heal")->second.get();
}

Priest::~Priest() {
    
}

void Priest::cast(Unit* target) {
    if (target->getRace() == Undead) {
        if ( this->spell->getSpellType() == 1 ) {
            SpellCaster::cast(target, 2);
        } else {
            SpellCaster::cast(target);
        }
    } else {
        SpellCaster::cast(target);
    }
}
