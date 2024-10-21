#include <cpplearn/lulu/lulu.h>
#include <stdio.h>
#include <string.h>

void init_config_struct(LuluConfig *config);

void parse_config(LuluConfig *config, char *config_str) {
    char *token_ctx = NULL, *token, *key = NULL, *value = NULL;

    init_config_struct(config);

    token = strtok_r(config_str, (char *)"\n", &token_ctx);
    while (token != NULL) {
        sscanf(token, "%s %s", key, value);

        if (strcmp(key, "project_name") == 0 && value != NULL) {
            config->project_name = value;
        } else {
            fprintf(stderr, "unknown config line detected");
        }
    }
}
