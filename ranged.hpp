#ifndef __RANGED_HPP__
#define __RANGED_HPP__

#include "character.hpp"
#include "ranged_attack.hpp"

using namespace std;

class Ranged: public Character {
    public:
        Ranged() : Character() {
            this->a = new RangedAttack();
        }

        virtual string get_attackClass() {return "Ranged";}
};

#endif
