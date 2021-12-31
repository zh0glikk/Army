#include "../Unit/Rogue.hpp"
#include "catch.hpp"


TEST_CASE("rogue testing", "[Rogue]") {
    Rogue* rogue = new Rogue("Rogue", 100, 10);
    Rogue* other = new Rogue("Other", 100, 10);
    
    
    
    SECTION( "Rogue: test constructor" ) {
        REQUIRE(rogue->getName() == "Rogue");
        REQUIRE(rogue->getHitPointsLimit() == 100);
        REQUIRE(rogue->getDamage() == 10);
    }
    SECTION( "Rogue: check attack" ) {
        rogue->attack(other);
        
        REQUIRE(rogue->getHitPoints() == 100);
        REQUIRE(other->getHitPoints() == 90);
    }
    
    
}
