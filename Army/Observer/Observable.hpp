#ifndef Observable_hpp
#define Observable_hpp

#include <set>
#include "Observer.hpp"

class Observer;

class Observable {
private:
    std::set<Observer*>* observers;
public:
    Observable();
    virtual ~Observable();
    
    void notifyAboutDeath();
    
    void addObserver(Observer* observer);
    void removeObserver(Observer* observer);
};

#endif /* Observable_hpp */
