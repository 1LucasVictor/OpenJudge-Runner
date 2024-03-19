#include<stdio.h>
int main()
{
    int k, a, b;
    scanf("%d%d%d",&k, &a, &b);
    int r = (b/k)*k;
    if(a<=r) printf("OK\n");
    else printf("NG\n");
    return 0;
}

