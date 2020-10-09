#ifndef Werewolf_hpp
#define Werewolf_hpp

#include "Unit.hpp"
#include "../Weapon/WerewolfWeapon.hpp"
#include "../State/WolfState.hpp"

class Werewolf : public Unit {
private:
    bool isWolf = false;
public:
    Werewolf(const std::string& name = "Werewolf", int hp = 130, int dmg = 25);
    ~Werewolf();
    
    void changeState();
};

#endif /* Werewolf_hpp */
