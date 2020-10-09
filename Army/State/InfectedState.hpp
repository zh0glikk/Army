#ifndef InfectedState_hpp
#define InfectedState_hpp

#include "State.h"

class InfectedState : public State {
public:
    InfectedState(const std::string& name, int hp, int dmg);
    virtual ~InfectedState();
};

#endif /* InfectedState_hpp */
