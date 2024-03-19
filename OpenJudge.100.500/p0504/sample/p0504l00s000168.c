#include <stdio.h>

int main(void)
{
    int H = 0, A = 0;
    int attack = 0;
    scanf("%d %d", &H, &A);

    while (0 < H)
    {
        H = H - A;
        attack++;
    }
    printf("%d", attack);
    return (0);
}