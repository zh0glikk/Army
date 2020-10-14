#ifndef GreatHeal_hpp
#define GreatHeal_hpp

#include "Spell.hpp"

class GreatHeal : public Spell {
public:
    GreatHeal(SpellCaster* owner, int manaCost = 30);
    ~GreatHeal();
    
    void cast(Unit* target, double otherMultipler = 1);
};

#endif /* GreatHeal_hpp */
