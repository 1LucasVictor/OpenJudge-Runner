#include <stdio.h>

int main(void)
{
    int x, i, result;

    while(scanf("%d", &x))
    {
        if(!x)
        {
            break;
        }

        result = 0;

        for(i = 1000; i >= 1; i /= 10)
        {
            result += x / i;
            x = x % i;
        }

        printf("%d\n", result);
    }

    return 0;
}