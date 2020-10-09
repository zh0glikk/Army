#ifndef InfectMediator_hpp
#define InfectMediator_hpp

#include "../Unit/Unit.hpp"

class Unit;

class InfectMediator {
public:
    virtual void Notify(Unit *sender, std::string event) const = 0;
};

#endif /* InfectMediator_hpp */
