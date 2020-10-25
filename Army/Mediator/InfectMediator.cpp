#include "InfectMediator.hpp"

InfectMediator::InfectMediator(Unit* u1, Unit* u2) : u1(u1), u2(u2) {
    this->u1->setMediator(this);
    this->u2->setMediator(this);
}

InfectMediator::~InfectMediator() {
    
}

void InfectMediator::notify(Unit* victim, std::string event) const {
    if ( event == "Vampire Infect" ) {
        if (!dynamic_cast<Werewolf*>(victim)) {
            victim->changeWeapon(new VampireWeapon(victim));
            victim->changeRace(Undead);
        } else {
            throw CantBeInfected();
        }
        
    } else if ( event == "Werewolf Infect" ) {
        if (!dynamic_cast<Vampire*>(victim)) {
            victim->changeWeapon(new WerewolfWeapon(victim));
        } else {
            throw CantBeInfected();
        }
    }
}
