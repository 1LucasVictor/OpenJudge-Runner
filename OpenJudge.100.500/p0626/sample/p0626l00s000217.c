#include<stdio.h>

int main(void)
{
  int D = 0, N = 0;
  int ans = 0;
  scanf("%d%d", &D, &N);

  if(D == 0){
    ans = 1 + (N-1);
  }else if(D == 1){
    ans = 100 + (N-1);
  }else{
    ans = 200 + (N-1);
  }

  printf("%d\n", ans);

  return 0;
}
