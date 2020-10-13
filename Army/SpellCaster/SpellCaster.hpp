#ifndef SpellCaster_hpp
#define SpellCaster_hpp

#include <iostream>

#include "../State/MagicState.hpp"
#include "../Unit/Unit.hpp"
#include "../Spell/Spell.hpp"
#include "../Weapon/SpellCasterWeapon.hpp"
//#include "../SpellBook/SpellBook.hpp"
//#include "../Spell/FireBall.hpp"


class Spell;
//class SpellBook;

class SpellCaster : public Unit {
protected:
    MagicState* magicState;
    Spell* spell;
//    SpellBook* spellBook;
public:
    SpellCaster(const std::string& name, int hp, int dmg, int manaLimit, int magicPower, double dmgMult = 1, double healMult = 1);
    ~SpellCaster();
    
    int getMana();
    int getManaLimit();
    int getMagicPower();
    
    void cast(Unit* target);
        
    void changeSpell(Spell* newSpell);
    
    double getDmgMuliplier();
    double getHealingMultiplier();
};



#endif /* SpellCaster_hpp */
