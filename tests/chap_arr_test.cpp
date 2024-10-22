#include <cpplearn/chap_arr/chap_arr.h>
#include <gtest/gtest.h>

#include <array>

TEST(TESTMULTBL, multiple_0) {
    std::array<int, 10> rv = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    std::array<int, 10> ref = {0};

    cpplearn::ex::multiply_arr(&rv, 0);

    for (size_t i = 0; i < ref.size(); i++) {
        ASSERT_EQ(rv[i], ref[i]) << "rv[" << i << "] is not ref[" << i << "]";
    }
}

TEST(TESTMULTBL, multiple_2) {
    std::array<int, 10> rv = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    std::array<int, 10> ref = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};

    cpplearn::ex::multiply_arr(&rv, 2);

    for (size_t i = 0; i < ref.size(); i++) {
        ASSERT_EQ(rv[i], ref[i]) << "rv[" << i << "] is not ref[" << i << "]";
    }
}
