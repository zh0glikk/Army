#include "DeadState.hpp"

DeadState::DeadState(const std::string& name, int hp, int dmg) : State(name, hp, dmg) {
    
}

DeadState::~DeadState() {}

void DeadState::takeDamage(int dmg) {
    throw CantAttack();
}

void DeadState::takeMagicDamage(int dmg) {
    throw CantAttack();
}
