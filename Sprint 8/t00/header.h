#pragma once
#ifndef HEADER_FILE
#define HEADER_FILE
#include <stdbool.h>
#include <stdlib.h>

void mx_printchar(char);
bool mx_isdigit(int);
void mx_printstr(const char *);
void mx_printint(int n);
int mx_strlen(const char *);
char* mx_strcpy(char *dst, const char *src);
bool mx_isspace(char);
int mx_atoi(const char *s);
int mx_strcmp(const char *s1, const char *s2);

#endif
