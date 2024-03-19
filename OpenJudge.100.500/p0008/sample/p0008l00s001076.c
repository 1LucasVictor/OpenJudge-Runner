#include<stdio.h>
int prime[1000001];
int sum[1000002];
int main(){
  int right, i,k,ans;
  sum[0] = 0;
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
  for(i = 2; i <= 1000000; i++){
    sum[i+1] = sum[i] + prime[i];
  }
  while(scanf("%d",&right) != EOF){
     ans = sum[right+1];
     printf("%d\n",ans);
  }  
  return 0;
}