#include <stdio.h>

int mx_strcmp(const char *s1, const char *s2);

int mx_binary_search(char **arr, int size, const char *s, int *count) {
    int left = 0;
    int right = size - 1;
    int middle = (left + right) / 2;
    (*count) = 0;
    for (int i = 0; i < size; i++) {
	if (arr[i] == NULL) return -1;
        for (int j = 0; j < size - 1; j++) {
            if (mx_strcmp (arr[j], arr[j + 1]) > 0) {
                char *temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    while (left <= right) {
        (*count)++;
        if (mx_strcmp(arr[middle], s) < 0)
            left = middle + 1;
        else if (mx_strcmp (arr[middle], s) == 0) {
            return middle;
        }
        else
            right = middle - 1;
    middle = (left + right) / 2;
    }
    if (left > right) {
        *count = 0;
        return -1;
    }
    return -1;
}
