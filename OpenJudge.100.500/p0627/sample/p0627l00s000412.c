#include<stdio.h>
#include<math.h>
int main ()
{
    int a,t,b;
    scanf("%d %d",&a,&b);
    if(a+b>a-b)
        t=a+b;
    else
        t=a-b;
    if(t<a*b)
        t=a*b;
    printf("%d",t);
    return 0;
}

