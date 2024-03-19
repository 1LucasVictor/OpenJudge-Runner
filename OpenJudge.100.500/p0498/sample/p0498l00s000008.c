#include <stdio.h>

int main(void){
  int N, ans;
  scanf("%d", &N);
  ans = N % 2;

  if(ans == 0)
    printf("%d\n", N/2);
  else
    printf("%d\n", N/2+1);

  return 0;
}
