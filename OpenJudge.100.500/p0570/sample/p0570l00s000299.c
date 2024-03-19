#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
  long int a=0;
  long int b=0;
  long int sum=0;
  long int k=0;
  long int x=0;
  scanf("%d%d\n",&a,&b);
  sum=a+b;
   x=sum/2;
  k=ceil(sum/2);
 
  if(k==x)
  {
    printf("%d",k);
  } else
  {
    printf("IMPOSSIBLE");
  }
  return 0;
}