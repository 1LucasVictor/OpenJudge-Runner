#include<stdio.h>
int main(){
  int X,count;
  scanf("%d",&X);
  count=X/500;
  count*=1000;
  X=X%500;
  X/=5;
  count+=X*5;
  printf("%d\n",count);
  return 0;
}