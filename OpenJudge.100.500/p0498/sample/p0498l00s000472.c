#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{
    int n;
    scanf("%d", &n);
    if (n & 1)
        printf("%d\n", n / 2 + 1);
    else
        printf("%d\n", n / 2);
    return 0;
}