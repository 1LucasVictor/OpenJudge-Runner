#include <stdio.h>
#include<math.h>
int main ()
{
    int a,b,c,d,e,f;
    scanf("%d%d",&a,&b);
    c=a+b;
    d=a*b;
    e=a-b;
    if(c>d&&c>e)
    f=c;
    else if(d>c&&d>e)
    f=d;
    else if(e>c&&e>d)
    f=e;
    printf("%d\n",f);
    return 0;
}