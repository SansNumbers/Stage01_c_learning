#include <stdlib.h>
#include <stdbool.h>

char *mx_strtrim(const char *str);

bool mx_isspace(char);

int mx_strlen(const char *);

char *mx_strnew(const int size);

char *mx_strtrim(const char *str) {
	if (str == NULL)
		return NULL;
	int start = 0, end = mx_strlen(str);
	for (int i = 0; i < mx_strlen(str); i++) {
		if (!mx_isspace(str[i])) {
			start = i;
			break;
		}
	}
	for (int i = mx_strlen(str) - 1; i >= start; i--) {
		if (!mx_isspace(str[i])) {
			end = i;
			break;
		}
	}
	int len = end - start + 1;
	char *res = mx_strnew(len + 1);
	for (int i = start, j = 0; i <= end; i++, j++) {
		res[j] = str[i];
	}
	return res;
}
