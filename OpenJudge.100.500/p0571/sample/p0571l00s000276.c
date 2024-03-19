#include<stdio.h>
int main(){
  int n,a,b;
  scanf("%d%d%d",&n,&a,&b);
  int cost;
  cost = a*n;
  if (b < cost) cost = b;
  
  printf("%d",cost);
  return 0;
}