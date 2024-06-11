#include <gtest/gtest.h>

#include "../src/operations.hpp"

TEST(OperationsTest, Division) {
    EXPECT_EQ(division(1, 3), 0);
    EXPECT_EQ(division(1, 1), 1);
    EXPECT_FLOAT_EQ(division(1.5f, 0.5f), 3.f);
    EXPECT_FLOAT_EQ(division(-0.32, 0.623), -0.51364366);
}
