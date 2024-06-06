#include <gtest/gtest.h>

#include "../src/operations.hpp"

TEST(OperationsTest, Sum) {
    EXPECT_EQ(sum(1, 3), 4);
    EXPECT_FLOAT_EQ(sum(1.2f, -1.2f), 0);
    EXPECT_FLOAT_EQ(sum(1e9, 3e9), 4e9);
}

TEST(OperationsTest, Subtraction) {
    EXPECT_EQ(subtraction(3, 1), 2);
    EXPECT_FLOAT_EQ(subtraction(1.2f, -1.2f), 2.4f);
    EXPECT_FLOAT_EQ(subtraction(1e9, 3e9), -2e9);
}

TEST(OperationsTest, Multiplication) {
    EXPECT_EQ(multiplication(1, 3), 3);
    EXPECT_EQ(multiplication(1, 0), 0);
    EXPECT_FLOAT_EQ(multiplication(1.4f, 0.5f), 0.7f);
    EXPECT_FLOAT_EQ(multiplication(0.13f, 0.001f), 0.00013f);
}

TEST(OperationsTest, Division) {
    EXPECT_EQ(division(1, 3), 0);
    EXPECT_EQ(division(1, 1), 1);
    EXPECT_FLOAT_EQ(division(1.5f, 0.5f), 3.f);
    EXPECT_FLOAT_EQ(division(-0.32, 0.623), -0.51364366);
}
