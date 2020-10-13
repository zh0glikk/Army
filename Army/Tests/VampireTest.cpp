#include "../Unit/Vampire.hpp"
#include "../Unit/Soldier.hpp"
#include "../Unit/Werewolf.hpp"

#include "catch.hpp"


TEST_CASE("vampire vs soldier", "[Vampire]") {
    Vampire* vmp = new Vampire("Vampire", 100, 10);
    Soldier* sld = new Soldier("Soldier", 100, 10);
    Werewolf* wf = new Werewolf("Werewolf", 100, 10);
    
    
    SECTION("Test soldier attack") {
        sld->attack(vmp);
        
        REQUIRE(vmp->getHitPoints() == 90);
        REQUIRE(sld->getHitPoints() == 95);
        
        vmp->attack(sld);
        
        REQUIRE(vmp->getHitPoints() == 90);
        REQUIRE(sld->getHitPoints() == 85);
    }
    SECTION("Werewolf check") {
        try {
            wf->infect(vmp);
        } catch (CantBeInfected e) {
            std::cout << "CantBeInfected exeption" << std::endl;
        }
        
    }
    
}
