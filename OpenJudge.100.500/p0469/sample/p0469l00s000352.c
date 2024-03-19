#include <stdio.h>

int main(void)
{
    int k, a, b;
    scanf("%d", &k);
    scanf("%d %d", &a, &b);
    if(!(a % k) || (a / k)*k + k <= b) printf("OK\n");
    else printf("NG\n");
    return 0;
}