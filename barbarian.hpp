#ifndef __BARBARIAN_HPP__
#define __BARBARIAN_HPP__

#include "melee.hpp"
#include "melee_shield.hpp"

using namespace std;

class Barbarian: public Melee {
    public:
        Barbarian() : Melee() {
            this->d = new MeleeShield();
            armor("metalShield");
        }
    
        virtual string get_characterType() {return "Barbarian";}
};

#endif

