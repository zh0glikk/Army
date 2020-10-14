#ifndef SpellCaster_hpp
#define SpellCaster_hpp

#include <iostream>

#include <map>

#include "../State/MagicState.hpp"
#include "../Unit/Unit.hpp"
#include "../Spell/Spell.hpp"
#include "../Weapon/SpellCasterWeapon.hpp"

class Spell;

class SpellCaster : public Unit {
protected:
    MagicState* magicState;
    Spell* spell;
    std::map<std::string, Spell*> spellBook;
public:
    SpellCaster(const std::string& name, int hp, int dmg, int manaLimit, int magicPower, double dmgMult = 1, double healMult = 1);
    ~SpellCaster();
    
    int getMana();
    int getManaLimit();
    int getMagicPower();
    
    virtual void cast(Unit* target, double otherMultiplier = 1);
        
    void changeSpell(Spell* newSpell);
    void changeSpell(std::string spellName);
    
    double getDmgMuliplier();
    double getHealingMultiplier();
};

#endif /* SpellCaster_hpp */
