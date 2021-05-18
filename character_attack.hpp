#ifndef __CHARACTER_ATTACK_HPP__
#define __CHARACTER_ATTACK_HPP__
#include <string>

using namespace std;

class CharacterAttack {
    protected:
        string attackUsed;
    public:
        /* Constructors */
        CharacterAttack() {this->attackUsed = "None";}

        virtual ~CharacterAttack() {}
    
        /* Virtual Functions */
        virtual int attack(int distance) = 0;
        string attack_used()
        {
            return this->attackUsed;
        }
};

#endif //__CHARACTER_ATTACK_HPP__
