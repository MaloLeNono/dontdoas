#include <stdio.h>
#include <string.h>
#include "callbacks.h"
#include "flag.h"

// comment that does nothing
// redundant comment incase the first does something
// super redundant comment incase the first two do something

int main(int argc, char *argv[]) {
    const Flag flags[] = {
        {"--help",      help},
        {"--sandbox",   sandbox},
        {"--veromikka", veromikka},
        {"--user",      user},
    };

    const int flags_len = sizeof(flags) / sizeof(flags[0]);
    if (argc > 1) {
        for (int i = 0; i < flags_len; ++i) {
            if (strcmp(argv[1], flags[i].flag) == 0) {
                const CallbackContext ctx = {argc, argv};
                flags[i].callback(ctx);
                return 0;
            }
        }
    }

    printf("Didn't doas.\n");

    return 0;
}