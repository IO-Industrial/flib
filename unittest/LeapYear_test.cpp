/**
 * \file LeapYear_tst.cpp
 *
 * Copyright (c) 2020 Joe Turner.  All rights reserved.
 * Unauthorized copying prohibited.
 */
#include "time/LeapYear.hpp"
#include <gtest/gtest.h>

using namespace ioi::time;

TEST(LeapYear_tests, test_is_leap_year)
{
    // 2020 is a leap year.
    ASSERT_EQ(true, isLeapYear(2020));
}

TEST(LeapYear_tests, test_is_not_leap_year)
{
    // 2020 is a leap year.
    ASSERT_EQ(false, isLeapYear(2021));
}

