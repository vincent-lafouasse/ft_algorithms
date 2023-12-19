#include <gtest/gtest.h>
#include <stdlib.h>
#include <iostream>

extern "C" {
#include "ft_algorithms.h"
};


TEST(HelloTest, BasicAssertions) {
  EXPECT_STRNE("hello", "world");
  EXPECT_EQ(7 * 6, 42);
}
