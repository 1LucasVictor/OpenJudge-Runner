#include<stdio.h>
int main()
{
    int a,b,c,m,n;
    scanf("%d %d %d",&a,&b,&c);
    m=a-b;
    n=c-m;
    //printf("%d",n);
    if(n<0)
        printf("0");
    else
        printf("%d",n);
    return 0;

}
