#include "../inc/minilibmx.h"

bool mx_isdigit(int c) {
    char alphabet[] = "0123456789";
    char *letter = alphabet;
    while (*letter != '\0' && *letter != c)
        ++letter;
    if (*letter)
        return true;
    return false;
}



