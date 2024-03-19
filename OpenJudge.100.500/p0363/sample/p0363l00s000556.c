#include <stdio.h>
int main ()
{
    int a,c,b,d,e,f;
    scanf("%d %d %d",&a ,&b ,&c);

    if (a>= b && a>=c)
        f=a;
    else if (b>=a && b>=c )
        f=b;
    else if (c>=b && c>=a)
        f=c;
    if (b>=a && a>=c || c>=a && a>=b)
        e=a;
    else if (a>=b && b>=c || b>=a && b>=c)
        e=b;
    else if (a>=c && c>=b || b>=c && c>=a)
        e=c;
    if (a<= b && a<=c)
        d=a;
    else if (b<=a && b<=c )
        d=b;
    else if (c<=b && c<=a)
        d=c;
    printf("%d %d %d",d,e,f);
    printf("\n");



}

