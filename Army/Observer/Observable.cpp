#include "Observable.hpp"

Observable::Observable() {
    this->observers = new std::set<Observer*>();
}

Observable::~Observable() {
    std::set<Observer*>::iterator it = this->observers->begin();

    for (; it != this->observers->end(); it++ ) {
        (*it)->removeObservable(this);
    }
    delete(this->observers);
}

void Observable::notifyAboutDeath() {
    std::set<Observer*>::iterator it = this->observers->begin();

    for ( ; it != this->observers->end(); it++ ) {
        (*it)->recieveMessage();
    }
}

void Observable::addObserver(Observer* observer) {
    this->observers->insert(observer);
}

void Observable::removeObserver(Observer* observer) {
    this->observers->erase(observer);
}
