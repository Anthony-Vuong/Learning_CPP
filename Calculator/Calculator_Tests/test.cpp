
#include "pch.h"
#include "C:\Users\antho\Learning_CPP\Calculator\Calculator\SimpleCalculator.cpp" 
#include "../Calculator/SimpleCalculator.h"
#include "../Calculator/SimpleCalculator.cpp"
#include "../Calculator/Calculator.h"
#include "../Calculator/Calculator.cpp"


/*
#include "gtest/gtest.h"
#include "SimpleCalculator.h"
#include "SimpleCalculator.cpp"
#include "Calculator.h"
#include "Calculator.cpp"
*/


/* Test fixture for simple calculator 
 *
 * Please see http://google.github.io/googletest/primer.html for more details
 * 
*/

namespace my 
{
    namespace project 
    {
        namespace 
        {
            class Calculator_Arithmetic_Tests : public testing::Test
            {
                protected:

                    // Constructor - setup happens in here
                    Calculator_Arithmetic_Tests()
                    {
                    }
                        
                    // Destructor - teardown happens here
                    ~Calculator_Arithmetic_Tests()
                    {

                    }
                            
                    // SetUp can be overriden - this method will be called after constructor, before each test
                    void SetUp()
                    {
                        s = new SimpleCalculator();
                    }
                                
                    // TearDown can be overriden - this method is called after destructor, after each test
                    void TearDown()
                    {
                        delete s;        
                    }  

                public:
                    SimpleCalculator *s;
            };

            /* Start of Simple Calculator Addition Tests */
            TEST_F(Calculator_Arithmetic_Tests, Add_Positive_Nums_1) 
            {
	            int n = s->add(1, 3);
	            EXPECT_EQ(n, 4);
	            EXPECT_TRUE(true);
            }


            TEST_F(Calculator_Arithmetic_Tests, Add_Positive_Nums_2) 
            {
	            int n = s->add(3, 1);
	            EXPECT_EQ(n, 4);
	            EXPECT_TRUE(true);
            }

            TEST_F(Calculator_Arithmetic_Tests, Add_Positive_Nums_Inequality_Test) 
            {
	            int n = s->add(1, 3);
	            EXPECT_NE(n, 5);
	            EXPECT_TRUE(true);
            }

            TEST_F(Calculator_Arithmetic_Tests, Add_Negative_Nums_1) 
            {
	            int n = s->add(-1, -3);
	            EXPECT_EQ(n, -4);
	            EXPECT_TRUE(true);
            }
            
            TEST_F(Calculator_Arithmetic_Tests, Add_Negative_Nums_2) 
            {
	            int n = s->add(-3, -1);
	            EXPECT_EQ(n, -4);
	            EXPECT_TRUE(true);
            }
            
            TEST_F(Calculator_Arithmetic_Tests, Add_NegativeNums_Inequality_Test) 
            {
	            int n = s->add(-1, -3);
	            EXPECT_NE(n, 5);
	            EXPECT_TRUE(true);
            }
            
            TEST_F(Calculator_Arithmetic_Tests, Add_Negative_Num_1) 
            {
	            int n = s->add(3, -1);
	            EXPECT_EQ(n, 2);
	            EXPECT_TRUE(true);
            }
            
            TEST_F(Calculator_Arithmetic_Tests, Add_Negative_Num_2) 
            {
	            int n = s->add(-3, 1);
	            EXPECT_EQ(n, -2);
	            EXPECT_TRUE(true);
            }
            /* End of Simple Calculator Addition Tests */
            

            /* Start of Simple Calculator Subtraction Tests */
            TEST_F(Calculator_Arithmetic_Tests, Subtract_Positive_Nums_1) 
            {
            	int n = s->subtract(1, 3);
	            EXPECT_EQ(n, 2);
	            EXPECT_TRUE(true);
            }

            TEST_F(Calculator_Arithmetic_Tests, Subtract_Positive_Nums_2) 
            {
	            int n = s->subtract(3, 1);
	            EXPECT_EQ(n, -2);
	            EXPECT_TRUE(true);
            }

            TEST_F(Calculator_Arithmetic_Tests, Subtract_Positive_Nums_Inequality_Test) 
            {
	            int n = s->subtract(1, 3);
	            EXPECT_NE(n, -2);
	            EXPECT_TRUE(true);
            }

            TEST_F(Calculator_Arithmetic_Tests, Subtract_Negative_Num_1) 
            {
	            int n = s->subtract(1, -3);
	            EXPECT_EQ(n, -4);
	            EXPECT_TRUE(true);
            }
            
            TEST_F(Calculator_Arithmetic_Tests, Subtract_Negative_Num_2) 
            {
	            int n = s->subtract(-1, 3);
	            EXPECT_EQ(n, 4);
	            EXPECT_TRUE(true);
            }
            
            TEST_F(Calculator_Arithmetic_Tests, Subtract_Negative_Nums_1) 
            {
	            int n = s->subtract(-1, -3);
	            EXPECT_EQ(n, -2);
	            EXPECT_TRUE(true);
            }
            
            TEST_F(Calculator_Arithmetic_Tests, Subtract_Negative_Nums_Inequality_Test) 
            {
	            int n = s->subtract(-1, -3);
	            EXPECT_NE(n, -5);
	            EXPECT_TRUE(true);
            }
            /* End of Simple Calculator Subtraction Tests */

            
            /* Start of Simple Calculator Multiplication Tests */
            TEST_F(Calculator_Arithmetic_Tests, Multipy_By_Zero) 
            {
                int n = s->multiply(3, 0);
	            EXPECT_EQ(n, 0);
	            EXPECT_TRUE(true);
            }

            TEST_F(Calculator_Arithmetic_Tests, Multiply_Positive_Nums_1) 
            {
	            int n = s->multiply(3, 2);
	            EXPECT_EQ(n, 6);
	            EXPECT_TRUE(true);
            }

            TEST_F(Calculator_Arithmetic_Tests, Multiply_Negative_Num_1) 
            {
	            int n = s->multiply(-1, 3);
	            EXPECT_NE(n, 3);
	            EXPECT_TRUE(true);
            }

            TEST_F(Calculator_Arithmetic_Tests, Multiply_Negative_Num_2) 
            {
	            int n = s->multiply(1, -3);
	            EXPECT_EQ(n, -3);
	            EXPECT_TRUE(true);
            }
            /* End of Simple Calculator Multiplication Tests */
             
            /* Start of Simple Calculator Division Tests */
            TEST_F(Calculator_Arithmetic_Tests, Divide_Positive_Nums_1) 
            {
	            int n = s->divide(9, 3);
	            EXPECT_EQ(n, 3);
	            EXPECT_TRUE(true);
            }

            TEST_F(Calculator_Arithmetic_Tests, Divide_Negative_Num_1) 
            {
	            int n = s->divide(-9, 3);
	            EXPECT_EQ(n, -3);
	            EXPECT_TRUE(true);
            }

            TEST_F(Calculator_Arithmetic_Tests, Divide_Negative_Nums_1)  
            {
	            int n = s->divide(-1, -3);
	            EXPECT_NE(n, -3);
	            EXPECT_TRUE(true);
            }

            TEST_F(Calculator_Arithmetic_Tests, Divide_Negative_Num_2) 
            {
	            int n = s->divide(9, -3);
	            EXPECT_EQ(n, -3);
	            EXPECT_TRUE(true);
            }
            /* End of Simple Calculator Division Tests */
        }
    }
}

// Running test will use this main method
int main(int argc, char **argv){

    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
