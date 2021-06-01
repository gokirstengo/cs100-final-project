#ifndef __CHARACTER_FACTORY_HPP__
#define __CHARACTER_FACTORY_HPP__
#include "character.hpp"
#include <string>

using namespace std;

class CharacterFactory {
    public:
        /* Constructors */
        CharacterFactory() {}

        virtual ~CharacterFactory() {}
    
        /* Virtual Functions */
        virtual Character * create(string name) = 0;
    
};

#endif //__CHARACTER_FACTORY_HPP__
