#include <stdio.h>

int mx_factorial_rec(int n) {
    if(n > 0){
        if (n == 1)
            return 1;
        else if (n <= 0)
            return 0;
        else
        return n * mx_factorial_rec(n - 1);
    }
}
