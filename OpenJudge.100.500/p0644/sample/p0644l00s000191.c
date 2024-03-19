#include <stdio.h>

int main(void)
{
    int i;
    int num = 0;
    scanf("%d", &i);

    while (i > 0)
    {
        if (i % 10 == 1)
        {
            num++;
        }
        i /= 10;
    }
    printf("%d", num);

    return 0;
}