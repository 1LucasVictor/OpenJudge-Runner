#include<stdio.h>
int main()
{
    long long int x,c,y,a,b,m,h;
    scanf("%lld",&x);
    if(x>=500){
    c = x/500;
    y = c*1000;
    a = x%500;
    b = a/5;
    m  = b*5;
    h = y+m;

    printf("%lld\n",h);
    }
    return 0;
}
