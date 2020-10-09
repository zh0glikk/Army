#ifndef State_h
#define State_h

#include <iostream>

#include "../Exceptions/Exceptions.hpp"

class State {
    private:
        int damage;
        int hitPoints;
        int hitPointsLimit;
        std::string name;
    
        void ensureIsAlive();
        
    public:
        State(const std::string& name, int hp, int dmg);
        virtual ~State();

        int getDamage() const;
        int getHitPoints() const;
        int getHitPointsLimit() const;
        const std::string& getName() const;
        
        virtual void takeDamage(int dmg);
        virtual void takeMagicDamage(int dmg);
    
        void addHp(int hp);
};

#endif /* State_h */
