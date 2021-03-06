#include "Vampire.hpp"

Vampire::Vampire(const std::string& name, int hp, int dmg) : Unit(name, hp, dmg) {
    this->weapon = new VampireWeapon(this);
    this->race = Undead;
}

Vampire::~Vampire() {
    
}

void Vampire::infect(Unit* other) {
    InfectMediator* infMediator = new InfectMediator(this, other);
    this->mediator->notify(other, "Vampire Infect");
    delete infMediator;
}
