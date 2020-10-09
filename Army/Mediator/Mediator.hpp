#ifndef Mediator_hpp
#define Mediator_hpp

#include <iostream>
#include "../Unit/Unit.hpp"


class Mediator {
public:
    virtual void notify(Unit* sender, std::string event) = 0;
};

#endif /* Mediator_hpp */
