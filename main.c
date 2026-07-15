#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    if (argc > 1) {
        if (strcmp(argv[1], "--help") == 0) {
            printf("Didn't provide help\n");
        } else if (strcmp(argv[1], "--sandbox") == 0) {
            printf("Didn't sandboxed doas.\n");
        } else {
            printf("Didn't doas.\n");
        }
    } else {
        printf("Didn't doas.\n");
    }

    return 0;
}
}
