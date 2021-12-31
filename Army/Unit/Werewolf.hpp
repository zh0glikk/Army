#ifndef Werewolf_hpp
#define Werewolf_hpp

#include "Unit.hpp"
#include "../Weapon/WerewolfWeapon.hpp"
#include "../State/WolfState.hpp"

#include "../Mediator/InfectMediator.hpp"

class Werewolf : public Unit {
private:
    bool isWolf = false;
public:
    Werewolf(const std::string& name = "Werewolf", int hp = 130, int dmg = 25);
    virtual ~Werewolf();
    
    void changeState();
    void infect(Unit* other);
};

#endif /* Werewolf_hpp */
