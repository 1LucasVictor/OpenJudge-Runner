#include<stdio.h>
int main()
{
  long a,b,k,diff;
  scanf("%ld%ld",&a,&b);
  k=(a+b)/(long)2;
  diff=(a+b)%(long)2;
  if(diff==0)
  {
    printf("%ld\n",k);
  }
  else
  {
    printf("IMPOSSIBLE\n");
  }
  return 0;
}