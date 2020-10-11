#include "../Unit/Soldier.hpp"
#include "../SpellCaster/SpellCaster.hpp"
#include "../Spell/Spell.hpp"
#include "../Unit/Werewolf.hpp"
#include "../Unit/Berserker.hpp"

#include "catch.hpp"

TEST_CASE("Spell Caster", "[SC vs Soldier]") {
    SpellCaster* sc = new SpellCaster("SpellCaster", 100, 10, 100, 20);
    Soldier* sld = new Soldier("Soldier", 100, 10);
    Werewolf* wf = new Werewolf("Werewolf", 100, 10);
    Berserker* bs = new Berserker("Berserker", 100, 10);
    
    
    
    SECTION("Test Spell Caster cast") {
        sc->cast(sld);

        REQUIRE(sc->getHitPoints() == 100);
        REQUIRE(sld->getHitPoints() == 80);
        REQUIRE(sc->getMana() == 90);

    }
    
    SECTION("Test soldier attack") {
        sc->attack(sld);
            
        REQUIRE(sc->getHitPoints() == 95);
        REQUIRE(sld->getHitPoints() == 90);
    }
    SECTION("Test Spell caster -> wolf") {
        sc->cast(wf);
        
        REQUIRE(wf->getHitPoints() == 80);
        
        wf->changeState();
        
        REQUIRE(wf->getHitPoints() == 200);
        
        sc->cast(wf);
        
        REQUIRE(wf->getHitPoints() == 160);
    }
    SECTION("Berserker taking magic dmg") {
        sc->cast(bs);
        
        REQUIRE(bs->getHitPoints() == 100);
    }
    
    SECTION("Healing check") {
        sc->cast(sld);
        
        REQUIRE(sld->getHitPoints() == 80);
        
        sc->heal(sld);
        
        REQUIRE(sld->getHitPoints() == 100);
        REQUIRE(sc->getMana() == 70);
        
    }
    
}
