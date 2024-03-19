#include<stdio.h>
int main()
{
    int a,b,s,d,i;
    scanf("%d %d",&a,&b);
    s=a+b;
    d=a-b;
    i=a*b;
    if(s>d && s>i)printf("%d\n",s);
    else if(d>s && d>i)printf("%d\n",d);
    else if(i>s && i>d)printf("%d\n",i);
}