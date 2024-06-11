#include <gtest/gtest.h>

#include "../src/operations.hpp"

TEST(OperationsTest, Sum) {
        EXPECT_EQ(sum(1, 3), 4);
    EXPECT_FLOAT_EQ(sum(1.2f, -1.2f), 0);
    EXPECT_FLOAT_EQ(sum(1e9, 3e9), 4e9);
}
