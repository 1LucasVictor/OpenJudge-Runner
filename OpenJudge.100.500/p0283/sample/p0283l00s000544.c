#include <stdio.h>

#define N 8
#define UFOKERU -5
#define NOT_UFOKERU 5
#define true 1
#define false 0

int row[N], col[N], dpos[2 * N - 1], dneg[2 * N - 1];

int X[N][N];

void init()
{
    int i;

    for (i = 0; i < N; i++)
    {
        row[i] = UFOKERU, col[i] = UFOKERU;
    }
    for (i = 0; i < 2 * N - 1; i++)
    {
        dpos[i] = UFOKERU;
        dneg[i] = UFOKERU;
    }
}

void printBoard()
{
    int i, j;

    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            if (X[i][j])
            {
                if (row[i] != j)
                    return;
            }
        }
    }
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            if (row[i] == j)
                printf("Q");
            else
                printf(".");
        }
        printf("\n");
    }
}

void recursive(int i)
{
    int j;

    if (i == N)
    {
        printBoard();
        return;
    }

    for (j = 0; j < N; j++)
    {
        if (NOT_UFOKERU == col[j] ||
            NOT_UFOKERU == dpos[i + j] ||
            NOT_UFOKERU == dneg[i - j + N - 1])
            continue;

        row[i] = j;
        col[j] = dpos[i + j] = dneg[i - j + N - 1] = NOT_UFOKERU;

        recursive(i + 1);
        row[i] = col[j] = dpos[i + j] = dneg[i - j + N - 1] = UFOKERU;
    }
}

int main()
{
    int i, j;
    init();

    for (i = 0; i < N; i++)
        for (j = 0; j < N; j++)
            X[i][j] = false;

    int k;
    scanf("%d", &k);
    for (i = 0; i < k; i++)
    {
        int r, c;
        scanf("%d%d", &r, &c);
        X[r][c] = true;
    }

    recursive(0);

    return 0;
}
