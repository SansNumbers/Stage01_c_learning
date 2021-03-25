#include <stdio.h>
int *mx_copy_int_arr(const int *src, int size);
int *mx_del_dup_arr(int *src, int src_size, int *dst_size) {
    int *arr = mx_copy_int_arr(src, *dst_size);
    for(int i = 0; i < src_size; i++)
    {
        for (int j = i + 1; j < src_size; j++)
        {
            if(src[i] == src[j])
            {
                for(int k = j; k < src_size; k++)
                {
                    src[k] = src[k + 1];
                }
                src_size--;
                j--;
            }
        }
    }
return arr;
}
