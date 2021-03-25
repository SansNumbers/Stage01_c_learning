#include "../inc/matrix.h"

int matrix(WINDOW *mainwin) {
	const int SPEED = 100000;
	int rows_size, cols_size;//, r, c;
	get_term_size(mainwin, &cols_size, &rows_size);
	start_color();
	init_pair(1, COLOR_WHITE, COLOR_BLACK);
	init_pair(2, COLOR_GREEN, COLOR_BLACK);
	halfdelay(1);

	struct colms *matrix = (struct colms*)malloc(sizeof(struct colms) * rows_size);
	
	for(int i = 0; i < rows_size; i++) {
		matrix[i].arr = (char*)malloc(sizeof(char) * cols_size);
		for (int j = 0; j < cols_size; j++)
			matrix[i].arr[j] = get_random_num();
		matrix[i].length = rand() % cols_size;
		matrix[i].start = 0 - matrix[i].length - matrix[i].length;
		matrix[i].finish = 0 - matrix[i].length;
	}


	wbkgd(mainwin, COLOR_PAIR(2));

	attroff(COLOR_PAIR(2));
	attron(COLOR_PAIR(1));


	for (int i = 0; i < rows_size; i++) {
		for (int j = 0; j < cols_size; j++) {
			matrix[i].arr[j] = get_random_num();
		}
	}

	while(getch() != 'q') {

		wclear(mainwin);
		for (int i = 0; i < rows_size; i++) {
			for (int j = 0; j < cols_size; j++) {
				if (j >= matrix[i].start && j <= matrix[i].finish ) {
					if (j == matrix[i].finish) {
						attroff(COLOR_PAIR(2));
						attron(COLOR_PAIR(1));
					}
					mvwaddch(mainwin, j, i * 2, matrix[i].arr[j]);
					if (j == matrix[i].finish) {
						attroff(COLOR_PAIR(1));
						attron(COLOR_PAIR(2));
					}
					if (j == matrix[i].start) matrix[i].arr[j] = get_random_num();
				}
			}
			matrix[i].start++;
			matrix[i].finish++;
			
			if (matrix[i].start > cols_size) {
				matrix[i].length = rand() % cols_size;
				matrix[i].start = 0 - matrix[i].length - matrix[i].length;
				matrix[i].finish = 0 - matrix[i].length;
			} 
			
		}

		refresh();
		usleep(SPEED);
	}

	for(int i = 0; i < cols_size; i++) {
		free(matrix[i].arr);
	}
	free(matrix);
	matrix = NULL;
	return 0;
}
