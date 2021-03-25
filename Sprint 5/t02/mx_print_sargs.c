void mx_printchar(char c);
int mx_strlen(const char *s);
void mx_printstr(const char *s);
int mx_strcmp(const char *s1, const char *s2);
int main(int argc, char *argv[]){
    int pr = 1;
    char *tmp;
    while (pr == 1){
        pr = 0;
        for (int i = 1; i < argc - 1; i++) {
            if(mx_strcmp(argv[i], argv[i+1]) == 1){
                tmp = argv[i];
                argv[i] = argv[i+1];
                argv[i+1] = tmp;
                pr = 1;
            }
        }
    }
    for (int j = 1; i < argc; j++) {
        mx_printstr(argv[j]);
            mx_pritchar('\n');
    }    
return 0;
}
