#include <stdio.h>

int main(void){
  int N,K;
  scanf("%d",&N);
  scanf("%d",&K);
  int p = 0;
  int m = 0;
  p = N % K;
  m = (p - K) * -1;
  if(p < m){
    printf("%d",p);
  }
  else{
    printf("%d",m);
  }
  return 0;
}
