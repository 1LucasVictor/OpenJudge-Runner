#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    if (c - (a - b) > 0)
        printf("%d\n", c - (a - b));
    else 
        puts("0");
    return 0;
}