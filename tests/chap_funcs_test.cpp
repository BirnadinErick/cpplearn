#include <gtest/gtest.h>
#include <cpplearn/chap_funcs/chap_funcs.h>

TEST(TestChapFuncsSquare, square_0) {
	EXPECT_EQ(cpplearn::ex::square(0), 0) << "square of 0 is 0";
}

TEST(TestChapFuncsSquare, square_positive) {
	EXPECT_EQ(cpplearn::ex::square(2), 4) << "square of 2 is 4";
}

TEST(TestChapFuncsSquare, sqaure_negative) {
	EXPECT_EQ(cpplearn::ex::square(-2), 4) << "square of -2 is 4";
}

const double err = 1e-6;

TEST(TestChapFuncsSquare, circular_area_0) {
	EXPECT_NEAR(cpplearn::ex::cir_area(0), 0, err) << "0 radus returns 0";
}

TEST(TestChapFuncscir_area, circular_area_negative) {
	EXPECT_NEAR(cpplearn::ex::cir_area(-1), 0, err) << "negative radius returns 0";
}

TEST(TestChapFuncscir_area, circular_area_positive) {
	EXPECT_NEAR(cpplearn::ex::cir_area(1), 3.14, err) << "";
}
