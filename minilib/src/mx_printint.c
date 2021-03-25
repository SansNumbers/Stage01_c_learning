#include "../inc/minilibmx.h"


void mx_printint(int n) {
    int count = 0, num, f = n;
    char a = '0';
    if (n < 0) { 
        a = '-';
        n = n * (-1);
        mx_printchar(a);
    }
    if (n == 0) count = 1;
    while (f != 0){
        count++;
        f = f / 10;
    }
    long int t;
    for (int index = count; index > 0; index--) {
        t = 1;
        for (int in = 1; in < index; in++) {
            t *= 10;
        } 
        num = (n / t) + 48; 
        n -= (n / t) * t;
        mx_printchar(num);
    }
}

