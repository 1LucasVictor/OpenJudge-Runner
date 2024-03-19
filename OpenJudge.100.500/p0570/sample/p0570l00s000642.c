#include<stdio.h>
#include<stdlib.h>
int main()
{
  int a=0;
  int b=0;
  int sum=0;
  double k=0;
  int x=0;
  scanf("%d%d\n",&a,&b);
  sum=a+b;
  k=sum/2;
  x=sum/2;
  if(x==k-0.5)
  {
    printf("IMPOSSIBLE",k);
  } else{
    printf("%d\n",x);
  }
  return 0;
}