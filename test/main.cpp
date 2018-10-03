/**
 * @file    main.cpp
 * @author  saimouli
 * @copyright GNU public license
 *
 * @brief main.cpp to test the gtest
 *
 */
#include <gtest/gtest.h>

int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
