#ifndef FIreBall_hpp
#define FIreBall_hpp

#include "Spell.hpp"

class FireBall : public Spell {
public:
    FireBall(SpellCaster* owner, int manaCost = 10);
    ~FireBall();
    
    void cast(Unit* target, double otherMuliplier = 1);
};

#endif /* FIreBall_hpp */
