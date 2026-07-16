#include "callbacks.h"
#include <stdio.h>

void help(const CallbackContext ctx) {
    printf("Didn't provide help.\n");
}

void sandbox(const CallbackContext ctx) {
    printf("Didn't sandboxed doas.\n");
}

void veromikka(const CallbackContext ctx) {
    printf("sowwy, couldn't dwoas :c\n");
}

void version(const CallbackContext ctx) {
    printf("Didn't provide version information.");
}

void user(const CallbackContext ctx) {
    if (ctx.argc > 2) {
        printf("Didn't doas %s.\n", ctx.argv[2]);
    }
    else {
        printf("Didn't doas (user).\n");
    }
}