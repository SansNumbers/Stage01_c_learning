#include <stdio.h>
#include <stdlib.h>

void mx_printchar(char c);

void mx_printstr(const char *s);

char *mx_strchr(const char *s, int c);

int mx_strlen(const char *s);

int  main(int argc, char *argv[]) {
    if (argc >= 0){
        char *str=(char*)malloc(mx_strlen(argv[0]));
        str = argv[0];
        int i = mx_strlen(argv[0]);
        while (str[i] != 47)
            i--;
        for (i += 1; i < mx_strlen(argv[0]); i++)
            mx_printchar(str[i]);
        mx_printchar('\n');
    }
    return 0;
}
