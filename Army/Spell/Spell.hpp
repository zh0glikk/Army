#ifndef Spell_hpp
#define Spell_hpp

#include "../SpellCaster/SpellCaster.hpp"

class SpellCaster;

class Spell {
protected:
    SpellCaster* owner;
    int manaCost;
public:
    Spell(SpellCaster* owner, int manaCost = 10);
    virtual ~Spell();
    
    virtual void cast(Unit* target);
    
    int getManaCost();
};

#endif /* Spell_hpp */
