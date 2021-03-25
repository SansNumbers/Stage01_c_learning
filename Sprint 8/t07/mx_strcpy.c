#include "create_new_agents.h"

char* mx_strcpy(char *dst, const char *src) {
    char *beg = dst;
    while(*src != '\0') {
        *dst = *src;
        dst++;
        src++;
    }
    
    *dst = '\0';

    return beg;
}
