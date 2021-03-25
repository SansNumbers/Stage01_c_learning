void mx_printchar(char c);

void mx_pyramid(int n);

void mx_pyramid(int n) {
    if (n > 1 && n % 2 == 0) {
        int temp = 0;
        int temp2 = 0;

        for (int i = 0; i < n + 1; i++) {
            if (i == n-1)
                mx_printchar('/');
            else if (i == n)
                mx_printchar('\\');
            else
                mx_printchar(' ');
        }
        
        mx_printchar('\n');

        for (int i = n / 2 + 1; i < n; i++) {
            for (int j = 0; j < n / 2 + i + 2; j++) {
                if (j == n / 2 + i-1)
                    mx_printchar('\\');
                else if (j == 1.5 * n - i-1)
                    mx_printchar('/');
                else if (j == n / 2 + i + 2-1) {
                    for (int k = 0; k < i - (n / 2 + 1); k++)
                        mx_printchar(' ');
                    mx_printchar('\\');  
                }
                else
                    mx_printchar(' ');
            }
            temp ++;
            mx_printchar('\n');
        }

        for (int i = n / 2 + 1; i < n; i++) {
            for (int j = 0; j < n / 2 + i + 2 + temp; j++) {
                if (j == n / 2 + i + temp-1)
                    mx_printchar('\\');
                else if (j == 1.5 * n - i-temp-1)
                    mx_printchar('/');
                else if (j == n / 2 + i + 2 + temp-1) {
                    for (int k = 0; k < n/2 - 2 - temp2; k++)
                        mx_printchar(' ');
                    mx_printchar('|'); 
                }
                else
                    mx_printchar(' ');
            }
            mx_printchar('\n');
            temp2++;
        }
        
        for (int j = 0; j < n * 2; j++) {
            if (j == 0)
                mx_printchar('/');
            else if (j == n * 2-2)
                mx_printchar('\\');
            else if (j == n * 2-1)
                mx_printchar('|');
            else
                mx_printchar('_');
        }
        mx_printchar('\n');
    }
}

int main()
{
    mx_pyramid(3);
    return 0;
}
