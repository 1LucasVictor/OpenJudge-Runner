#include<stdio.h>

int digits(int n)
{
    int r = 0;
    while(n) n = n/10, r++;
    return r;
}

int main(void)
{
    int n, m;
    while(scanf("%d %d", &n, &m) != EOF)printf("%d\n", digits(n+m));
    return 0;
}