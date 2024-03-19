#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
  int unused __attribute__((unused));
  int N, D, i, cnt = 0;
  long long X, Y;

  unused = scanf("%d %d", &N, &D);
  for(i=0; i<N; i++){
    unused = scanf("%lld %lld", &X, &Y);
    if(sqrt(X*X+Y*Y) <= D) cnt++;
  }

  printf("%d", cnt);
  return 0;
}