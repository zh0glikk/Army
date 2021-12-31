#include "FireBall.hpp"

FireBall::FireBall(SpellCaster* owner, int manaCost, int spellType) : Spell(owner, manaCost, spellType) {}

FireBall::~FireBall() {
    
}

void FireBall::cast(Unit* target, double otherMultiplier) {
    Spell::cast(target, otherMultiplier);
}
