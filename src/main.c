#include <stdio.h>
#include <string.h>
#include "callbacks.h"
#include "flag.h"

// comment that does nothing
// redundant comment incase the first does something
// super redundant comment incase the first two do something

int check_flag(const char *arg, const Flag flag) {
    if (strcmp(arg, flag.full_flag) == 0 || strcmp(arg, flag.short_flag) == 0)
        return 1;

    return 0;
}

int main(int argc, char *argv[]) {
    const Flag flags[] = {
        {"--help",      "-h", help},
        {"--sandbox",   "-s", sandbox},
        {"--veromikka", "-v", veromikka},
        {"--user",      "-u", user},
        {"--version", "-V", version}
    };

    const size_t flags_len = sizeof(flags) / sizeof(flags[0]);
    if (argc > 1) {
        for (int i = 0; i < flags_len; ++i) {
            if (check_flag(argv[1], flags[i])) {
                const CallbackContext ctx = {argc, argv};
                flags[i].callback(ctx);
                return 0;
            }
        }
    }

    printf("Didn't doas.\n");

    return 0;
}