#include "pch.h"
#include "../Cal/cal.cpp"

TEST(TestCaseName, TestName) {
	Cal* cal = new Cal();
	EXPECT_TRUE(cal != nullptr);
}

TEST(TestCaseName, getMinusTest) {
	Cal* cal = new Cal();
	EXPECT_EQ(5, cal->getMinus(10, 5));
}
