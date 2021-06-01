#ifndef __ORC_HPP__
#define __ORC_HPP__

#include "melee.hpp"
#include "melee_armor.hpp"

using namespace std;

class Orc: public Melee {
    public:
        Orc() : Melee() {
            this->d = new MeleeArmor();
            armor("heavyArmor");
        }
    
        virtual string get_characterType() {return "Orc";}
};

#endif
