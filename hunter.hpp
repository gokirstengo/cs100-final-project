#ifndef __HUNTER_HPP__
#define __HUNTER_HPP__

#include "ranged.hpp"
#include "range_armor.hpp"

using namespace std;

class Hunter: public Ranged {
    public:
        Hunter() : Ranged() {
            this->d = new RangeArmor();
            armor("heavyArmor");
        }

        virtual string get_characterType() {return "Hunter";}
};

#endif
