#include<stdio.h>
#include<stdlib.h>
int main()
{
  int K,A,B,i;
  scanf("%d",&K);
  scanf("%d%d",&A,&B);
  for(i=1;i<=1000;i++)
  {
    if(A<=K*i&&K*i<=B)
    {
      printf("OK");
      exit(0);
    }
  }
  printf("NG");
}