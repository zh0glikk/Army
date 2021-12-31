#include "Wizard.hpp"

Wizard::Wizard(const std::string& name, int hp, int dmg, int manaLimit, int magicPower, double dmgMult, double healMult) : SpellCaster(name, hp, dmg, manaLimit, magicPower, dmgMult, healMult) {
    
    this->spellBook.emplace("FireBall", std::shared_ptr<Spell>(new FireBall(this)));
    this->spellBook.emplace("Heal", std::shared_ptr<Spell>(new Heal(this)));
    this->spellBook.emplace("FrostBall", std::shared_ptr<Spell>(new FrostBall(this)));
    
    this->spell = this->spellBook.find("FireBall")->second.get();
}

Wizard::~Wizard() {
    
}
