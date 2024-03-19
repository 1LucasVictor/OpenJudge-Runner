#include <stdio.h>

#define NUM_MAX (45)

int dp[NUM_MAX];

int
fibonacci(int num)
{
        if (num <= 1)
                return dp[num] = 1;

        if (dp[num] != -1)
                return dp[num];

        return dp[num] = fibonacci(num - 1) + fibonacci(num - 2);
}

int
main(void)
{
        int num;
        int i;

        for (i = 0; i < NUM_MAX; i++)
                dp[i] = -1;

        scanf("%d", &num);
        printf("%d\n", fibonacci(num));

        return 0;
}

