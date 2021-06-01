#ifndef __MELEE_FACTORY_HPP__
#define __MELEE_FACTORY_HPP__
#include "character_factory.hpp"
#include "orc.hpp"
#include "barbarian.hpp"
#include <string>

using namespace std;

class MeleeFactory : public CharacterFactory {
    public:
        /* Constructors */
        MeleeFactory() : CharacterFactory() {}

        ~MeleeFactory() {}
    
        /* Virtual Functions */
        virtual Character * create(string name)
        {
            Character * c = nullptr;
            
            if(name.compare("barbarian") == 0)
            {
                c = new Barbarian();
            }
            else if(name.compare("orc") == 0)
            {
                c = new Orc();
            }
            
            return c;
        }
    
};

#endif //__MELEE_FACTORY_HPP__

