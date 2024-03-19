#include<stdio.h>
int main ()
{
    int  x,a,b,c,d,e,f,g,h,i,j,k,l,re;
    scanf("%d",&x);
    a=x/500;
    b=x%500;
    c=b/100;
    d=b%100;
    e=d/50;
    f=d%50;
    g=f/10;
    h=f%10;
    i=h/5;
    j=h%5;
    k=c*100+e*50+g*10+i*5+j;
    l=k/5;
    re=a*1000+l*5;
    printf("%d\n",re);
    return 0;

}
