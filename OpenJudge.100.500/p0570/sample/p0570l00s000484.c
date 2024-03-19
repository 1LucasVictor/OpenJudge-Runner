#include<stdio.h>
#include<stdlib.h>
main()
{
  long long int a,b;
  scanf("%I64d %I64d",&a,&b);
  if((a+b)%2==0)
  {
    printf("%I64d",(a+b)/2);
  }
  else
  {
    printf("IMPOSSIBLE");
  }
  
}