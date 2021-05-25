#ifndef __SHIELD_HPP__
#define __SHIELD_HPP__
#include "character_defense.hpp"

class Shield : public CharacterDefense {
   public:
	Shield(): CharacterDefense() { }
	~Shield() {}

	int woodshield() {return 25;}
	int metalshield() {return 75;}
