#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int n, x;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        x = i;
        if (x % 3 == 0)
        {
            printf(" %d", i);
        }
        else
        {
            bool a = true;
            while (a)
            {
                if(x % 10 == 3)
                {
                    printf(" %d", i);
                    break;
                }
                x /= 10;
                if(x == 0)
                {
                    break;
                }
            }
        }
    }
    printf("\n");
}
