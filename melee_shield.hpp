#ifndef __MELEE_SHIELD_HPP__
#define __MELEE_SHIELD_HPP__
#include "character_defense.hpp"

using namespace std;

class MeleeShield : public CharacterDefense {
   public:
	MeleeShield(): CharacterDefense() { }
	~MeleeShield() { }

	int woodShield() {return 25;}
	int metalShield() {return 75;}

	virtual int armor(string armor_type) {
	   int x = 0;

	   if (armor_type == "woodShield") {
		x = woodShield();
		health += 25;
	   }
	   else if (armor_type == "metalShield") {
		x = metalShield();
		health += 75;
	   }
	   else {
		x = 0;
	   }
	   return x;
   }

	   virtual int regen (string rest) {
		int amount = 0;

		if (rest == "one") {
		   amount = 5;
		   health += 5;
		}
		else if (rest == "two") {
		   amount = 15;
		   health += 15;
		}
		else {
		   return 0;
		}
		return amount;
	   }
};

#endif //__MELEE_SHIELD_HPP__
