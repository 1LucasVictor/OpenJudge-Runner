#include<stdio.h>
int main()
{
    int a,b,n,te,tx;
    scanf("%d%d%d",&n,&a,&b);
    te=n*a;
    tx=b;
    if(te<tx) printf("%d",te);
    else printf("%d",tx);
    return 0;
}
