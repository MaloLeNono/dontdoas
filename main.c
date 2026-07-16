#include <stdio.h>
#include <string.h>
//comment that does nothing
//redindant comment incase the first does something
//super redundand comment incase the first two do something
typedef struct {
    const char *flag;
    const char *message;
} Flag;

int main(int argc, char *argv[]) {
    const Flag flags[] = {
        {"--help", "Didn't provide help."},
        {"--sandbox", "Didn't sandboxed doas."},
        {"--veromikka", "sowwy, couldn't dwoas :c"},
        {"-u", "Didn't doas %s."},
    };

    const int flags_len = sizeof(flags) / sizeof(flags[0]);

    if (argc > 1) {
        for (int i = 0; i < flags_len; ++i) {
            if (strcmp(argv[1], flags[i].flag) == 0) {
                if (strcmp(argv[1], "-u") == 0) {
                    if (argc > 2) {
                        printf(flags[i].message, argv[2]);
                    } else {
                        printf("Didn't doas (user).\n");
                    }
                } else {
                    printf("%s\n", flags[i].message);
                }
                return 0;
            }
        }
    }

    printf("Didn't doas.\n");

    return 0;
}
