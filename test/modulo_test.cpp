#include <gtest/gtest.h>

#include "../src/operations.hpp"

TEST(OperationsTest, Modulo) {
        EXPECT_EQ(modulo(1, 3), 0);
    EXPECT_EQ(modulo(1, 1), 0);
}
