#include<stdio.h>
int main()
{
    int a,b,p,m,i;

    scanf("%d %d",&a,&b);

    p = a+b;
    m = a-b;
    i = a*b;

    if(p>m && p>i) printf("%d\n",p);

    else if(m>p && m>i) printf("%d\n",m);

    else if(i>m && i>p) printf("%d\n",i);

    else if(p==0 && m==0 && i==0) printf("%d\n",p);

    return 0;
}