#ifndef Wizard_hpp
#define Wizard_hpp

#include "SpellCaster.hpp"

#include "../Spell/Heal.hpp"
#include "../Spell/FireBall.hpp"
#include "../Spell/FrostBall.hpp"


class Wizard : public SpellCaster {
public:
    Wizard(const std::string& name, int hp, int dmg, int manaLimit, int magicPower, double dmgMult = 1, double healMult = 0.5);
    virtual ~Wizard();
};

#endif /* Wizard_hpp */
