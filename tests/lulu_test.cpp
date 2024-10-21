#include <gtest/gtest.h>

#include <cstdlib>

extern "C" {
#include <cpplearn/lulu/lulu.h>
}

TEST(TestLuluConfigParser, parse_empty_config) {
    char* config_str = (char*)"";
    auto config = (LuluConfig*)malloc(sizeof(LuluConfig));
    parse_config(config, config_str);

    const LuluConfig ref_config = {.project_name = (char*)""};

    EXPECT_STREQ(config->project_name, ref_config.project_name);
}

TEST(TestLuluConfigParser, parse_empty_project_name) {
    char* config_str = (char*)"project_name  \n";
    auto config = (LuluConfig*)malloc(sizeof(LuluConfig));
    parse_config(config, config_str);

    const LuluConfig ref_config = {.project_name = (char*)""};

    EXPECT_STREQ(config->project_name, ref_config.project_name);
}
