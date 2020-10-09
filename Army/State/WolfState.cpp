#include "WolfState.hpp"

WolfState::WolfState(const std::string& name, int hp, int dmg) : State(name, hp*2, dmg*2) {
    
}

WolfState::~WolfState() {
    
}

void WolfState::takeMagicDamage(int dmg) {
    State::takeMagicDamage(dmg*2);
}
