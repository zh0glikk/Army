#ifndef Warlock_hpp
#define Warlock_hpp


#include "SpellCaster.hpp"
#include "../Pets/Demon.hpp"

#include "../Spell/Heal.hpp"
#include "../Spell/FireBall.hpp"
#include "../Spell/FrostBall.hpp"

class Demon;

class Warlock : public SpellCaster {
private:
    bool isDemonExist;
    Demon* demon;
public:
    Warlock(const std::string& name, int hp, int dmg, int manaLimit, int magicPower, double dmgMult = 1, double healMult = 0.5);
    virtual ~Warlock();
    
    void createDemon();
    void removeDemon();
    
    void demonAttack(Unit* target);
};

#endif /* Warlock_hpp */
