#ifndef WolfState_hpp
#define WolfState_hpp

#include "State.h"

class WolfState : public State {
public:
    WolfState(const std::string& name, int hp, int dmg);
    virtual ~WolfState();
    
    virtual void takeMagicDamage(int dmg);
};


#endif /* WolfState_hpp */
