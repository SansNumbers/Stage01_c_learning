#include <stdio.h>
int mx_sum_digits(int num);
int mx_sum_digits(int num)
{
int sum = 0;
while (num != 0)
{
 if(num > 0)
 {
 sum = sum + num % 10;
 num /= 10;
 }
 else if (num < 0)
 {
 num = -num;
 sum = sum + num % 10;
 num /= 10;
 }
} 
return sum;
}

