#include <stdio.h>
#include "mx_printstr.c"
void mx_is_positive(int i);
void mx_is_positive(int i)
{
 if (i == 0)
 {
  mx_printstr("Zero");
 }
 else
 {
  if (i > 0)
  {
   mx_printstr("Positive.");
  }
  else
  {
   mx_printstr("Negative.");
  }
 }
}

