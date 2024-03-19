#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int N, A, B;
    scanf("%d %d %d", &N, &A, &B);
    if (1 > N || 1 > A || 1 > B || N > 20 || A > 50 || B > 50)
    {
        exit(0);
    }
    else
    {
        int trainF = A * N;
        int taxiF = B;
        if (trainF < taxiF)
        {
            printf("%d",trainF);
        }
        else
        {
            printf("%d",taxiF);
        }
    }
}
