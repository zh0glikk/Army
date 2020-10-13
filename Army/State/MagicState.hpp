#ifndef MagicState_hpp
#define MagicState_hpp

#include "../Exceptions/Exceptions.hpp"

class MagicState {
private:
    int mana;
    int manaLimit;
    int magicPower;
    
    double dmgMultiplier;
    double healingMultiplier;
    
    void ensureCanCast();
public:
    MagicState(int manaLimit, int magicPower, double dmgMultiplier, double healingMultiplier);
    ~MagicState();
    
    int getMana();
    int getManaLimit();
    int getMagicPower();
    
    void setMana(int value);
    
    double getDmgMultiplier();
    double getHealingMultiplier();
};

#endif /* MagicState_hpp */
