
#ifndef __SHIELD_TEST_HPP__
#define __SHIELD_TEST_HPP__

#include "gtest/gtest.h"

#include "character_defense.hpp"
#include "magic_shield.hpp"
#include "melee_shield.hpp"

TEST(MeleeShieldTest, WoodTest) {
    CharacterDefense *r = new MeleeShield();
    
    EXPECT_EQ(r->armor("woodShield"), 25);
    EXPECT_EQ(r->get_health(), 125);
}

TEST(MeleeShieldTest, MetalTest) {
    CharacterDefense *r = new MeleeShield();
    
    EXPECT_EQ(r->armor("metalShield"), 75);
    EXPECT_EQ(r->get_health(), 175);
}

TEST(MeleeShieldTest, HP1Test) {
    CharacterDefense *r = new MeleeShield();
    
    EXPECT_EQ(r->regen("one"), 5);
    EXPECT_EQ(r->get_health(), 105);
}

TEST(MeleeShieldTest, HP2Test) {
    CharacterDefense *r = new MeleeShield();
    
    EXPECT_EQ(r->regen("two"), 15);
    EXPECT_EQ(r->get_health(), 115);
}

TEST(MeleeShieldTest, HPLoss) {
    CharacterDefense *r = new MeleeShield();
    
    r->take_damage(15);
    EXPECT_EQ(r->get_health(), 85);
}

TEST(MagicTest, WoodTest) {
    CharacterDefense *m = new MagicShield();
    
    EXPECT_EQ(m->armor("woodShield"), 25);
    EXPECT_EQ(m->get_health(), 125);
}

TEST(MagicTest, MetalTest) {
    CharacterDefense *m = new MagicShield();
    
    EXPECT_EQ(m->armor("metalShield"), 50);
    EXPECT_EQ(m->get_health(), 150);
}

TEST(MagicTest, HP1Test) {
    CharacterDefense *m = new MagicShield();
    
    EXPECT_EQ(m->regen("one"), 5);
    EXPECT_EQ(m->get_health(), 105);
}

TEST(MagicTest, HP2Test) {
    CharacterDefense *m = new MagicShield();
    
    EXPECT_EQ(m->regen("two"), 15);
    EXPECT_EQ(m->get_health(), 115);
}

TEST(MagicTest, HPLoss) {
    CharacterDefense *r = new MagicShield();
    
    r->take_damage(15);
    EXPECT_EQ(r->get_health(), 85);
}

#endif
