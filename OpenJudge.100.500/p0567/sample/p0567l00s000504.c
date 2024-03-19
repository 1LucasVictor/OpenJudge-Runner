#include <stdio.h>

int main(void)
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    for (int i = 0; i < a; i++)
    {
        if (b < a)
        {
            b++;
            c--;
        }
    }
    printf("%d", c);
}