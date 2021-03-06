#include "catch.hpp"
#include "../Unit/Unit.hpp"


TEST_CASE("Unit Testing", "[Unit]") {
    Unit* u = new Unit("Unit", 100, 10);
    
    
    SECTION( "Rogue: test constructor" ) {
        REQUIRE(u->getHitPointsLimit() == 100);
        REQUIRE(u->getDamage() == 10);
        REQUIRE(u->getHitPoints() == 100);
    }
    
}
