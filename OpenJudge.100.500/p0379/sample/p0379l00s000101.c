#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int **matrix;
    int *vector;
    int col, row, c, r, sum;

    scanf("%d%d", &col, &row);

    vector = (int *)malloc(sizeof(int) * row);
    matrix = (int **)malloc(sizeof(int *) * col);
    for (c=0; c<col; c++) {
        matrix[c] = (int *)malloc(sizeof(int) * row);
    }

    for (c=0; c<col; c++) {
        for (r=0; r<row; r++) {
            scanf("%d", &matrix[c][r]);
        }
    }
    for (r=0; r<row; r++) {
        scanf("%d", &vector[r]);
    }

    for (c=0; c<col; c++) {
        sum = 0;
        for (r=0; r<row; r++) {
            sum += matrix[c][r] * vector[r];
        }
        printf("%d\n", sum);
    }

    return 0;
}
