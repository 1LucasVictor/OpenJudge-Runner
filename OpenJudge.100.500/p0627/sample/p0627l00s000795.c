#include<stdio.h>
int main()
{
    int a,b,add,sub,mul;
    scanf("%d%d",&a,&b);
    add=a+b;
    sub=a-b;
    mul=a*b;
    if(add>sub&&add>mul)
        printf("%d",add);
    else if(sub>mul)
        printf("%d",sub);
    else
        printf("%d",mul);

    return 0;
}