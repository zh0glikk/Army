#ifndef Observer_hpp
#define Observer_hpp

#include <set>
#include "Observable.hpp"

class Observable;

class Observer {
private:
    std::set<Observable*>* observables;
public:
    Observer();
    virtual ~Observer();
    
    virtual void recieveMessage();
    
    void addObservable(Observable* observable);
    void removeObservable(Observable* observable);
};

#endif /* Observer_hpp */
