#ifndef __MELEE_ATTACK_HPP__
#define __MELEE_ATTACK_HPP__
#include "character_attack.hpp"


class MeleeAttack : public CharacterAttack {
   public:
	MeleeAttack(): CharacterAttack() { }
	~MeleeAttack() {}

	int lightAttack() {return 45;}
	/*I used a 1.5x multiplier rounding upwards for the heavy attack*/
	int heavyAttack() {return 68;}
	virtual int attack(int distance)
	{
	   int x = 0;

	   if(distance >= 6 && distance <= 10)
      	   {
	      x = lightAttack();
	      attackUsed = "Light Attack";
	   }
	   else if(distance >= 1 && distance <=5)
	   {
	      x = heavyAttack();
	      attackUsed = "Heavy Attack";
	   }
	   else
	   {
	      attackUsed = "Not in range";
	   }

	   return x;
	}
   };

#endif //__MELEE_ATTACJ_HPP__
