#include "Necromancer.hpp"

Necromancer::Necromancer(const std::string& name, int hp, int dmg, int manaLimit, int magicPower, double dmgMult, double healMult) : SpellCaster(name, hp, dmg, manaLimit, magicPower, dmgMult, healMult) {
    this->spellBook.emplace("FireBall", new FireBall(this));
    this->spellBook.emplace("Heal", new Heal(this));
    this->spellBook.emplace("FrostBall", new FrostBall(this));
    
    this->spell = this->spellBook.find("FireBall")->second;
}

Necromancer::~Necromancer() {
    
}

void Necromancer::cast(Unit* target) {
    SpellCaster::cast(target);
    this->addObservable(target);
}

void Necromancer::attack(Unit* other) {
    SpellCaster::attack(other);
    this->addObservable(other);
}

void Necromancer::recieveMessage() {
    this->addHp(this->getHitPointsLimit()/10);
}
