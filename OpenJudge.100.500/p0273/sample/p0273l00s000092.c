#include<stdio.h>

long long fibodp(int n) {
  long long fibodp[200] = {0};
  fibodp[1] = 1;
  fibodp[2] = 2;
  for(int i = 3; i <= n; i++) {
    fibodp[i] = fibodp[i-1] + fibodp[i-2];
  }
   return fibodp[n];
}
int a;
int main(void){
  scanf("%d", &a);
  printf("%lld\n", fibodp(a));
  return 0;
}
