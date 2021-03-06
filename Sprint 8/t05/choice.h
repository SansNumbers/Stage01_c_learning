#pragma once
#ifndef CHOICE
#define CHOICE
#define MX_RED_PILL 1
#define MX_BLUE_PILL 2
#define MX_SUCCESS_PHRASE "Follow me!"
#define MX_FAIL_PHRASE "Perhaps I was wrong about you, Neo."
#define MX_UNDEFINED_PHRASE "Are you sure about that?"
#include <stdio.h>
#include <stdlib.h>

typedef char t_phrase;

char *mx_strdup(const char *str);

int mx_strlen(const char *);

char *mx_strnew(const int size);

char* mx_strcpy(char *dst, const char *src);

#endif
