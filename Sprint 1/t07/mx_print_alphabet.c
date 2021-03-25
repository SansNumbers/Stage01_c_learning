#include "mx_printchar.c"
#include <stdio.h>
void mx_printchar(char c);
void mx_print_alphabet(void);
void mx_print_alphabet(void){
 for(int i = 0; i <= 26; i++){
  char c = i % 2 == 0 ? i + 65: i +97;
  mx_printchar(c);
  mx_printchar('\n');
 }
}
int main()
{
mx_print_alphabet();
}

