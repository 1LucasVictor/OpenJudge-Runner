#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    int i=a*b;
    int j=c;
    if(i<j)
        printf("%d",i);
    else
        printf("%d",c);
    return 0;
}
