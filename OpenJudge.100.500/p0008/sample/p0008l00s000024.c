#include <stdio.h>
#include <stdlib.h>
#define max 1000001
int prime[max];

int main()
{
    int n, i, j;


    for (i = 0; i < max; i++)
    {
        prime[i] = 1;
    }

    prime[0] = prime[1] = 0;
    for (i = 2; i * i < max; i++)
    {
        if (prime[i] == 1)
        {
            for (j = i * i; j < max; j += i)
            {
                prime[j] = 0;
            }
        }
    }

    for (i = 1; i < max - 1; i++)
    {
        prime[i + 1] = prime[i + 1] + prime[i];
    }

    while (scanf("%d", &n)==1)
    {
        printf("%d\n", prime[n]);
    }

    return 0;
}