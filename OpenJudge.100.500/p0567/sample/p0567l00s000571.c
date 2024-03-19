#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int x=a-b;
    if((b+c)>a)
        printf("%d",c-x);
    else
        printf("0");
}