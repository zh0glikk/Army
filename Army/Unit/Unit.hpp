#ifndef UNIT_H
#define UNIT_H

#include <iostream>

#include "../State/State.h"
#include "../State/DeadState.hpp"
#include "../Mediator/Mediator.hpp"
#include "../Observer/Observer.hpp"
#include "../Observer/Observable.hpp"

#include "../Weapon/Weapon.hpp"

#include "../Race/Races.hpp"

class Mediator;
class Weapon;

class Unit : public Observable {
protected:
    State* state;
    Weapon* weapon;
    Mediator* mediator;
    Race race;
    
public:
    Unit(const std::string& name, int hp, int dmg);
    virtual ~Unit();

    int getDamage() const;
    int getHitPoints() const;
    int getHitPointsLimit() const;
    Race getRace() const;
    const std::string& getName() const;
    
    virtual void attack(Unit* other);
    virtual void counterAttack(Unit* other);
    
    virtual void takeDamage(int dmg);
    virtual void takeMagicDamage(int dmg);
    
    void addHp(int hp);
    
    void setMediator(Mediator *mediator);
    
    void changeWeapon(Weapon* weapon);
    void changeState(State* state);
    void changeRace(Race newRace);
    
    
};

std::ostream& operator<<(std::ostream& out, const Unit& unit);

#endif // UNIT_H
