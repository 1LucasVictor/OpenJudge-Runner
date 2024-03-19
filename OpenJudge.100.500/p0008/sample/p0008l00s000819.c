#include<stdio.h>
#define MAX_V 10000
int prime[MAX_V + 1];
int sum[MAX_V + 1];
int main(){
  int n, i, k;
  for(i = 2;i <= MAX_V;i++){
    prime[i] = 1;
  }
  for(i=2;i*i<=MAX_V;i++){
    if(prime[i]){
      for(k = 2*i;k <= MAX_V;k += i){
        prime[k] = 0;
      }
    }
  }
  sum[0] = 0;
  for(i = 0;i < MAX_V;i++){
    sum[i+1] = sum[i]+prime[i+1];
  }
  while(scanf("%d", &n) != EOF){
    printf("%d\n", sum[n]);
  }
  return 0;
}