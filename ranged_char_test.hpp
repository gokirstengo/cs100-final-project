#ifndef __RANGED_CHAR_TEST_HPP__
#define __RANGED_CHAR_TEST_HPP__

#include "gtest/gtest.h"
#include "character_factory.hpp"
#include "ranged_factory.hpp"
#include "elfArcher.hpp"
#include "hunter.hpp"

using namespace std;

TEST(RangedCharTest, CreateTest) {
    CharacterFactory * c = new RangedFactory();
    Character *e = c->create("elf archer");
    Character *h = c->create("hunter");

    EXPECT_EQ(e->get_attackClass(), "Ranged");
    EXPECT_EQ(h->get_attackClass(), "Ranged");
    EXPECT_EQ(e->get_characterType(), "Elf Archer");
    EXPECT_EQ(h->get_characterType(), "Hunter");
}

TEST(RangedCharTest, MediumTest) {
    ElfArcher *e = new ElfArcher();
    Hunter *h = new Hunter();

    EXPECT_EQ(e->attack(12), 45);
    EXPECT_EQ(e->attackUsed(), "Medium Ranged Attack");
    EXPECT_EQ(h->attack(12), 45);
    EXPECT_EQ(h->attackUsed(), "Medium Ranged Attack");
}

TEST(RangedCharTest, LongTest) {
    ElfArcher *e = new ElfArcher();
    Hunter *h = new Hunter();

    EXPECT_EQ(e->attack(30), 25);
    EXPECT_EQ(e->attackUsed(), "Long Ranged Attack");
    EXPECT_EQ(h->attack(30), 25);
    EXPECT_EQ(h->attackUsed(), "Long Ranged Attack");
}

TEST(RangedCharTest, NoneTest) {
    ElfArcher *e = new ElfArcher();
    Hunter *h = new Hunter();

    EXPECT_EQ(e->attack(4), 0);
    EXPECT_EQ(e->attackUsed(), "Not in range");
    EXPECT_EQ(h->attack(4), 0);
    EXPECT_EQ(h->attackUsed(), "Not in range");
}

TEST(RangedCharTest, HP1Test) {
    ElfArcher *e = new ElfArcher();
    Hunter *h = new Hunter();

    EXPECT_EQ(e->regen_health("one"), 5);
    EXPECT_EQ(e->get_health(), 155);
    EXPECT_EQ(h->regen_health("one"), 5);
    EXPECT_EQ(h->get_health(), 180);
}

TEST(RangedCharTest, HP2Test) {
    ElfArcher *e = new ElfArcher();
    Hunter *h = new Hunter();

    EXPECT_EQ(e->regen_health("two"), 15);
    EXPECT_EQ(e->get_health(), 165);
    EXPECT_EQ(h->regen_health("two"), 15);
    EXPECT_EQ(h->get_health(), 190);
}

TEST(RangedCharTest, HPLossTest) {
    ElfArcher *e = new ElfArcher();
    Hunter *h = new Hunter();

    e->take_damage(180);
    EXPECT_EQ(e->get_health(), 0);
    h->take_damage(200);
    EXPECT_EQ(h->get_health(), 0);
}

#endif
