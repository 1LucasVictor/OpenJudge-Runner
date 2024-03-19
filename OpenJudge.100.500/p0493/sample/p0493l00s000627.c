# include<stdio.h>
int main()
{
    long x,m,n,g,d;
    scanf("%ld",&x);
    m=x/500;
    n=x%500;
    d=n/5;
    g=m*1000+d*5;
    printf("%ld",g);
    return 0;
}