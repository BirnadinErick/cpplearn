#pragma once

typedef struct {
    char* project_name;
} LuluConfig;

void parse_config(LuluConfig* config, const char* config_str);
