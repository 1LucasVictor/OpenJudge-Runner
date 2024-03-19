#include <stdio.h>

int main(){
  int n, i, j;
  int prime[100001] = {0};
  int cnt[100002] = {0};
  for(i = 2; i <= 10000; i++) {
    prime[i] = 1;
  }
  for(i = 2; i*i <= 10000; i++) {
    if(prime[i]) {
      for(j = 2 * i; j <= 10000; j += i) {
        prime[j] = 0;
      }
    }
  }
  for(i=0; i <= 10001; i++){
    cnt[i+1] = cnt[i] + prime[i];
  }
  while(scanf("%d", &n) != EOF){
    printf("%d\n", cnt[n+1]);
  }
  return 0;
}