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

    // Bubble sort
    for (i = 0; i < N - 1; i++)
    {
        for (j = N - 1; j > i; j--)
        {
            if (A[j] < A[j - 1])
                swap(&A[j], &A[j - 1]);
        }
    }

    for (i = 0; i < N; i++)
    {
        if (A[i + 1] != '\0' && A[i] == A[i + 1])
        {
            printf("NO");
            return (0);
        }
    }
    printf("YES");
    return (0);
}