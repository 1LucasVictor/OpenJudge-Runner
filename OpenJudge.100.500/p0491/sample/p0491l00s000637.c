#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
int main()
{
 int n,k;
 scanf("%d %d",&n,&k);
 if(k==1)
 printf("0");
 else if(n%k==0)
 printf("0");
 else if(n<k)
 printf("%d",n);
 else if(n>k)
 printf("%d",abs(n%k-k));
 else
 printf("0");
}