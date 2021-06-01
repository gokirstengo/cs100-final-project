#ifndef __ELFARCHER_HPP__
#define __ELFARCHER_HPP__

#include "ranged.hpp"
#include "range_armor.hpp"

using namespace std;

class ElfArcher: public Ranged {
    public:
        ElfArcher() : Ranged() {
            this->d = new RangeArmor();
            armor("lightArmor");
        }

        virtual string get_characterType() {return "Elf Archer";}
};

#endif
