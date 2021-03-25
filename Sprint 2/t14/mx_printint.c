#include <stdio.h>

void mx_printchar(char c);
void mx_printint(int n);

void mx_printint(int n)
{
 if(n < 0)
 {
 mx_printchar('-');
 n *= -1;
 int m = 0;
  while (n > 0)
  {
  m = m * 10 + n % 10;
  mx_printchar(m + 48);
  n = n / 10;
  }
 }
}
int main(){
    mx_printint(25);
}
