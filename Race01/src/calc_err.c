#include "../inc/minilibmx.h"

bool calc_err(char *arr) {
    int i ;
  //  char *t = (int)(mx_strchr(arr, ' '));
    for(i = 0 ; i < mx_strlen(arr); i++) {
        if (arr[i] != '?')
            return false;        
    }
    return true;
}
