#include <stdlib.h>
char *mx_strnew(const int size);
int mx_strlen(const char *s);
char *mx_strcpy(char *dst, const char *src);

char *mx_strdup(const char *str) {
    char *dst = malloc(mx_strlen(str) + 1); 
    if (dst == NULL)
        return NULL;
    mx_strcpy(dst, str);
    return dst;
}
