#include <stdio.h>
int prime[1000001];
int main(){
  int i, k, n,cnt = 0;
  for(i = 2; i <= 1000000; i++){
    prime[i] = 1;
  }
  for(i = 2; i*i <= 1000000; i++){
    if(prime[i]){
      for(k = 2 * i; k <= 1000000; k += i){
        prime[k] = 0;
      }
    }
  }
  while(1){ 
    if(scanf("%d", &n) == EOF) break;
    for(i = 2; i <= n; i++){
      if(prime[i] == 1){
        cnt++;
      }
    }
    printf("%d\n",cnt);
    cnt = 0;
  }
  return 0;
}