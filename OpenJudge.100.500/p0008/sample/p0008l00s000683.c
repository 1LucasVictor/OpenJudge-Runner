#include <stdio.h>

int prime[200000] = {2};
int len = 1;

int main(void)
{
    int n;
    int i, j;

    for (i = 3; i < 999999; i += 2){
        for (j = 3; j * j < i && i % j; j += 2);
        if (j * j > i) prime[len++] = i;
    }

    while (scanf("%d", &n) != EOF){
        for (i = 0; i < len && prime[i] <= n; ++i);
        printf("%d\n", i);
    }
}