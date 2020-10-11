#ifndef Spell_hpp
#define Spell_hpp

#include <iostream>
//#include "../Unit/Unit.hpp"
#include "../SpellCaster/SpellCaster.hpp"

class SpellCaster;

class Spell {
protected:
    SpellCaster* owner;
    int manaCost;
public:
    Spell(SpellCaster* owner, int manaCost);
    ~Spell();
  
    virtual void cast(Unit* enemy);
    int getManaCost();
};


#endif /* Spell_hpp */
