#pragma once

#include <ncurses.h>
#include <unistd.h>
#include <stdlib.h>

struct colms {
	char *arr;
	int length, start, finish;
};

char get_random_num();
void get_term_size(WINDOW *mainwin,int *rows, int *cols);
int matrix(WINDOW *mainwin);

