#ifndef Necromancer_hpp
#define Necromancer_hpp

#include "SpellCaster.hpp"

#include "../Spell/Heal.hpp"
#include "../Spell/FireBall.hpp"
#include "../Spell/FrostBall.hpp"


class Necromancer : public SpellCaster, Observer {
public:
    Necromancer(const std::string& name, int hp, int dmg, int manaLimit, int magicPower, double dmgMult = 1, double healMult = 0.5);
    virtual ~Necromancer();
    
    void cast(Unit* target);
    void attack(Unit* other);
    
    void recieveMessage();
};

#endif /* Necromancer_hpp */
