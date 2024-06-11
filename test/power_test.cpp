#include <gtest/gtest.h>

#include "../src/operations.hpp"

TEST(OperationsTest, Power) {
    EXPECT_FLOAT_EQ(power(1, 3), 1);
    EXPECT_FLOAT_EQ(power(1, -1), 1);
    EXPECT_FLOAT_EQ(power(2, 3), 8);
    EXPECT_FLOAT_EQ(power(2, -3), 0.125);
}
