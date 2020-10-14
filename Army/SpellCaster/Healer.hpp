#ifndef Healer_hpp
#define Healer_hpp

#include "SpellCaster.hpp"

#include "../Spell/Heal.hpp"
#include "../Spell/FireBall.hpp"
#include "../Spell/FrostBall.hpp"
#include "../Spell/GreatHeal.hpp"

class Healer : public SpellCaster {
public:
    Healer(const std::string& name, int hp, int dmg, int manaLimit, int magicPower, double dmgMult = 0.5, double healMult = 1);
    ~Healer();
};

#endif /* Healer_hpp */
