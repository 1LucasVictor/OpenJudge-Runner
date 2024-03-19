#include <stdio.h>

int main(){
  int N, A, B;
  scanf("%d %d %d", &N, &A, &B);
  int ans = N*A;
  if (ans > B){
    ans = B;
  }
  printf("%d\n", ans);
  return 0;
}