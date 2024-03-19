#include <stdio.h>
#include <string.h>
int row_used[8] = { 0 }, col_used[8] = { 0 }, row[8];
int conflict(r1, c1, r2, c2)
{
    int r = r2 - r1, c = c2 - c1;
    if (r1 == r2)
        return 1;
    if (c1 == c2)
        return 1;
    r = r > 0 ? r : -r;
    c = c > 0 ? c : -c;
    if (r == c)
        return 1;
    return 0;
}
void queen(int level)
{
    int i, j, invalid;
    if (level == 8)
    {
        for (i = 0; i < 8; ++i)
        {
            for (j = 0; j < 8; ++j)
            {
                if (row[i] != j)
                    printf(".");
                else
                    printf("Q");
            }
            printf("\n");
        }
        return;
    }
    if (row[level] != -1)
        queen(level + 1);
    else
    {
        for (i = 0; i < 8; ++i)
        {
            if (col_used[i])
                continue;
            invalid = 0;
            for (j = 0; !invalid && j < 8; ++j)
            {
                if (row[j] < 0)
                    continue;
                if (conflict(level, i, j, row[j]))
                    invalid = 1;
            }
            if (!invalid)
            {
                row[level] = i;
                col_used[i] = 1;
                queen(level + 1);
                row[level] = -1;
                col_used[i] = 0;
            }
        }
    }
}
int main()
{
    int n, r, c;
    scanf("%d", &n);
    memset(row, -1, sizeof(row));
    while (n--)
    {
        scanf("%d %d", &r, &c);
        row[r] = c;
        row_used[r] = 1;
        col_used[c] = 1;
    }
    queen(0);
}

