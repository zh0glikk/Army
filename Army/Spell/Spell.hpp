#ifndef Spell_hpp
#define Spell_hpp

#include "../SpellCaster/SpellCaster.hpp"

class SpellCaster;

class Spell {
protected:
    SpellCaster* owner;
    int manaCost;
    int spellType = 1; // 1 - attack, 0 - healing
public:
    Spell(SpellCaster* owner, int manaCost = 10, int spellType = 1);
    virtual ~Spell();
    
    virtual void cast(Unit* target, double otherMultipler = 1);
    
    int getManaCost();
    int getSpellType();
    
};

#endif /* Spell_hpp */
