#ifndef InfectMediator_hpp
#define InfectMediator_hpp

#include "Mediator.hpp"
#include "../Unit/Unit.hpp"
#include "../Unit/Vampire.hpp"
#include "../Unit/Werewolf.hpp"

#include "../Weapon/VampireWeapon.hpp"
#include "../Weapon/WerewolfWeapon.hpp"


class InfectMediator : public Mediator {
private:
    Unit* u1;
    Unit* u2;
public:
    InfectMediator(Unit* u1, Unit* u2);
    ~InfectMediator();
    
    void notify(Unit* victim, std::string event) const override;
};

#endif /* InfectMediator_hpp */
