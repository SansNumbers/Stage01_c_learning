#include <stdio.h>

int mx_factorial_iter(int n) {
    int fact = 0;
    if (n > 0) {
        fact++;
        for (int i = 1; i <= n; i++) {
            fact *= i;
        }
    }
    return fact;
}
