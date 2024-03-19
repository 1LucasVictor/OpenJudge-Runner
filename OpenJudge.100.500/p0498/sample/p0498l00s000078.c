#include <stdio.h>
 
int main(void) {
  int N,Ans;
  scanf("%d", &N);
  if (N%2==0) {
    Ans = N/2;
  }
  else {
    Ans = (N+1)/2;
  }
  printf("%d", Ans);
  return 0;
}