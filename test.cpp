#include "gtest/gtest.h"
//#include "attack_test.hpp"
//#include "melee_test.hpp"
//#include "defense_test.hpp"
//#include "melee_char_test.hpp"
#include "ranged_char_test.hpp"

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
