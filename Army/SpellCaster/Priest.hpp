#ifndef Priest_hpp
#define Priest_hpp

#include "SpellCaster.hpp"

#include "../Spell/Heal.hpp"
#include "../Spell/FireBall.hpp"
#include "../Spell/FrostBall.hpp"
#include "../Spell/GreatHeal.hpp"

#include "../Race/Undead.hpp"
#include "../Unit/Vampire.hpp"

class Priest : public SpellCaster {
public:
    Priest(const std::string& name, int hp, int dmg, int manaLimit, int magicPower, double dmgMult = 0.5, double healMult = 1);
    ~Priest();
    
    void cast(Unit* target);
};

#endif /* Priest_hpp */
