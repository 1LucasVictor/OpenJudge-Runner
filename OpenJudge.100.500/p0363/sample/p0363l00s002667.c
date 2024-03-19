#include<stdio.h>
#define Swap(x,y) {int t;t=x;x=y;y=t;}
int main(void)
{
    int a,b,c;
    scanf("%d%d%d", &a, &b, &c);
    if (a>b) Swap(a,b);
    if (b>c) Swap(b,c);
    if (a>b) Swap(a,b);
    printf("%d %d %d\n", a, b, c);
}

