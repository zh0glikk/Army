#ifndef Mediator_hpp
#define Mediator_hpp

#include <iostream>
#include "../Unit/Unit.hpp"

class Unit;

class Mediator {
public:
    virtual void notify(Unit* victim, std::string event) const = 0;
};

#endif /* Mediator_hpp */
