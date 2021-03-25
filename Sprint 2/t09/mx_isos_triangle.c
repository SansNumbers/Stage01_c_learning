#include <stdio.h>
#include "mx_printchar.c"
#include <stdbool.h>
void mx_isos_triangle(unsigned int length, char c);
void mx_isos_triangle(unsigned int length, char c)
{
for (unsigned int a = 1; a <= length; a++)
{
 for (unsigned int b = 1; b <= a; b++)
 {
  mx_printchar(c);
 }
 mx_printchar('\n');
 }
}

