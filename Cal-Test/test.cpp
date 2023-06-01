#include "pch.h"
#include "../Cal/cal.cpp"

TEST(TestCaseName, TestName) {
	Cal* cal = new Cal();
	EXPECT_TRUE(cal != nullptr);

	EXPECT_EQ(3, cal->getdevide(9, 3));
}