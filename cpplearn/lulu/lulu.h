#pragma once

typedef struct {
    char* project_name;
} LuluConfig;

inline void init_config_struct(LuluConfig *config) {
    config->project_name = (char*)"";
}

void parse_config(LuluConfig* config, char* config_str);

