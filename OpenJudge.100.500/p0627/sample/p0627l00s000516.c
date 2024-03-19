#include <stdio.h>
#include <limits.h>
int main ()
{
    int a=0,b=0,soma=0,sub=0,multi=0;
    scanf("%d %d",&a,&b);
    soma= a+(b);
    sub= a-b;
    multi=a *b;

    if(soma>sub || soma>multi)
    {
        printf("%d",soma);
    }
    else if(sub>soma|| sub>multi)
    {
        printf("%d",sub);

    }
    else
    {
        printf("%d",multi);
    }
    return 0;
}
