#include "pch.h"
//#include "C:\Users\antho\Learning_CPP\Calculator\Calculator\SimpleCalculator.cpp" 
#include "../Calculator/SimpleCalculator.h"
#include "../Calculator/SimpleCalculator.cpp"
#include "../Calculator/Calculator.h"
#include "../Calculator/Calculator.cpp"

TEST(TestCase1, TestName) {

	SimpleCalculator s;
	int n = s.add(1, 3);
	EXPECT_EQ(n, 4);
	EXPECT_TRUE(true);
}

TEST(TestCase2, TestName) {

	SimpleCalculator s;
	int n = s.add(1, 3);
	EXPECT_EQ(n, 4);
	EXPECT_TRUE(true);
}

TEST(TestCase3, TestName) {

	SimpleCalculator s;
	int n = s.add(1, 3);
	EXPECT_NE(n, 5);
	EXPECT_TRUE(true);
}

TEST(TestCase4, TestName) {

	SimpleCalculator s;
	int n = s.add(1, -3);
	EXPECT_EQ(n, -2);
	EXPECT_TRUE(true);
}