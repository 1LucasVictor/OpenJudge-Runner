#include<stdio.h>

int main(void)
{
  int D = 0, N = 0;
  long ans = 0;
  scanf("%d%d", &D, &N);

  if(D == 0){
    if(N == 100){
      ans = 101;
    }else{
      ans = 1 * N;
    }
  }else if(D == 1){
    if(N == 100){
      ans = 10100;
    }else{
    ans = 100 * N;
    }
  }else{
    if(N == 100){
      ans = 1010000;
    }else{
      ans = 10000 * N;
    }
  }

  printf("%ld\n", ans);

  return 0;
}
