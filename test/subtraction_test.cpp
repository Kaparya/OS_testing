#include <gtest/gtest.h>

#include "../src/operations.hpp"

TEST(OperationsTest, Subtraction) {
    EXPECT_EQ(subtraction(3, 1), 2);
    EXPECT_FLOAT_EQ(subtraction(1.2f, -1.2f), 2.4f);
    EXPECT_FLOAT_EQ(subtraction(1e9, 3e9), -2e9);
}
