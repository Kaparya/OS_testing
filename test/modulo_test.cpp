#include <gtest/gtest.h>

#include "../src/operations.hpp"

TEST(OperationsTest, Division) {
    EXPECT_EQ(division(1, 3), 1);
    EXPECT_EQ(division(1, 1), 0);
}
