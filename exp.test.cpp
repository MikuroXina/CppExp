#include "exp.cpp"

#include <gtest/gtest.h>

TEST(AddTest, Test1) { ASSERT_EQ(2, add(1, 1)); }

TEST(AddTest, Test2) { ASSERT_EQ(0, add(-1, 1)); }
