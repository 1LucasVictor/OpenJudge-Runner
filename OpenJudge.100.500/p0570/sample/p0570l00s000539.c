#include<stdio.h>
int absv(int x);
int main()
{
    int a,b,k;
    scanf("%d%d",&a,&b);
    k=(a+b)/2;
    int c=a-k;
    int d=b-k;
    int absv_c= absv(c);
    int absv_d= absv(d);
    if(absv_c == absv_d) printf("%d",k);
    else printf("IMPOSSIBLE");
    return 0;
}
int absv(int x)
{
    int a
    ;
    if(x<0)
    {
       a=x*(-1);
       return a;
    }
    else return x;
}
