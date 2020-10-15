#include "FrostBall.hpp"

FrostBall::FrostBall(SpellCaster* owner, int manaCost, int spellType) : Spell(owner, manaCost, spellType) {}

FrostBall::~FrostBall() {
    
}

void FrostBall::cast(Unit* target, double otherMultiplier) {
    Spell::cast(target, otherMultiplier);
    this->owner->addHp(this->owner->getMagicPower()/10);
}
