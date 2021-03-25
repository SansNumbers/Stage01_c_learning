#pragma once
#ifndef GET_ADDRESS
#define GET_ADDRESS
#include <stdlib.h>

char *mx_strnew(const int size);

int mx_strlen(const char *);

char* mx_strcpy(char *dst, const char *src);

char *mx_nbr_to_hex(unsigned long nbr);

char *mx_get_address(void *p);

#endif
