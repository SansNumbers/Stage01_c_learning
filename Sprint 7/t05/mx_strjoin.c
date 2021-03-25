#include <stdlib.h>
char *mx_strnew(const int size);
int mx_strlen(const char *s);
char *mx_strcat(char *s1, const char *s2);
char *mx_strcpy(char *dst, const char *src);
char *mx_strdup(const char *str);

char *mx_strjoin(char const *s1, char const *s2) {
char* result = malloc(mx_strlen(s1) + mx_strlen(s2) + 1);
    if (result) {
        mx_strcpy(result, s1);
        mx_strcat(result, s2);
    }
return result;
}
