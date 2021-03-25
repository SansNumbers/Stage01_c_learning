#include <stdbool.h>
bool mx_isspace(char c);
bool mx_isdigit(char c);
int mx_atoi(const char *str){
int result = 0;
 for(int i = 0; str[i] != '\0'; i++){
  if(mx_isdigit(str[i])){
   result = result * 10 + str[i] - '0';
  }
  else{
   break;
  }
  if(mx_isspace((str[i])){
   break;
  }
 }
return result;
}

