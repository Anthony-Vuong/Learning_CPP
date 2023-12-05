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

TEST(TestCase5, TestSubtract) {

	SimpleCalculator s;
	int n = s.subtract(1, 3);
	EXPECT_EQ(n, 2);
	EXPECT_TRUE(true);
}

TEST(TestCase6, TestName) {

	SimpleCalculator s;
	int n = s.subtract(3, 1);
	EXPECT_EQ(n, -2);
	EXPECT_TRUE(true);
}

TEST(TestCase7, TestName) {

	SimpleCalculator s;
	int n = s.subtract(1, 3);
	EXPECT_NE(n, -2);
	EXPECT_TRUE(true);
}

TEST(TestCase8, TestName) {

	SimpleCalculator s;
	int n = s.subtract(1, -3);
	EXPECT_EQ(n, -4);
	EXPECT_TRUE(true);
}

TEST(TestCase9, TestMultiply) {

	SimpleCalculator s;
	int n = s.multiply(3, 0);
	EXPECT_EQ(n, 0);
	EXPECT_TRUE(true);
}

TEST(TestCase10, TestName) {

	SimpleCalculator s;
	int n = s.multiply(3, 2);
	EXPECT_EQ(n, 6);
	EXPECT_TRUE(true);
}

TEST(TestCase11, TestName) {

	SimpleCalculator s;
	int n = s.multiply(-1, 3);
	EXPECT_NE(n, 3);
	EXPECT_TRUE(true);
}

TEST(TestCase12, TestName) {

	SimpleCalculator s;
	int n = s.multiply(1, -3);
	EXPECT_EQ(n, -3);
	EXPECT_TRUE(true);
}

TEST(TestCase13, TestDivide) {

	SimpleCalculator s;
	int n = s.divide(9, 3);
	EXPECT_EQ(n, 3);
	EXPECT_TRUE(true);
}

TEST(TestCase14, TestName) {

	SimpleCalculator s;
	int n = s.divide(-9, 3);
	EXPECT_EQ(n, -3);
	EXPECT_TRUE(true);
}

TEST(TestCase15, TestName) {

	SimpleCalculator s;
	int n = s.divide(-1, -3);
	EXPECT_NE(n, -3);
	EXPECT_TRUE(true);
}

TEST(TestCase16, TestName) {

	SimpleCalculator s;
	int n = s.divide(9, -3);
	EXPECT_EQ(n, -3);
	EXPECT_TRUE(true);
}