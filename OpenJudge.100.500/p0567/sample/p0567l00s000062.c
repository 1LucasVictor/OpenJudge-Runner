#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    int x = a-b;
    printf("%d", c - x);

    return 0;
}
