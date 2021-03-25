#include "../inc/minilibmx.h"

int mx_atoi(const char *str) {
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
            return 0;
        if (mx_isdigit(str[i]))
            result = result * 10 +str[i] - 48;
        else return 0;
    }
    return result * sign;
}
