#include "../inc/minilibmx.h"

char *mx_strnew(const int size) {
    char *string = NULL;
    int in = 0;
    if (size < 0)
        return NULL;
    string = (char *)malloc((size + 1));
    while (in < size) {
        string[in] = '\0';
        in++;
    }
    string[in] = '\0';
    return string;
}

