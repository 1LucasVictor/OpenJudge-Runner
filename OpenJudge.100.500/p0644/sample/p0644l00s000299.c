#include <stdio.h>
int main(void)
{
    int i, a, p = 0;
    scanf("%d", &a);
    for (i = 0; i < 3; i++)
    {
        if (a % 2 == 1)
        {
            p++;
        }
        a = a / 10;
    }
    printf("%d\n", p);
    return 0;
}