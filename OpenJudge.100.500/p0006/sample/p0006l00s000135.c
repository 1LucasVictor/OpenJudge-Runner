#include <stdio.h>

int main(void)
{
        int val = 100000;
        int n;
        scanf("%d", &n);
        while (n--)
                val += val * 0.05;
        if (val % 10000 != 0)
                val = (val / 10000 + 1) * 10000;
        printf("%d\n", val);
}