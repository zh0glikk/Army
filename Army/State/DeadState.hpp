#ifndef DeadState_hpp
#define DeadState_hpp

#include "State.h"

class DeadState : public State {
public:
    DeadState(const std::string& name, int hp = 0, int dmg = 0);
    virtual ~DeadState();
    
    virtual void takeDamage(int dmg);
    virtual void takeMagicDamage(int dmg);
};
#endif /* DeadState_hpp */
