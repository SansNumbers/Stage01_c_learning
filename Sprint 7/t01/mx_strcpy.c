char *mx_strcpy(char *dst, const char *src);
char *mx_strcpy(char *dst, const char *src){
char *start = dst;
    while(*src) {
        *dst++ = *src++;
    }
*dst = 0;
return start;
}
