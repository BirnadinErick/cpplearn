#include <gtest/gtest.h>

#include <cstdlib>

extern "C" {
#include <cpplearn/reversestr/reversestr.h>
}

TEST(TestReverseString, EmptyStr) {
    const char* src = "";
    char* dst = (char*)malloc(2);
    reversestr(src, dst, 0);

    EXPECT_STREQ(dst, "");
}

TEST(TestReverseString, OneCharacter) {
    const char* src = "1";
    char* dst = (char*)malloc(2);
    reversestr(src, dst, 1);

    EXPECT_STREQ(dst, "1");
}

TEST(TestReverseString, TwoCharacter) {
    const char* src = "12";
    char* dst = (char*)malloc(3);
    reversestr(src, dst, 2);

    EXPECT_STREQ(dst, "21");
}

TEST(TestReverseString, WordExample) {
    const char* src = "Hey";
    char* dst = (char*)malloc(9);
    reversestr(src, dst, 3);

    EXPECT_STREQ(dst, "yeH");
}

TEST(TestReverseString, SentenceExample) {
    const char* src = "Hey There";
    char* dst = (char*)malloc(20);
    reversestr(src, dst, 9);

    EXPECT_STREQ(dst, "erehT yeH");
}
