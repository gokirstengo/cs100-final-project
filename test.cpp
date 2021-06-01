#include "gtest/gtest.h"
#include "attack_test.hpp"
#include "shield_test.hpp"

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
