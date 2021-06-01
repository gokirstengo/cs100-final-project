#ifndef __MAGIC_FACTORY_HPP__
#define __MAGIC_FACTORY_HPP__
#include "character_factory.hpp"
#include "lich.hpp"
#include "druid.hpp"
#include <string>

using namespace std;

class MagicFactory : public CharacterFactory {
    public:
        /* Constructors */
        MagicFactory() : CharacterFactory() {}

        ~MagicFactory() {}

        /* Virtual Functions */
        virtual Character * create(string name)
        {
            Character * c = nullptr;

            if(name.compare("lich") == 0)
            {
                c = new Lich();
            }
            else if(name.compare("druid") == 0)
            {
                c = new Druid();
            }

            return c;
        }

};

#endif
