#ifndef DONTDOAS_FLAG_H
#define DONTDOAS_FLAG_H

#include "callbacks.h"

typedef struct {
    const char *full_flag;
    const char *short_flag;
    void (*callback)(CallbackContext);
} Flag;

#endif //DONTDOAS_FLAG_H
