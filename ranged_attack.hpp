#ifndef __RANGED_ATTACK_HPP__
#define __RANGED_ATTACK_HPP__

#include "character_attack.hpp"

class RangedAttack : public CharacterAttack{
    public:
        /* Constructors */
        RangedAttack(): CharacterAttack() { }

        ~RangedAttack() {}

        /* Functions */
        int mediumRange() {return 45;}
        int longRange(){return 25;}
        virtual int attack(int distance)
        {
            int x = 0;
            
            if(distance >= 11 && distance <= 25)
            {
                x = mediumRange();
                attackUsed = "Medium Ranged Attack";
            }
            else if(distance >= 26 && distance <= 50)
            {
                x = longRange();
                attackUsed = "Long Ranged Attack";
            }
            else
            {
                attackUsed = "Not in range";
            }
            
            return x;
        }
};

#endif //__RANGED_ATTACK_HPP__
