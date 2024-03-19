#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare_int(const void *a, const void *b)
{
    return *(int*)a - *(int*)b;
}

int main(void)
{
    unsigned int N;
    unsigned int A[200000];
    unsigned int i, counter = 0;

    scanf("%d", &N);
    for (i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
        counter++;
    }
    qsort(A, counter, sizeof(int), compare_int);
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