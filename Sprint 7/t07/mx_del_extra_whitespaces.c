#include <stdlib.h>
#include <stdbool.h>

char *mx_del_extra_whitespaces(const char *str);

char *mx_strtrim(const char *str);

bool mx_isspace(char);

int mx_strlen(const char *);

char *mx_del_extra_whitespaces(const char *str) {
	if (str == NULL)
		return NULL;
	char *cutStr = mx_strtrim(str);
	for (int i = 1; i < mx_strlen(cutStr) - 1; i++) {
		if (mx_isspace(cutStr[i]) && mx_isspace(cutStr[i + 1])) {
			while (mx_isspace(cutStr[i + 1])) {
				char temp = cutStr[i + 1];
				int j;
				for (j = i; j < mx_strlen(cutStr) - 1; j++) {
					char tmp = cutStr[j];
					cutStr[j] = cutStr[j + 1];
					cutStr[j + 1] = tmp;
				}
				cutStr[j] = temp;
				cutStr = mx_strtrim(cutStr);
			}
		}
		else {
			if (mx_isspace(cutStr[i]) && cutStr[i] != ' ')
				cutStr[i] = ' ';
		}
	}
	char *res = mx_strtrim(cutStr);
	free(cutStr);
	return res;
}
