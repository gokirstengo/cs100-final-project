#ifndef __MAGIC_ATTACK_HPP__
#define __MAGIC_ATTACK_HPP__

#include "character_attack.hpp"

class MagicAttack : public CharacterAttack{
    public:
        /* Constructors */
        MagicAttack(): CharacterAttack() { }

        ~MagicAttack() {}

        /* Functions */
        int shortMagic() {return 45;}
        int mediumMagic() {return 30;}
        int longMagic(){return 15;}
        virtual int attack(int distance)
        {
            int x = 0;
        
            if(distance >= 0 && distance <= 10)
            {
                x = shortMagic();
                attackUsed = "Short Magic Attack";
            }
            else if(distance >= 11 && distance <= 25)
            {
                x = mediumMagic();
                attackUsed = "Medium Magic Attack";
            }
            else if(distance >= 26 && distance <= 50)
            {
                x = longMagic();
                attackUsed = "Long Magic Attack";
            }
            else
            {
                attackUsed = "None";
            }
        
            return x;
        }
};

#endif //__MAGIC_ATTACK_HPP__

