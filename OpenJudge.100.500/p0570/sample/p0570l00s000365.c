#include<stdio.h>
int main()
{
    int n,a,d,c;
    scanf("%d%d",&a,&c);
    d=a+c;
    if(d%2!=0)
        printf("IMPOSSIBLE");
    else
        printf("%d",d/2);
    return 0;
}