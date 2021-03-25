void mx_printchar(char c);

void mx_cube(int n);

void mx_cube(int n) {
	if (n > 1) {
	int temp = 0;
	for (int i = 0; i < (int)(n/2)+1; i++) {
		for (int j = 0; j <= n * 2 + (int)(n/2+1)+1; j++) {
			if ((i == 0 && j == n/2+1) || (i == 0 && j == n * 2 + (int)(n/2+1)+1))
				mx_printchar('+');
			else if (i == 0 && j > (int)(n/2+1))
					mx_printchar('-');
			else if (j == n * 2 + (int)(n/2+1)+1)
				mx_printchar('|');
			else if (j == n/2+1 - i)
				mx_printchar('/');
			else if (j == n * 2 + (int)(n/2+1) - i+1)
				mx_printchar('/');
			else
				mx_printchar(' ');
		}
		mx_printchar('\n');
	}

	for (int i = 0; i <= n + 1; i++) {
		for(int j = 0; j <= n * 2 + (int)(n/2+1)+1; j++) {
			if(i == 0 || i == n + 1) {
				if(j == 0 || j == n * 2 + 1)
					mx_printchar('+');
				else if (j < n * 2 + 1)
					mx_printchar('-');
				else if (j == n * 2 + (int)(n/2+1)+1 && i != n + 1 && n%2==1)
					mx_printchar('|');
				else if (j == n * 2 + (int)(n/2+1)+1 && i != n + 1 && n%2==0)
					mx_printchar('|');
				else if (i != n + 1)
 					mx_printchar(' ');
			} else if (i >= (int)(n/2) && n % 2 == 0) {
				if (j == 0 || j == n * 2 + 1)
	 				mx_printchar('|');
				else if (j == n * 2 + (int)(n/2+1)+1) {
					for (int k = (int)(n/2) - temp; k > 0; k--)
						mx_printchar(' ');
					temp++;
					if (i == (int)(n/2))
						mx_printchar('+');
					else
						mx_printchar('/');
				} else if (j <= n*2) 
					mx_printchar(' ');	
				} else if (i >= (int)(n/2)+1 && n % 2 == 1) {
				if (j == 0 || j == n * 2 + 1)
	 				mx_printchar('|');
				else if (j == n * 2 + (int)(n/2+1)+1) {
					for (int k = (int)(n/2) - temp; k > 0; k--)
						mx_printchar(' ');
					temp++;
					if (i == (int)(n/2)+1)
						mx_printchar('+');
					else
						mx_printchar('/');
				} else if (j <= n*2) 
					mx_printchar(' ');	
				} else if (j == 0 || j == n * 2 + 1 || j == n * 2 + (int)(n/2+1)+1)
	 					mx_printchar('|');
					else
 						mx_printchar(' ');
			}
			mx_printchar('\n');
		}
	}
}
