#include<stdio.h>
int main()
{
    int a,b,p,m,i;

    scanf("%d %d",&a,&b);

    p = a+b;
    m = a-b;
    i = a*b;

    if(p>m && p>i) printf("%d",p);

    else if(m>p && m>i) printf("%d",m);

    else if(i>m && i>p) printf("%d",i);

    else if(a==0 && b==0) printf("0");

    return 0;
}
