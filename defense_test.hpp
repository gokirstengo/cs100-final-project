#ifndef __DEFENSE_TEST_HPP__
#define __DEFENSE_TEST_HPP__

#include "gtest/gtest.h"

#include "character_defense.hpp"
#include "melee_armor.hpp"
#include "range_armor.hpp"

TEST(MeleeTest, LightTest) {
    CharacterDefense *r = new MeleeArmor();
    
    EXPECT_EQ(r->armor("lightArmor"), 50);
    EXPECT_EQ(r->get_health(), 150);
}

TEST(MeleeTest, HeavyTest) {
    CharacterDefense *r = new MeleeArmor();
    
    EXPECT_EQ(r->armor("heavyArmor"), 100);
    EXPECT_EQ(r->get_health(), 200);
}

TEST(MeleeTest, HP1Test) {
    CharacterDefense *r = new MeleeArmor();
    
    EXPECT_EQ(r->regen("one"), 5);
    EXPECT_EQ(r->get_health(), 105);
}

TEST(MeleeTest, HP2Test) {
    CharacterDefense *r = new MeleeArmor();
    
    EXPECT_EQ(r->regen("two"), 15);
    EXPECT_EQ(r->get_health(), 115);
}

TEST(MeleeTest, HPLoss) {
    CharacterDefense *r = new MeleeArmor();
    
    r->take_damage(15);
    EXPECT_EQ(r->get_health(), 85);
}

TEST(RangedTest, LightTest) {
    CharacterDefense *m = new RangeArmor();
    
    EXPECT_EQ(m->armor("lightArmor"), 50);
    EXPECT_EQ(m->get_health(), 150);
}

TEST(RangedTest, HeavyTest) {
    CharacterDefense *m = new RangeArmor();
    
    EXPECT_EQ(m->armor("heavyArmor"), 75);
    EXPECT_EQ(m->get_health(), 175);
}

TEST(RangedTest, HP1Test) {
    CharacterDefense *m = new RangeArmor();
    
    EXPECT_EQ(m->regen("one"), 5);
    EXPECT_EQ(m->get_health(), 105);
}

TEST(RangedTest, HP2Test) {
    CharacterDefense *m = new RangeArmor();
    
    EXPECT_EQ(m->regen("two"), 15);
    EXPECT_EQ(m->get_health(), 115);
}

TEST(RnageTest, HPLoss) {
    CharacterDefense *r = new RangeArmor();
    
    r->take_damage(15);
    EXPECT_EQ(r->get_health(), 85);
}

#endif //__DEFENSE_TEST_HPP__
