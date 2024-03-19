#include "stdio.h"

void main()
{
    int N;
    scanf("%d", &N);
    int a = N / 100;
    int b = (N / 10) % 10;
    int c = N % 10;
    if (a == 7 || b == 7 || c == 7)
    {
        printf("Yes\n");
        return;
    }
    printf("No\n");
    return;
}