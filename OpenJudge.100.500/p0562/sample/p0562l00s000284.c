#include<stdio.h>
int main(void){
  int A,B,count=1,sum=0;
  scanf("%d %d",&A,&B);
  while(count<B){
    sum++;
    count+=A-1;
  }
  printf("%d\n",sum);
  return 0;
}