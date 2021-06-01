#ifndef __ATTACK_TEST_HPP__
#define __ATTACK_TEST_HPP__

#include "gtest/gtest.h"

#include "character_attack.hpp"
#include "magic_attack.hpp"
#include "ranged_attack.hpp"

TEST(RangedTest, MediumTest) {
    CharacterAttack *r = new RangedAttack();
    
    EXPECT_EQ(r->attack(13), 45);
    EXPECT_EQ(r->attack_used(), "Medium Ranged Attack");
}

TEST(RangedTest, LongTest) {
    CharacterAttack *r = new RangedAttack();
    
    EXPECT_EQ(r->attack(27), 25);
    EXPECT_EQ(r->attack_used(), "Long Ranged Attack");
}

TEST(RangedTest, NoneTest) {
    CharacterAttack *r = new RangedAttack();
    
    EXPECT_EQ(r->attack(51), 0);
    EXPECT_EQ(r->attack_used(), "Not in range");
}

TEST(MagicTest, ShortTest) {
    CharacterAttack *m = new MagicAttack();
    
    EXPECT_EQ(m->attack(0), 45);
    EXPECT_EQ(m->attack_used(), "Short Magic Attack");
}

TEST(MagicTest, MediumTest) {
    CharacterAttack *m = new MagicAttack();
    
    EXPECT_EQ(m->attack(20), 30);
    EXPECT_EQ(m->attack_used(), "Medium Magic Attack");
}

TEST(MagicTest, LongTest) {
    CharacterAttack *m = new MagicAttack();
    
    EXPECT_EQ(m->attack(40), 15);
    EXPECT_EQ(m->attack_used(), "Long Magic Attack");
}

TEST(MagicTest, NoneTest) {
    CharacterAttack *m = new MagicAttack();
    
    EXPECT_EQ(m->attack(52), 0);
    EXPECT_EQ(m->attack_used(), "Not in range");
}



#endif //__ATTACK_TEST_HPP__
