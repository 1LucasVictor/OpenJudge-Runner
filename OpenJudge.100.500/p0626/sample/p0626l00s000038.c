#include<stdio.h>

int main(void)
{
  int D = 0, N = 0;
  long ans = 0;
  scanf("%d%d", &D, &N);

  if(D == 0){
    ans = 1 + (N-1);
  }else if(D == 1){
    ans = 100 * N;
  }else{
    ans = 10000 * N;
  }

  printf("%ld\n", ans);

  return 0;
}
