#include <stdio.h>
#include <stdint.h>
#include <string.h>

int calc(int a)
{
    return a + a*a + a*a*a;
}

int main()
{
    int n;
    char buf[30];

    fgets(buf, sizeof(buf), stdin);

    n = atoi(buf);

    printf("%d\n", calc(n));
}