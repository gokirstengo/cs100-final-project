#ifndef __RANGED_FACTORY_HPP__
#define __RANGED_FACTORY_HPP__
#include "character_factory.hpp"
#include "elfArcher.hpp"
#include "hunter.hpp"
#include <string>

using namespace std;

class RangedFactory : public CharacterFactory {
    public:
        /* Constructors */
        RangedFactory() : CharacterFactory() {}

        ~RangedFactory() {}

        /* Virtual Functions */
        virtual Character * create(string name)
        {
            Character * c = nullptr;

            if(name.compare("elf archer") == 0)
            {
                c = new ElfArcher();
            }
            else if(name.compare("hunter") == 0)
            {
                c = new Hunter();
            }

            return c;
        }

};

#endif
