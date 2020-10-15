#include "catch.hpp"
#include "../Unit/Rogue.hpp"
#include "../SpellCaster/Necromancer.hpp"

TEST_CASE("Unit Is Dead", "[UnitIsDead]") {
    Rogue* r1 = new Rogue("Rogue1", 100, 10);
    Necromancer* nm = new Necromancer("Necromancer", 100, 10, 100, 20);
    
    SECTION("necromanser healing test") {
        for ( int i = 0; i < 9; i++ ) {
            nm->attack(r1);
        }
        
        REQUIRE(r1->getHitPoints() == 10);
        REQUIRE(nm->getHitPoints() == 55);
        
        nm->cast(r1);
        
        REQUIRE(r1->getHitPoints() == 0);
        REQUIRE(nm->getHitPoints() == 65);
        REQUIRE(nm->getMana() == 90);
        
        nm->cast(r1);
        REQUIRE(r1->getDamage() == 0);
        REQUIRE(nm->getMana() == 90);
        
        
    }
}
