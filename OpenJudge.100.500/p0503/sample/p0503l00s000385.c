#include <stdio.h>

void swap(unsigned int *a, unsigned int *b)
{
    unsigned int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

int main(void)
{
    unsigned int N;
    unsigned int A[200000];
    unsigned int i, j;

    scanf("%d", &N);
    for (i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }

    j = 1;
    for (i = 0; i < j; i++)
    {
        for (j = i + 1; j < N; j++)
        {
            if (A[i] == A[j])
            {
                printf("NO");
                return (0);
            }
        }
    }
    printf("YES");
    return (0);
}