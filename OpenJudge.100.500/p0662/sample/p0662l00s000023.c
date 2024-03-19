#include<stdio.h>
int main()
{
    int a,b,c,d,s1,s2;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    if(a>=c)
    s1=a;
    else
    s1=c;
    
    if(b>=d)
    s2=d;
    else
    s2=b;
    
    if((s2-s1)>0)
    printf("%d",s2-s1);
    else
    printf("0");
}