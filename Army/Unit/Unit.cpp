#include "Unit.hpp"

Unit::Unit(const std::string& name, int hp, int dmg) {
    this->mediator = nullptr;
    this->state = new State(name, hp, dmg);
    this->race = Human;
}

Unit::~Unit() {
    this->notifyAboutDeath();
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

Race Unit::getRace() const {
    return this->race;
}

void Unit::attack(Unit* other) {
    try {
        this->weapon->attack(other);
    } catch(UnitIsDead e) {
        other->notifyAboutDeath();
        other->changeState(new DeadState(this->getName()));
    } catch(CantAttack e) {
        // some code when u r attacking dead unit
    }
}


void Unit::counterAttack(Unit* other) {
    try {
        this->weapon->counterAttack(other);
    } catch(UnitIsDead e) {
        other->notifyAboutDeath();
        other->changeState(new DeadState(this->getName()));
    } catch(CantAttack e) {
        // some code when u r attacking dead unit
    }
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

void Unit::setMediator(Mediator *mediator) {
    this->mediator = mediator;
}

void Unit::changeWeapon(Weapon* weapon) {
    this->weapon = weapon;
}

void Unit::changeState(State* state) {
    this->state = state;
}

void Unit::changeRace(Race newRace) {
    this->race = newRace;
}

std::ostream& operator<<(std::ostream& out, const Unit& unit) {
    out << unit.getName() << " [hp: " << unit.getHitPoints()
    << ", dmg: " << unit.getDamage() << "]";
    
    return out;
}
