#include <stdio.h>
#include <stdbool.h>
int mx_tolower(int c);
int mx_tolower(int c)
{
 if(c > 64 && c < 91)
 {
  return c + 32;
 }
 else if (c > 96  && c < 123)
 {
  return c;
 }
return 0;
}

