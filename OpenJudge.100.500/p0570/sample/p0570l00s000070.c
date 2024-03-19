#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
  int a=0;
  int b=0;
  int sum=0;
  int k=0;
  int x=0;
  scanf("%d%d\n",&a,&b);
  sum=a+b;
   x=sum/2;
  k=ceil(sum/2);
 
  if(x==k)
  {
    printf("%d",k);
  }else
  {
    printf("IMPOSSIBLE");
  }
  return 0;
}