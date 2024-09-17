#include <gtest/gtest.h>

#include "../include/add.h"

TEST(Add, Simple) {
    EXPECT_EQ(add(2, 2), 4);
    EXPECT_EQ(add(2, 3), add(3, 2));
    EXPECT_EQ(add(-42, 3), -39);
    EXPECT_NEAR(add(0.1,0.1),0.2,0.0000001);
}