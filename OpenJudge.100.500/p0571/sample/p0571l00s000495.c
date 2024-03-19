#include<stdio.h>
int main(void)
{
 int N,A,B;
 int taxi,train;
 int min=0;
 scanf("%d %d %d",&N,&A,&B);
 train=N*A;
 taxi=B;
 if(taxi<train)
  min=taxi;
 else
  min=train;
 printf("%d",min);
 return 0;
}