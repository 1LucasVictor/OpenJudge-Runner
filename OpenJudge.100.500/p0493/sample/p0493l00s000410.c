#include <stdio.h>
#include <string.h>
int main(void)
{
    int x,a,b,c;
    scanf("%d", &x);
    a = x / 500;
    b = (x - 500*a) / 5;
    printf("%d", a * 1000 + b * 5);


    return 0;
}
