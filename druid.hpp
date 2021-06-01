#ifndef __DRUID_HPP__
#define __DRUID_HPP__

#include "magic.hpp"
#include "magic_shield.hpp"

using namespace std;

class Druid: public Magic {
    public:
        Druid() : Magic() {
            this->d = new MagicShield();
            armor("metalShield");
        }

        virtual string get_characterType() {return "Druid";}
};

#endif
