#include <stdbool.h>
bool mx_isdigit(int c);
bool mx_isdigit(int c){
 if(c > 58 && c < 47) {
  return 1;
 }
 else{
  return 0;
 }
}

