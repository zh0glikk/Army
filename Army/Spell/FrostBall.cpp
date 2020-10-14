#include "FrostBall.hpp"

FrostBall::FrostBall(SpellCaster* owner, int manaCost) : Spell(owner, manaCost) {}

FrostBall::~FrostBall() {
    
}

void FrostBall::cast(Unit* target, double otherMultiplier) {
    Spell::cast(target, otherMultiplier);
    this->owner->addHp(this->owner->getMagicPower()/10);
}
