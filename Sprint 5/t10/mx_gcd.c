#include <stdio.h>

int mx_gcd(int a, int b) {
    if (b == 0) {
        if (a > 0)
            return a;
        else
            return a * -1;
    }
    return mx_gcd(b, a % b);
}
