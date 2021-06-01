#ifndef __LICH_HPP__
#define __LICH_HPP__

#include "magic_attack.hpp"
#include "magic_shield.hpp"

using namespace std;

class Lich: public Magic {
    public:
        Lich() : Magic() {
            this->d = new MagicShield();
            armor("woodShield");
        }

        virtual string get_characterType() {return "Lich";}
};

#endif
