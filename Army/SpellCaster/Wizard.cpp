#include "Wizard.hpp"

Wizard::Wizard(const std::string& name, int hp, int dmg, int manaLimit, int magicPower, double dmgMult, double healMult) : SpellCaster(name, hp, dmg, manaLimit, magicPower, dmgMult, healMult) {
    this->spell = new FireBall(this);
}

Wizard::~Wizard() {
    
}
