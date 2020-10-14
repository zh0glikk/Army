#include "../Unit/Soldier.hpp"
#include "../SpellCaster/Wizard.hpp"
#include "../Unit/Werewolf.hpp"
#include "../Unit/Berserker.hpp"
#include "../SpellCaster/Healer.hpp"

#include "../Spell/Heal.hpp"

#include "catch.hpp"

TEST_CASE("Spell Caster", "[wz vs Soldier]") {
    Wizard* wz = new Wizard("Wizard", 100, 10, 100, 20);
    Healer* hl = new Healer("Healer", 100, 10, 100, 20);
    Soldier* sld = new Soldier("Soldier", 100, 10);
    Werewolf* wf = new Werewolf("Werewolf", 100, 10);
    Berserker* bs = new Berserker("Berserker", 100, 10);
    
    
    
    SECTION("Constructor") {
        REQUIRE(wz->getHealingMultiplier() == 0.5);
        REQUIRE(wz->getDmgMuliplier() == 1);
    }
    
    SECTION("Test Spell Caster cast") {
        wz->cast(sld);

        REQUIRE(wz->getHitPoints() == 100);
        REQUIRE(sld->getHitPoints() == 80);
        REQUIRE(wz->getMana() == 90);

    }
    
    SECTION("Test wz attack") {
        wz->attack(sld);
            
        REQUIRE(wz->getHitPoints() == 95);
        REQUIRE(sld->getHitPoints() == 90);
    }
    
    SECTION("Test Spell caster -> wolf") {
        wz->cast(wf);
        
        REQUIRE(wf->getHitPoints() == 80);
        
        wf->changeState();
        
        REQUIRE(wf->getHitPoints() == 200);
        
        wz->cast(wf);
        
        REQUIRE(wf->getHitPoints() == 160);
    }
    SECTION("Berserker taking magic dmg") {
        wz->cast(bs);
        
        REQUIRE(bs->getHitPoints() == 100);
    }
    
    SECTION("Healing check") {
        wz->cast(sld);

        REQUIRE(sld->getHitPoints() == 80);
        
        wz->changeSpell(new Heal(wz));
        wz->cast(sld);
        
        
        REQUIRE(sld->getHitPoints() == 90);
    }
    
    SECTION("Frost Ball check") {
        sld->attack(wz);
        
        REQUIRE(wz->getHitPoints() == 90);
        
        wz->changeSpell(new FrostBall(wz));
        wz->cast(sld);
        
        REQUIRE(wz->getHitPoints() == 92);
    }
    SECTION("check healer") {
        wz->cast(wz);
        
        REQUIRE(wz->getHitPoints() == 80);
        
        hl->cast(wz);
        
        REQUIRE(wz->getHitPoints() == 100);
    }
    SECTION("check change spell") {
        wz->changeSpell("FrostBall");
        
        wz->cast(wz);
        REQUIRE(wz->getHitPoints() == 82);
        
        wz->changeSpell("Heal");
        wz->cast(wz);
        
        REQUIRE(wz->getHitPoints() == 92);
    }
    
}
