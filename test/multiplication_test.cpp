#include <gtest/gtest.h>

#include "../src/operations.hpp"

TEST(OperationsTest, Multiplication) {
    EXPECT_EQ(multiplication(1, 3), 3);
    EXPECT_EQ(multiplication(1, 0), 0);
    EXPECT_FLOAT_EQ(multiplication(1.4f, 0.5f), 0.7f);
    EXPECT_FLOAT_EQ(multiplication(0.13f, 0.001f), 0.00013f);
}
