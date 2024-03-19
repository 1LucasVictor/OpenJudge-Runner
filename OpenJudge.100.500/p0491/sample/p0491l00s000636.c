#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
int main()
{
 long long int n,k;
 scanf("%lld %lld",&n,&k);
 if(k==1)
 printf("0");
 else if(n%k==0)
 printf("0");
 else if(n<k)
 printf("%lld",n);
 else if(n>k)
 printf("%lld",abs(n%k-k));
 else
 printf("0");
}