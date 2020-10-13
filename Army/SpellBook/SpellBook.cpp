#include "SpellBook.hpp"

SpellBook::SpellBook(SpellCaster* owner) {
    this->owner = owner;
    this->spellBook.insert(std::pair<std::string, Spell>("FireBall", FireBall(owner)));
    this->spellBook.emplace("Heal", Heal(owner));
    this->spellBook.emplace("FrostBall", FrostBall(owner));
}

SpellBook::~SpellBook() {
    
}

