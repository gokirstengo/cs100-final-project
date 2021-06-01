#ifndef __MAGIC_CHAR_TEST_HPP__
#define __MAGIC_CHAR_TEST_HPP__

#include "gtest/gtest.h"
#include "character_factory.hpp"
#include "magic_factory.hpp"
#include "lich.hpp"
#include "druid.hpp"

using namespace std;

TEST(MagicCharTest, CreateTest) {
    CharacterFactory * c = new MagicFactory();
    Character *e = c->create("lich");
    Character *h = c->create("druid");

    EXPECT_EQ(e->get_attackClass(), "Magic");
    EXPECT_EQ(h->get_attackClass(), "Magic");
    EXPECT_EQ(e->get_characterType(), "Lich");
    EXPECT_EQ(h->get_characterType(), "Druid");
}

TEST(MagicCharTest, ShortTest) {
    Lich *l = new Lich();
    Druid *d = new Druid();

    EXPECT_EQ(e->attack(5), 45);
    EXPECT_EQ(e->attackUsed(), "Short Ranged Attack");
    EXPECT_EQ(h->attack(5), 45);
    EXPECT_EQ(h->attackUsed(), "Short Ranged Attack");
}

TEST(MagicCharTest, MediumTest) {
    Lich *l = new Lich();
    Druid *d = new Druid();

    EXPECT_EQ(e->attack(15), 30);
    EXPECT_EQ(e->attackUsed(), "Medium Ranged Attack");
    EXPECT_EQ(h->attack(15), 30);
    EXPECT_EQ(h->attackUsed(), "Medium Ranged Attack");
}

TEST(MagicCharTest, LongTest) {
    Lich *l = new Lich();
    Druid *d = new Druid();

    EXPECT_EQ(e->attack(35), 15);
    EXPECT_EQ(e->attackUsed(), "Long Ranged Attack");
    EXPECT_EQ(h->attack(35), 15);
    EXPECT_EQ(h->attackUsed(), "Long Ranged Attack");
}

TEST(MagicCharTest, NoneTest) {
    Lich *l = new Lich();
    Druid *d = new Druid();

    EXPECT_EQ(e->attack(51), 0);
    EXPECT_EQ(e->attackUsed(), "Not in range");
    EXPECT_EQ(h->attack(51), 0);
    EXPECT_EQ(h->attackUsed(), "Not in range");
}

TEST(MagicCharTest, HP1Test) {
    Lich *l = new Lich();
    Druid *d = new Druid();

    EXPECT_EQ(e->regen_health("one"), 5);
    EXPECT_EQ(e->get_health(), 155);
    EXPECT_EQ(h->regen_health("one"), 5);
    EXPECT_EQ(h->get_health(), 180);
}

TEST(MagicCharTest, HP2Test) {
    Lich *l = new Lich();
    Druid *d = new Druid();

    EXPECT_EQ(e->regen_health("two"), 15);
    EXPECT_EQ(e->get_health(), 165);
    EXPECT_EQ(h->regen_health("two"), 15);
    EXPECT_EQ(h->get_health(), 190);
}

TEST(MagicCharTest, HPLossTest) {
    Lich *l = new Lich();
    Druid *d = new Druid();

    e->take_damage(180);
    EXPECT_EQ(e->get_health(), 0);
    h->take_damage(200);
    EXPECT_EQ(h->get_health(), 0);
}

#endif
