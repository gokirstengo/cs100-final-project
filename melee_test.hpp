#ifndef __MELEE_TEST_HPP__
#define __MELEE_TEST_HPP__

#include "gtest/gtest.h"

#include "character_attack.hpp"
#include "magic_attack.hpp"
#include "ranged_attack.hpp"
#include "melee_attack.hpp"

TEST(MeleeTest, LightTest) {
    CharacterAttack *r = new MeleeAttack();
    
    EXPECT_EQ(r->attack(6), 45);
    EXPECT_EQ(r->attack_used(), "Light Attack");
}

TEST(MeleeTest, HeavyTest) {
    CharacterAttack *r = new MeleeAttack();
    
    EXPECT_EQ(r->attack(1), 68);
    EXPECT_EQ(r->attack_used(), "Heavy Attack");
}

TEST(MeleeTest, NoneTest) {
    CharacterAttack *r = new MeleeAttack();
    
    EXPECT_EQ(r->attack(11), 0);
    EXPECT_EQ(r->attack_used(), "Not in range");
}

#endif //__ATTACK_TEST_HPP__
