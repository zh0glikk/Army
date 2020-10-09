#ifndef Weapon_hpp
#define Weapon_hpp

#include "../Unit/Unit.hpp"

class Unit;

class Weapon {
protected:
    Unit* owner;
public:
    Weapon(Unit *unit);
    virtual ~Weapon();
  
    virtual void attack(Unit* enemy) = 0;
    virtual void counterAttack(Unit* enemy);
    
};

#endif /* Weapon_hpp */
