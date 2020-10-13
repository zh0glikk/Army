#include "FireBall.hpp"

FireBall::FireBall(SpellCaster* owner, int manaCost) : Spell(owner, manaCost) {}

FireBall::~FireBall() {
    
}

void FireBall::cast(Unit* target) {
    Spell::cast(target);
}
