#include "catch.hpp"
#include "../SpellCaster/Wizard.hpp"
#include "../SpellBook/SpellBook.hpp"

TEST_CASE("Spell Book testing", "[SpellBook]") {
    Wizard* wz = new Wizard("Wizard", 100, 10, 100, 20);
    SpellBook* sp = new SpellBook(wz);
    
    
}
