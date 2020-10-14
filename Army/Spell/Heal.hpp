#ifndef Heal_hpp
#define Heal_hpp

#include "Spell.hpp"

class Heal : public Spell {
public:
    Heal(SpellCaster* owner, int manaCost = 20);
    ~Heal();
    
    void cast(Unit* target, double otherMultipler = 1);
};

#endif /* Heal_hpp */
