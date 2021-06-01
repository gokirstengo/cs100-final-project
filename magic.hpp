#ifndef __MAGIC_HPP__
#define __MAGIC_HPP__

#include "character.hpp"
#include "magic_attack.hpp"

using namespace std;

class Magic: public Character {
    public:
        Magic() : Character() {
            this->a = new MagicAttack();
        }

        virtual string get_attackClass() {return "Magic";}
};

#endif
