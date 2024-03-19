#include<stdio.h>


int main()
 {
  long long int a,b,c,d,sum=0 ;
  char s[911];
  scanf("%lld",&a) ;
  b=a/500 ;
  sum=sum+b*1000 ;
  c=a%500 ;
  d=c/5 ;
  sum=sum+d*5 ;
  printf("%lld",sum) ;
  return 0 ;
 }