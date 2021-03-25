#include "../inc/minilibmx.h"

char *mx_strtrim(const char *str) {
    int len = 0;
    char *string = NULL;
    while (mx_isspace(*str)) 
        str++;
    len = mx_strlen(str);
    while(mx_isspace(str[len - 1]))
        len--;
    string = mx_strnew(len);
    mx_strncpy(string, str, len);
    return (char *)string;
}
