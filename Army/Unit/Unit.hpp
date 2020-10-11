#ifndef UNIT_H
#define UNIT_H

#include <iostream>

#include "../State/State.h"
#include "../Mediator/Mediator.hpp"

#include "../Weapon/Weapon.hpp"

class Mediator;
class Weapon;
class Spell;

class Unit {
protected:
    State* state;
    Weapon* weapon;
    Mediator* mediator;
    
public:
    Unit(const std::string& name, int hp, int dmg);
    virtual ~Unit();

    int getDamage() const;
    int getHitPoints() const;
    int getHitPointsLimit() const;
    const std::string& getName() const;
    
    virtual void attack(Unit* other);
    virtual void counterAttack(Unit* other);
    
    void takeDamage(int dmg);
    void takeMagicDamage(int dmg);
    
    void addHp(int hp);
    
    void setMediator(Mediator *mediator);
    
    void changeWeapon(Weapon* weapon);
};

std::ostream& operator<<(std::ostream& out, const Unit& unit);

#endif // UNIT_H
