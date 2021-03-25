#include <stdio.h>
#include <string.h>
#include <unistd.h>
int mx_strlen(const char *s);
int mx_strlen(const char *s){
 int s_length = 0;
 while(*s!=0){
 s++;
 s_length++;
 }
printf("%d", s_length);
return s_length;
}

