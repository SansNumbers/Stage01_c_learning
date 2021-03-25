#include "../inc/minilibmx.h"

int main(int argc, char *argv[]) {
    char op;
    if (argc != 5) {
        char *er = "usage: ./part_of_the_matrix [operand1] [operation] [operand2] [result]";
        mx_printerr(er);
         mx_printerr("\n");
        exit (0);
    }
    argv[1] = mx_del_extra_whitespaces(argv[1]);
    argv[2] = mx_del_extra_whitespaces(argv[2]);
    argv[3] = mx_del_extra_whitespaces(argv[3]);
    argv[4] = mx_del_extra_whitespaces(argv[4]);
    int a = mx_atoi(argv[1]);
    int b = mx_atoi(argv[3]);
    int c = mx_atoi(argv[4]);
    int count_d = mx_strlen(argv[2]);
    if (mx_strchr(argv[2],'?')&&count_d != 1) {

         char *er;
            er = "Invalid operation: ";
            mx_printerr(er);
            mx_printerr(argv[2]);
            mx_printerr("\n");
            exit (0);
        
    }
    else if (count_d != 1) {

         char *er;
            er = "Invalid operation: ";
            mx_printerr(er);
            mx_printerr(argv[2]);
             mx_printerr("\n");
            exit (0);
        
    }
    else if ((!mx_strchr(argv[2], '+') && !mx_strchr(argv[2], '-') && !mx_strchr(argv[2], '*') && !mx_strchr(argv[2], '/') && !mx_strchr(argv[2],'?'))) {
            char *er;
            er = "Invalid operation: ";
            mx_printerr(er);
            mx_printerr(argv[2]);
             mx_printerr("\n");
            exit (0);
    } else {
        if (*argv[2] == '+') {
            op = '+';
        }
        if (*argv[2] == '-') {
            op = '-';
        } 
        if (*argv[2] == '*') {
            op = '*';
        } 
        if (*argv[2] == '/') {
            if (b == 0 && !calc_err(argv[3])) {
                exit (0);
            }
            op = '/';
        }
        if (*argv[2] == '?' && count_d == 1) {
            op = '?';
        }
    } 
   
    int count_a = 0;
    int count_b = 0;
    int count_c = 0;
    if (!calc_err(argv[1]) && !bool_atoi(argv[1])) {
        char *er = "Invalid operand: ";
        mx_printerr(er);
        mx_printerr(argv[1]);
        mx_printerr("\n");
        exit (0);
    }
    else {
        if (calc_err(argv[1]))
             count_a = mx_strlen(argv[1]);
    }
    if (!calc_err(argv[3]) && !bool_atoi(argv[3])) {
        char *er = "Invalid operand: ";
        mx_printerr(er);
        mx_printerr(argv[3]);
         mx_printerr("\n");
        exit (0);
    } else {
        if (calc_err(argv[3]))
             count_b = mx_strlen(argv[3]);
    }
    if (!calc_err(argv[4]) && !bool_atoi(argv[4])) {
        char *er = "Invalid result: ";
        mx_printerr(er);
        mx_printerr(argv[4]);
         mx_printerr("\n");
        exit (0);
    } else {
        if (calc_err(argv[4]))
             count_c = mx_strlen(argv[4]);
    }

    if(bool_atoi(argv[1]) || bool_atoi(argv[3]) || bool_atoi(argv[4])) {
        if (bool_atoi(argv[1]) && bool_atoi(argv[3]) && bool_atoi(argv[4])) {
            int sign_a = 1, sign_b = 1, sign_c = 1;
            if (a < 0) { sign_a *= -1; a *= -1;}
            if (b < 0) { sign_b *= -1; b *= -1;}
            if (c < 0) { sign_c *= -1; c *= -1;}
            func_znak_add(a, b, c, '+', sign_a, sign_b, sign_c);
            func_znak_sub(a, b, c, '-', sign_a, sign_b, sign_c);
            func_znak_mul(a, b, c, '*', sign_a, sign_b, sign_c);
            func_znak_div(a, b, c, '/', sign_a, sign_b, sign_c);
        }
        if (!bool_atoi(argv[1]) && bool_atoi(argv[3]) && bool_atoi(argv[4])) {
            
            func_a(op, c, b, count_a);
        }
        if (bool_atoi(argv[1]) && !bool_atoi(argv[3]) && bool_atoi(argv[4])){
            func_b(op, a, c, count_b);
           
        }
            
        if (bool_atoi(argv[1]) && bool_atoi(argv[3]) && !bool_atoi(argv[4])) 
            func_c(op, a, b, count_c);
        if (!bool_atoi(argv[1]) && !bool_atoi(argv[3]) && bool_atoi(argv[4])) {
            result_arr_c(op, c, count_a, count_b);
        }
        if (!bool_atoi(argv[1]) && bool_atoi(argv[3]) && !bool_atoi(argv[4])) {
            result_arr_b(op, b, count_a, count_c);
        }
        if (bool_atoi(argv[1]) && !bool_atoi(argv[3]) && !bool_atoi(argv[4])) {
            result_arr_a(op, a, count_c, count_b); 
        }
        
    }if (!bool_atoi(argv[1]) && !bool_atoi(argv[3]) && !bool_atoi(argv[4])) {
            result_arr_abc(op, count_a, count_b, count_c); 
        }
    printf("%d", result);
}
