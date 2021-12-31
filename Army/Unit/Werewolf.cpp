#include "Werewolf.hpp"


Werewolf::Werewolf(const std::string& name, int hp, int dmg) : Unit(name, hp, dmg) {
    this->weapon = new WerewolfWeapon(this);
}

Werewolf::~Werewolf() {
    
}

void Werewolf::changeState() {
    if ( !this->isWolf ) {
        WolfState* wf = new WolfState(this->getName(), this->getHitPointsLimit(), this->getDamage());
        delete this->state;
        this->state = wf;
        this->isWolf = true;
    } else {
        State* st = new State(this->getName(), this->getHitPointsLimit()/2, this->getDamage()/2);
        delete this->state;
        this->state = st;
        this->isWolf = false;
    }
}

void Werewolf::infect(Unit* other) {
    InfectMediator* infMediator = new InfectMediator(this, other);
    this->mediator->notify(other, "Werewolf Infect");
    delete infMediator;
}
