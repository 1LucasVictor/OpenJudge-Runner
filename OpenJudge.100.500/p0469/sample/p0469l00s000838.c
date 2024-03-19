#include <stdio.h>
#include <math.h>

int main()
{
    int k, a, b, i;
    scanf("%d", &k);
    scanf("%d %d", &a, &b);
    if (a <= b / k * k) printf("OK");
    else printf("NG");
    return 0;
}