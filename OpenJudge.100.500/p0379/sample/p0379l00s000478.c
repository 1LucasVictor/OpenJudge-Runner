#include <stdio.h>

#define MAXMATRIX 100

//シグマの計算(Σ[j = 0 → m] array_a[i][j] * column_b[j])
int sigma(int i, int j, int m, int matrix_a[MAXMATRIX][MAXMATRIX], int column_b[MAXMATRIX]);

int main(void)
{
    int matrix_a[MAXMATRIX][MAXMATRIX];
    int column_b[MAXMATRIX];
    int i, j, n, m;

    scanf("%d %d", &n, &m);

    for(i = 0; i < n; i++){
        for(j = 0; j < m; j++){
            scanf("%d", &(matrix_a[i][j]));
        }
    }
    for(i = 0; i < m; i++){
        scanf("%d", &(column_b[i]));
    }

    for(i = 0; i < n; i++){
        printf("%d\n", sigma(i, j, m, matrix_a, column_b));
    }
    return 0;
}

int sigma(int i, int j, int m, int matrix_a[MAXMATRIX][MAXMATRIX], int column_b[MAXMATRIX])
{
    int ans;

    ans = 0;

    for(j = 0; j < m; j++){
        ans += matrix_a[i][j] * column_b[j];
    }

    return ans;
}
