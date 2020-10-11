#include "catch.hpp"
#include "../Unit/Rogue.cpp"

TEST_CASE("rogue testing", "[Rogue]") {
    Rogue* rogue = new Rogue("Rogue", 100, 10);
    
    SECTION( "Rogue: test constructor" ) {
        REQUIRE(rogue->getName() == "Rogue");
        REQUIRE(rogue->getHitPointsLimit() == 100);
        REQUIRE(rogue->getDamage() == 10);
    }
}
