﻿/* Copyright 2017 mozkzki */
#include "target_other_project/myadd.h"
#include "gtest/gtest.h"

#pragma comment(lib, "target_other_project.lib")

#ifdef _DEBUG
#pragma comment(lib, "gtestd.lib")
#pragma comment(lib, "gtest_maind.lib")
#else
#pragma comment(lib, "gtest.lib")
#pragma comment(lib, "gtest_main.lib")
#endif

namespace sample {

TEST(AddTest, PositiveNumber) {
    EXPECT_EQ(3, myadd(1, 2));
    EXPECT_EQ(13, myadd(10, 3));
    EXPECT_EQ(20, myadd(9, 11));
}

TEST(AddTest, NegativeNumber) {
    EXPECT_EQ(-3, myadd(-1, -2));
    EXPECT_EQ(-13, myadd(-10, -3));
    EXPECT_EQ(-20, myadd(-9, -11));
}

TEST(AddTest, ZeroNumber) {
    ASSERT_EQ(0, myadd(0, 0));
    EXPECT_EQ(3, myadd(1, 2));
    EXPECT_EQ(2, myadd(0, 2));
    EXPECT_EQ(-1, myadd(-1, 0));
    EXPECT_EQ(-2, myadd(-0, -2));
}

TEST(AddTest, PositiveAndNegativeNumber) {
    EXPECT_EQ(0, myadd(1, -1));
    EXPECT_EQ(1, myadd(-2, 3));
    EXPECT_EQ(2, myadd(-3, 5));
}

}  // namespace sample
