#include <stdio.h>
#include <string.h>
//this comment does nothing
//redundant backup comment if the first comment does something
int main(int argc, char *argv[]) {
    if (argc > 1) {
        if (strcmp(argv[1], "--help") == 0) {
            printf("Didn't provide help.\n");
        } else if (strcmp(argv[1], "--sandbox") == 0) {
            printf("Didn't sandboxed doas.\n");
        } else if (strcmp(argv[1], "-Syu") == 0) {
            printf("Your package manager has not been synced, refreshed, or updated.\n");
        } else if (strcmp(argv[1], "-u") == 0) {
            if (argc > 2) {
                printf("Didn't doas %s.\n", argv[2]);
            } else {
                printf("Didn't doas (user).\n");
            }
        } else {
            printf("Didn't doas.\n");
        }
    } else {
        printf("Didn't doas.\n");
    }

    return 0;
}
