#include "catch.hpp"
#include "../SpellCaster/Wizard.hpp"
#include "../SpellBook/SpellBook.hpp"
#include "../SpellCaster/Healer.hpp"
#include "../SpellCaster/Priest.hpp"

#include "../Unit/Vampire.hpp"

TEST_CASE("Spell Book testing", "[SpellBook]") {
    Wizard* wz = new Wizard("Wizard", 100, 10, 100, 20);
    Healer* hl = new Healer("Healer", 100, 10, 100, 20);
    Priest* ps = new Priest("Priest", 100, 10, 100, 20);
    Vampire* vm = new Vampire("Vampire", 100, 10);
    
    SECTION( "wz test" ) {
        wz->changeSpell("FrostBall");
        wz->cast(hl);
        wz->cast(hl);
        
        REQUIRE(hl->getHitPoints() == 60);
        
        hl->changeSpell("GreatHeal");
        hl->cast(hl);
        
        REQUIRE(hl->getHitPoints() == 100);
    }
    SECTION("test priest") {
        ps->changeSpell("FireBall");
        
        ps->cast(ps);
        
        REQUIRE(ps->getHitPoints() == 90);
        
        ps->cast(vm);
        
        REQUIRE(vm->getHitPoints() == 80);
        
    }
    
    
}
