#include<stdio.h>

int main(){
  int N, K;
  int y, x;
  scanf("%d %d",&N,&K);
  x = N % K;
  y = x - K > 0 ?  x - K : K - x;
  if(x < y ) printf("%d\n",x);
  else printf("%d\n",y);
}
