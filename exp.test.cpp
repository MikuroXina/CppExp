#include "exp.cpp"

#include <gtest/gtest.h>

TEST(AddTest, Test1) { ASSERT_EQ(distance(20, 30), 10); }

TEST(AddTest, Test2) { ASSERT_EQ(distance(50, 25), 25); }

TEST(AddTest, Test3) { ASSERT_EQ(distance(25, 25), 0); }
