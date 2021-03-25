#ifndef MINILIBMX_H
#define MINILIBMX_H

#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>
#include <stdlib.h>

bool mx_isdigit(int c);
int mx_strlen(const char* str);
void mx_printerr(const char *s); 
void mx_printint(int n);
void mx_printchar(char c);
int mx_atoi(const char *str);
bool calc_err(char *arr);
char *mx_strchr(const char *s, int c);
double mx_pow_rec(double n, unsigned int pow);
void mx_printstr(const char *s);
bool mx_isspace(char c);
void mx_strdel(char **str);
char *mx_strnew(const int size);
char *mx_strncpy(char *dst, const char *src, int len);
char *mx_strtrim(const char *str);
char *mx_del_extra_whitespaces(const char *str);
void func_a (char op, int c, int b, int count_a);
void func_b (char op, int a, int c, int count_b);
void func_c (char op, int a, int b, int count_c);
int mx_add(int a, int b);
int mx_sub(int a, int b);
int mx_div(int a, int b);
int mx_mul(int a, int b);
void result_arr_a(char op, int a, int count_c, int count_b);
void result_arr_b(char op, int b, int count_a, int count_c);
void result_arr_c(char op, int c, int count_a, int count_b);
void result_arr_abc(char op, int count_a, int count_b, int count_c);
void func_znak_add(int a, int b, int c, char op, int sign_a, int sign_b, int sign_c);
void func_znak_sub(int a, int b, int c, char op, int sign_a, int sign_b, int sign_c);
void func_znak_mul(int a, int b, int c, char op, int sign_a, int sign_b, int sign_c);
void func_znak_div(int a, int b, int c, char op, int sign_a, int sign_b, int sign_c);
bool bool_atoi (const char *str);

#endif // !MINILIBMX_H
