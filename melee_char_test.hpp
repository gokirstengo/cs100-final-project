#ifndef __MELEE_CHAR_TEST_HPP__
#define __MELEE_CHAR_TEST_HPP__

#include "gtest/gtest.h"
#include "character_factory.hpp"
#include "melee_factory.hpp"
#include "orc.hpp"
#include "barbarian.hpp"

using namespace std;

TEST(MeleeCharTest, CreateTest) {
    CharacterFactory * c = new MeleeFactory();
    Character *o = c->create("orc");
    Character *b = c->create("barbarian");
    
    EXPECT_EQ(o->get_attackClass(), "Melee");
    EXPECT_EQ(b->get_attackClass(), "Melee");
    EXPECT_EQ(o->get_characterType(), "Orc");
    EXPECT_EQ(b->get_characterType(), "Barbarian");
}

TEST(MeleeCharTest, LightTest) {
    Orc *o = new Orc();
    Barbarian *b = new Barbarian();
    
    EXPECT_EQ(o->attack(6), 45);
    EXPECT_EQ(o->attackUsed(), "Light Attack");
    EXPECT_EQ(b->attack(6), 45);
    EXPECT_EQ(b->attackUsed(), "Light Attack");
}

TEST(MeleeCharTest, HeavyTest) {
    Orc *o = new Orc();
    Barbarian *b = new Barbarian();
    
    EXPECT_EQ(o->attack(1), 68);
    EXPECT_EQ(o->attackUsed(), "Heavy Attack");
    EXPECT_EQ(b->attack(1), 68);
    EXPECT_EQ(b->attackUsed(), "Heavy Attack");
}

TEST(MeleeCharTest, NoneTest) {
    Orc *o = new Orc();
    Barbarian *b = new Barbarian();
    
    EXPECT_EQ(o->attack(11), 0);
    EXPECT_EQ(o->attackUsed(), "Not in range");
    EXPECT_EQ(b->attack(11), 0);
    EXPECT_EQ(b->attackUsed(), "Not in range");
}

TEST(MeleeCharTest, HP1Test) {
    Orc *o = new Orc();
    Barbarian *b = new Barbarian();
    
    EXPECT_EQ(o->regen_health("one"), 5);
    EXPECT_EQ(o->get_health(), 205);
    EXPECT_EQ(b->regen_health("one"), 5);
    EXPECT_EQ(b->get_health(), 180);
}

TEST(MeleeCharTest, HP2Test) {
    Orc *o = new Orc();
    Barbarian *b = new Barbarian();
    
    EXPECT_EQ(o->regen_health("two"), 15);
    EXPECT_EQ(o->get_health(), 215);
    EXPECT_EQ(b->regen_health("two"), 15);
    EXPECT_EQ(b->get_health(), 190);
}

TEST(MeleeCharTest, HPLossTest) {
    Orc *o = new Orc();
    Barbarian *b = new Barbarian();
    
    o->take_damage(215);
    EXPECT_EQ(o->get_health(), 0);
    b->take_damage(200);
    EXPECT_EQ(b->get_health(), 0);
}

#endif //__MELEE_CHAR_TEST_HPP__

