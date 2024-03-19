#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int main()
{
 long long int a,b,c;
  
  scanf("%lld",&a);
  
  b=a/500;
  
  c=a % 500;
  
  b=(b*1000)+((c/5)*5);
  
  printf("%lld",b);
  
  return 0;
  
}