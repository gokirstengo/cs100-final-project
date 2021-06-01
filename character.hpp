#ifndef __CHARACTER_HPP__
#define __CHARACTER_HPP__
#include <string>

using namespace std;

class Character {
    protected:
        CharacterAttack * a;
        CharacterDefense * d;
    
    public:
        /* Constructors */
        Character() {}

        virtual ~Character() {
            delete a;
            delete d;
        }
    
        /* Functions */
        virtual string get_attackClass() = 0;
        
        virtual string get_characterType() = 0;
    
        int armor(string armorType)
        {
            return d->armor(armorType);
        }
        
        const int get_health()
        {
            return d->get_health();
        }
    
        void take_damage(int d)
        {
            d->take_damage(d);
        }
        
        int regen_health(string r)
        {
            return d->regen(r);
        }
    
        int attack(int d)
        {
            return a->attack(d);
        }
    
        string attackUsed()
        {
            return a->attack_used()
        }
    
    
};

#endif //__CHARACTER_HPP__

