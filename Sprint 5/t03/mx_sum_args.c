#include <stdio.h>
#include <stdbool.h>

bool mx_isspace(char c);

bool mx_isdigit(int c);

int mx_atoi(const char *str);

void mx_printchar(char c);

void mx_printint(int num);

int main(int argc, char *argv[]) {
    int sum = 0;
    for (int i = 1; i < argc; i++){
        if (mx_atoi(argv[i]))
            sum += mx_atoi(argv[i]);
    }
    mx_printint(sum);
    return 0;
}
