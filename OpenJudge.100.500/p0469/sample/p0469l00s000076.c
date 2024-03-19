#include<stdio.h>
int main()
{
    int k, a, b;
    scanf("%d%d%d",&k, &a, &b);
    if(k>(b-a)) printf("NG\n");
    else printf("OK\n");
    return 0;
}
