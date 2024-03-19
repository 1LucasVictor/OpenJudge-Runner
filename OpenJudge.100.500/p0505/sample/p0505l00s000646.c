#include <stdio.h>
#define NMAX 10001
int main(void)
{
    long int H, N,sum = 0;
    int A[NMAX];
    scanf("%ld%ld", &H, &N);
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
        sum += (long int)A[i];
    }
    if (sum >= H)
        printf("Yes");
    else
        printf("No");

    return 0;
}