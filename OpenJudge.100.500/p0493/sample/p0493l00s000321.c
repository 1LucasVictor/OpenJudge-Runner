#include<stdio.h>
int main ()
{   int n;
    scanf("%d",&n);
    long long sum=n/500*1000;
    n=n%500;
    sum+=n/5*5;
    printf("%d",sum);
}