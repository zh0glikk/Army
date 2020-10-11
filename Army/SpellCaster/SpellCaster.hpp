#ifndef SpellCaster_hpp
#define SpellCaster_hpp

#include <iostream>

#include "../Unit/Unit.hpp"
#include "../Spell/Spell.hpp"
#include "../Weapon/SpellCasterWeapon.hpp"

class SpellCaster : public Unit {
private:
    int mana;
    int manaLimit;
    int magicDamage;
    
    Spell* attackSpell;
    Spell* healingSpell;
    
    void ensureCanCast();
public:
    SpellCaster(const std::string& name, int hp, int dmg, int manaLimit, int magicDamage);
    ~SpellCaster();
    
    int getMana();
    int getManaLimit();
    int getMagicDamage();
    
    void cast(Unit* enemy);
    void heal(Unit* target);
        
    void changeSpell(Spell* newSpell);
};



#endif /* SpellCaster_hpp */
