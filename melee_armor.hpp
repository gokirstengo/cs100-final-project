#ifndef __MELEE_ARMOR_HPP__
#define __MELEE_ARMOR_HPP__
#include "character_defense.hpp"

using namespace std;

class MeleeArmor : public CharacterDefense {
    public:
        MeleeArmor(): CharacterDefense() { }
        ~MeleeArmor() { }
    
        int lightArmor() {return 50;}
        int heavyArmor() {return 100;}

        virtual int armor(string armor_type) {
            int x = 0;

            if (armor_type == "lightArmor") {
                x = lightArmor();
                health += 50;
            }
            else if(armor_type == "heavyArmor") {
                x = heavyArmor();
                health += 100;
            }
            else {
                x = 0;
            }
            return x;
        }

        virtual int regen(string rest) {
            int amount = 0;

            if (rest == "one") {
                amount = 5;
                health += 5;
            }
            else if (rest == "two") {
                amount = 15;
                health += 15;
            }
            else {
                return 0;
            }
            return amount;
        }
};

#endif //__MELEE_ARMOR_HPP__
