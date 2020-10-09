#include "Unit.hpp"

Unit::Unit(const std::string& name, int hp, int dmg) {
    this->state = new State(name, hp, dmg);
}

Unit::~Unit() {
    delete this->state;
    delete this->weapon;
}

int Unit::getDamage() const {
    return this->state->getDamage();
}

int Unit::getHitPoints() const {
    return this->state->getHitPoints();
}

int Unit::getHitPointsLimit() const {
    return this->state->getHitPointsLimit();
}

const std::string& Unit::getName() const {
    return this->state->getName();
}

void Unit::attack(Unit* other) {
    this->weapon->attack(other);
}


void Unit::counterAttack(Unit* other) {
    this->weapon->counterAttack(other);
}

void Unit::takeDamage(int dmg) {
    this->state->takeDamage(dmg);
}

void Unit::takeMagicDamage(int dmg) {
    this->state->takeMagicDamage(dmg);
}

void Unit::addHp(int hp) {
    this->state->addHp(hp);
}

std::ostream& operator<<(std::ostream& out, const Unit& unit) {
    out << unit.getName() << " [hp: " << unit.getHitPoints()
    << ", dmg: " << unit.getDamage() << "]";
    
    return out;
}
