#include <stdio.h>

int main(void)
{
    int H = 0, N = 0;
    int A[1000];
    int i;
    scanf("%d %d", &H, &N);
    for (i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }
    i = 0;
    while (i < N)
    {
        H = H - A[i];
        i++;
    }
    if (H <= 0)
        printf("Yes");
    else
        printf("No");
    return (0);
}