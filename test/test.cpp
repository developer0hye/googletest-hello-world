#include "mylib.h"
#include <gtest/gtest.h>

TEST(MyLibAddTests, TestIntegerOne_One)
{
    const auto expected = 2;
    const auto actual = add(1, 1);
    ASSERT_EQ(expected, actual);
}

TEST(MyLibAddTests, TestIntegerZero_Zero)
{
    const auto expected = 0;
    const auto actual = add(0, 0);
    ASSERT_EQ(expected, actual);
}

int main(int argc, char** argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}