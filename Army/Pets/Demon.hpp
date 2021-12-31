#ifndef Demon_hpp
#define Demon_hpp

#include "../Unit/Soldier.hpp"
#include "../SpellCaster/Warlock.hpp"

class Warlock;

class Demon : public Soldier {
private:
    Warlock* owner;
public:
    Demon(Warlock* owner, const std::string& name = "Demon", int hp = 30, int dmg = 5);
    ~Demon();
};

#endif /* Demon_hpp */
