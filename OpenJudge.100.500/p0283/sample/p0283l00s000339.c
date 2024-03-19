#include <stdio.h>

#define N 8
#define Free -1
#define NFree 1
#define true 1
#define false 0

int row[N], col[N], dleft[2 * N - 1], dright[2 * N - 1];
int board[N][N];

void initialize()
{
    int i;
    for (i = 0; i < N; i++)
    {
        row[i] = Free;
        col[i] = Free;
    }
    for (i = 0; i < 2 * N - 1; i++)
    {
        dleft[i] = Free;
        dright[i] = Free;
    }
}

void printBoard(void)
{
    int i, j;
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            if (board[i][j])
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
            {
                printf("Q");
            }
            else
                printf(".");
        }
        printf("\n");
    }
}

void recursive(int i)
{
    if (i == N)
    {
        printBoard();
        return;
    }
    int j;
    for (j = 0; j < N; j++)
    {
        if (NFree == col[j] || NFree == dleft[i + j] || NFree == dright[i - j + N - 1])
            continue;
        row[i] = j;
        col[j] = dleft[i + j] = dright[i - j + N - 1] = NFree;
        recursive(i + 1);
        row[i] = col[j] = dleft[i + j] = dright[i - j + N - 1] = Free;
    }
}
int main()
{
    initialize();
    int k, r, c, i, j;

    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            board[i][j] = false;
        }
    }

    scanf("%d", &k);
    for (i = 0; i < k; i++)
    {
        scanf("%d %d", &r, &c);
        board[r][c] = true;
    }

    recursive(0);

    return 0;
}
