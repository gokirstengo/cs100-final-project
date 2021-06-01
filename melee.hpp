#ifndef __MELEE_HPP__
#define __MELEE_HPP__

#include "character.hpp"
#include "melee_attack.hpp"

using namespace std;

class Melee: public Character {
    public:
        Melee() : Character() {
            this->a = new MeleeAttack();
        }
    
        virtual string get_attackClass() {return "Melee";}
};

#endif

