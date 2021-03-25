#include <stdio.h>
int mx_strncmp(const char *s1, const char *s2, int n);
int mx_strlen(const char *s);
char *mx_strstr(const char *s1, const char *s2);
int mx_count_substr(const char *str, const char *sub){
int a1 = mx_strlen(str), a2 = mx_strlen(sub), i, j, count = 0, f = 0;
  if (a2 == 0) 
   return 0;
  for (i = 0; i < a1 - a2; ++i) {
   found = 1;
  for (j = 0; j < a2; ++j) {
   if (str[i + j] != sub[j]) {
    f = 0;
    break;
   }
  } 
  if (f) {
   count++;
   i = i + l2 - 1;
  }
 }
return count;
}

