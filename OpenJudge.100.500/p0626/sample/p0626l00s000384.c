#include <stdio.h>

int main(){
  int D, N, i, ans;
  scanf("%d %d", &D, &N);
  if(D==0) ans = 1;
  if(D==1) ans = 100;
  if(D==2) ans = 10000;

  if(N==100) printf("%d\n", 100*ans+1);
  else printf("%d\n", N*ans);

  return 0;
}