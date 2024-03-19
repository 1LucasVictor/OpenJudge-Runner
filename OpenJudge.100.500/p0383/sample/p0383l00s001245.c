#include <stdio.h>

int main(int argc, char const *argv[])
{
    int mtxA[101][101] = {0};
    int mtxB[101][101] = {0};

    int n, m, l;
    scanf("%d %d %d", &n, &m, &l);

    // input matrixA[n][m]
    for (int x = 0; x < n; x++)
        for (int y = 0; y < m; y++)
            scanf("%d", &mtxA[x][y]);

    // input matrixB[m][l]
    for (int i = 0; i < m; i++)
        for (int j = 0; j < l; j++)
            scanf("%d", &mtxB[i][j]);

    int row[101] = {0};
    int col[101] = {0};
    for (int mtxArow = 0; mtxArow < n; mtxArow++)
    {
        for (int mtxAcol = 0; mtxAcol < m; mtxAcol++)
            row[mtxAcol] = mtxA[mtxArow][mtxAcol];

        for (int y = 0; y < l; y++)
        {
            for (int x = 0; x < m; x++)
                col[x] = mtxB[x][y];

            int sum = 0;
            for (int s = 0; s < m; s++)
                sum += row[s] * col[s];

            printf("%d", sum);

            if (y != l - 1)
                printf(" ");
            else
                printf("\n");
        }
    }

    return 0;
}
