#include <stdio.h>
#include <stdbool.h>
bool mx_islower(int c);
bool mx_islower(int c)
{
 if(c > 64 && c < 91)
 {
  return 1;
 }
 else
 {
  return 0;
 }
}

