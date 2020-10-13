#ifndef Heal_hpp
#define Heal_hpp

#include "Spell.hpp"

class Heal : public Spell {
public:
    Heal(SpellCaster* owner, int manaCost = 10);
    ~Heal();
    
    void cast(Unit* target);
};

#endif /* Heal_hpp */
