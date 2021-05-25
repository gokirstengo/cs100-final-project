#ifndef __CHARACTER_DEFENSE_HPP__
#define __CHARACTER_DEFENSE_HPP__
#include <string>

using namespace std;

class CharacterDefense {
    protected:
        int health;
    public:
        CharacterDefense() {this->health = 100;}

        virtual ~CharacterDefense() {}
    
        virtual int armor(string) = 0;
        virtual int regen(string rest) = 0;
        int get_health()
        {
            return this->health;
        }
};

#endif //__CHARACTER_DEFENSE_HPP__
