#ifndef DONTDOAS_FLAG_H
#define DONTDOAS_FLAG_H

#include "callbacks.h"

typedef struct {
    const char *flag;
    void (*callback)(CallbackContext);
} Flag;

#endif //DONTDOAS_FLAG_H
