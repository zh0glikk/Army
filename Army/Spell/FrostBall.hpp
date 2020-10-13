#ifndef FrostBall_hpp
#define FrostBall_hpp

#include "Spell.hpp"

class FrostBall : public Spell {
public:
    FrostBall(SpellCaster* owner, int manaCost = 15);
    ~FrostBall();
    
    void cast(Unit* target);
};

#endif /* FrostBall_hpp */
