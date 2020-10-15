#include "Warlock.hpp"

Warlock::Warlock(const std::string& name, int hp, int dmg, int manaLimit, int magicPower, double dmgMult, double healMult) : SpellCaster(name, hp, dmg, manaLimit, magicPower, dmgMult, healMult) {
    this->demon = NULL;
    this->isDemonExist = false;
    
    this->spellBook.emplace("FireBall", new FireBall(this));
    this->spellBook.emplace("Heal", new Heal(this));
    this->spellBook.emplace("FrostBall", new FrostBall(this));
    
    this->spell = this->spellBook.find("FireBall")->second;
}

Warlock::~Warlock() {
    delete this->demon;
}

void Warlock::createDemon() {
    if ( !isDemonExist ) {
        this->demon = new Demon(this);
        this->isDemonExist = true;
    }
}

void Warlock::removeDemon() {
    if (isDemonExist) {
        delete (this->demon);
    }
}

void Warlock::demonAttack(Unit* target) {
    this->demon->attack(target);
}

