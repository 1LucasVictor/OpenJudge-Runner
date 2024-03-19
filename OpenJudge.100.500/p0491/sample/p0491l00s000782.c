#include<stdio.h>

int main(){
  int N, K;
  int y, x;
  scanf("%d %d",&N,&K);
  x = N % K;
  y = K - x > 0 ? K -x : x -K;
  if(x < y ) printf("%d\n",x);
  else printf("%d\n",y);
}
