#include <gtest/gtest.h>

#include <cstdlib>

extern "C" {
#include <cpplearn/lulu/lulu.h>
}

TEST(TestLuluConfigParser, parse_empty_config) {
    const char* config_str = "";
    LuluConfig* config = (LuluConfig*)malloc(sizeof(LuluConfig));
    parse_config(config, config_str);

    const LuluConfig ref_config = {.project_name = (char*)""};

    EXPECT_STREQ(config->project_name, ref_config.project_name);
}
