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
    Character *l = c->create("lich");
    Character *d = c->create("druid");

    EXPECT_EQ(l->get_attackClass(), "Magic");
    EXPECT_EQ(d->get_attackClass(), "Magic");
    EXPECT_EQ(l->get_characterType(), "Lich");
    EXPECT_EQ(d->get_characterType(), "Druid");
}

TEST(MagicCharTest, ShortTest) {
    Lich *l = new Lich();
    Druid *d = new Druid();

    EXPECT_EQ(l->attack(5), 45);
    EXPECT_EQ(l->attackUsed(), "Short Magic Attack");
    EXPECT_EQ(d->attack(5), 45);
    EXPECT_EQ(d->attackUsed(), "Short Magic Attack");
}

TEST(MagicCharTest, MediumTest) {
    Lich *l = new Lich();
    Druid *d = new Druid();

    EXPECT_EQ(l->attack(15), 30);
    EXPECT_EQ(l->attackUsed(), "Medium Magic Attack");
    EXPECT_EQ(d->attack(15), 30);
    EXPECT_EQ(d->attackUsed(), "Medium Magic Attack");
}

TEST(MagicCharTest, LongTest) {
    Lich *l = new Lich();
    Druid *d = new Druid();

    EXPECT_EQ(l->attack(35), 15);
    EXPECT_EQ(l->attackUsed(), "Long Magic Attack");
    EXPECT_EQ(d->attack(35), 15);
    EXPECT_EQ(d->attackUsed(), "Long Magic Attack");
}

TEST(MagicCharTest, NoneTest) {
    Lich *l = new Lich();
    Druid *d = new Druid();

    EXPECT_EQ(l->attack(51), 0);
    EXPECT_EQ(l->attackUsed(), "Not in range");
    EXPECT_EQ(d->attack(51), 0);
    EXPECT_EQ(d->attackUsed(), "Not in range");
}

TEST(MagicCharTest, HP1Test) {
    Lich *l = new Lich();
    Druid *d = new Druid();

    EXPECT_EQ(l->regen_health("one"), 5);
    EXPECT_EQ(l->get_health(), 130);
    EXPECT_EQ(d->regen_health("one"), 5);
    EXPECT_EQ(d->get_health(), 155);
}

TEST(MagicCharTest, HP2Test) {
    Lich *l = new Lich();
    Druid *d = new Druid();

    EXPECT_EQ(l->regen_health("two"), 15);
    EXPECT_EQ(l->get_health(), 140);
    EXPECT_EQ(d->regen_health("two"), 15);
    EXPECT_EQ(d->get_health(), 165);
}

TEST(MagicCharTest, HPLossTest) {
    Lich *l = new Lich();
    Druid *d = new Druid();

    l->take_damage(125);
    EXPECT_EQ(l->get_health(), 0);
    d->take_damage(150);
    EXPECT_EQ(d->get_health(), 0);
}

#endif
