#include "../inc/minilibmx.h"
bool bool_atoi (const char *str) {
    int sign = 1, i = 0, result = 0;
    if (str[0] == '-') {
        sign = -1;
        i++;
    }
    else if (str[0] == '+') {
        sign = 1;
        i++;
    }
    for ( ; str[i] != '\0'; ++i) {
        if (!mx_isdigit(str[i]))
            return false;
        if (mx_isdigit(str[i]))
            result = result * 10 +str[i] - 48;
        else return false;
    }
    return true;
}
