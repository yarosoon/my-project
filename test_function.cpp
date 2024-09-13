#include <gtest/gtest.h>
#include "function.hpp"

TEST(FunctionTest, PositiveNumbers) {
    EXPECT_EQ(function(5, 3), 2);
    EXPECT_EQ(function(10, 5), 5);
    EXPECT_EQ(function(100, 50), 50);
}

TEST(FunctionTest, WithZero) {
    EXPECT_EQ(function(0, 0), 0);
    EXPECT_EQ(function(5, 0), 5);
    EXPECT_EQ(function(0, 5), -5);
}

TEST(FunctionTest, NegativeNumbers) {
    EXPECT_EQ(function(-5, -3), -2);
    EXPECT_EQ(function(-10, -5), -5);
    EXPECT_EQ(function(-5, 5), -10);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}