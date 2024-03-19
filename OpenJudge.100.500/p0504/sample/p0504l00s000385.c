#include <stdio.h>

int main(void)
{
    int H, A;
    int i;
    scanf("%d %d", &H, &A);
    for (i = 0; H > 0; i++)
    {
        H = H - A;
    }
    printf("%d", i);
    
    return (0);
}