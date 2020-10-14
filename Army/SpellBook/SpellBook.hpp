#ifndef SpellBook_hpp
#define SpellBook_hpp

#include <map>

#include "../SpellCaster/SpellCaster.hpp"
#include "../Spell/Spell.hpp"

#include "../Spell/FireBall.hpp"
#include "../Spell/FrostBall.hpp"
#include "../Spell/Heal.hpp"

class SpellBook {
private:
    SpellCaster* owner;
    std::map<std::string, Spell> spellBook;
public :
    SpellBook(SpellCaster* owner);
    ~SpellBook();
};


#endif /* SpellBook_hpp */
