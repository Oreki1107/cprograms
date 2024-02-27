#include <stdio.h>

#define ROWS 3
#define COLS 3

void findSaddlePoints(int matrix[ROWS][COLS]) {
    int i, j, min_in_row, max_in_col;

    printf("Saddle point(s) in the matrix:\n");
    for (i = 0; i < ROWS; i++) {
        min_in_row = matrix[i][0];
        for (j = 1; j < COLS; j++) {
            if (matrix[i][j] < min_in_row) {
                min_in_row = matrix[i][j];
            }
        }
        for (j = 0; j < COLS; j++) {
            if (matrix[i][j] == min_in_row) {
                max_in_col = matrix[0][j];
                for (int k = 1; k < ROWS; k++) {
                    if (matrix[k][j] > max_in_col) {
                        max_in_col = matrix[k][j];
                    }
                }
                if (max_in_col == min_in_row) {
                    printf("(%d, %d) = %d\n", i, j, min_in_row);
                }
            }
        }
    }
}

int main() {
    int matrix[ROWS][COLS] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    findSaddlePoints(matrix);

    return 0;
}
