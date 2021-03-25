#include <stdlib.h>

char *mx_concat_words(char **words);

int mx_strlen(const char *);

char *mx_strnew(const int size);

char *mx_strjoin(char const *s1, char const *s2);

char *mx_strcat(char *s1, const char *s2);

void mx_strdel(char **str);

char *mx_concat_words(char **words) {
	if (words == NULL)
		return NULL;
	int len = 0;
	for (int i = 0; words[i] != NULL; i++)
		len = len + mx_strlen(words[i]) + 1;
	len--;
	char *res = mx_strnew(len);
	for (int i = 0; words[i] != NULL; i++) {
		res = mx_strcat(res, mx_strjoin(words[i], " "));
	}
	res[len] = '\0';
	mx_strdel(words);
	return res;
}
