

#include <stdio.h>

int main(void)
{
    int i, j, m, n, n1, n2, sum = 0;
    int A[10000], B[10000];
    scanf("%d", &n1);
    for (i = 0; i < n1; i++)
    {
        scanf("%d", &A[i]);
    }

    scanf("%d", &n2);
    for (j = 0; j < n2; j++)
    {
        scanf("%d", &B[j]);
    }

    for (i = 0; i < n1; i++)
    {
        for (j = 0; j < n2; j++)
        {
            if (A[i] == B[j])
            {
                sum += 1;
            }
        }
    }

    printf("%d\n", sum);
    return 0;
}
