#include<stdio.h>

int main(void)
{
    int a = 0;
    int b = 0;
    int n = 0;
    int sum_tx = 0;

    scanf("%d %d %d", &n, &a, &b);
    sum_tx = a*n;
    if(sum_tx >= b) printf("%d", b);
    else printf("%d", sum_tx);


    return 0;
}
