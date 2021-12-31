#include "MagicState.hpp"

MagicState::MagicState(int manaLimit, int magicPower, double dmgMultiplier, double healingMultiplier) {
    this->manaLimit = manaLimit;
    this->magicPower = magicPower;
    this->mana = manaLimit;
    this->dmgMultiplier = dmgMultiplier;
    this->healingMultiplier = healingMultiplier;
}

MagicState::~MagicState() {
    
}

void MagicState::ensureCanCast() {
    if ( this->mana <= 0 ) {
        this->mana = 0;
        throw LowMana();
    }
}

int MagicState::getMana() {
    return this->mana;
}

int MagicState::getManaLimit() {
    return this->manaLimit;
}

int MagicState::getMagicPower() {
    return this->magicPower;
}

void MagicState::setMana(int value) {
    this->mana = value;
}

double MagicState::getDmgMultiplier() {
    return this->dmgMultiplier;
}

double MagicState::getHealingMultiplier() {
    return this->healingMultiplier;
}
