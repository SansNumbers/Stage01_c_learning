#include <stdio.h>
#include <stdbool.h>

bool mx_isspace(char c);

bool mx_isdigit(int c);

int mx_atoi(const char* s)
{
	int num = 0;

	int i = 0;

	while (mx_isdigit(s[i]))
	{
		num = num * 10 + (s[i] - '0');
		i++;
	}

	return num;
}
