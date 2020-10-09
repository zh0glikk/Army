#include "State.h"

State::State(const std::string& name, int hp, int dmg) {
    this->name = name;
    this->hitPointsLimit = hp;
    this->hitPoints = hp;
    this->damage = dmg;
}

State::~State() {
    
}

void State::ensureIsAlive() {
    if ( hitPoints <= 0 ) {
        hitPoints = 0;
        throw UnitIsDead();
    }
}

int State::getDamage() const {
    return this->damage;
}

int State::getHitPoints() const {
    return this->hitPoints;
}

int State::getHitPointsLimit() const {
    return this->hitPointsLimit;
}

const std::string& State::getName() const {
    return this->name;
}

void State::takeDamage(int dmg) {
    ensureIsAlive();

    this->hitPoints -= dmg;
    if ( this->hitPoints < 0 ) {
        this->hitPoints = 0;
    }
}

void State::takeMagicDamage(int dmg) {
    ensureIsAlive();

    this->hitPoints -= dmg;
    if ( this->hitPoints < 0 ) {
        this->hitPoints = 0;
    }
}

void State::addHp(int hp) {
    ensureIsAlive();
    
    this->hitPoints += hp;
    if ( this->hitPoints > this->hitPointsLimit ) {
        this->hitPoints = this->hitPointsLimit;
    }
}
