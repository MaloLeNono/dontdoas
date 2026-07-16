#ifndef DONTDOAS_CALLBACKS_H
#define DONTDOAS_CALLBACKS_H

typedef struct {
    int argc;
    char **argv;
} CallbackContext;

void help(CallbackContext ctx);
void sandbox(CallbackContext ctx);
void veromikka(CallbackContext ctx);
void user(CallbackContext ctx);

#endif //DONTDOAS_CALLBACKS_H