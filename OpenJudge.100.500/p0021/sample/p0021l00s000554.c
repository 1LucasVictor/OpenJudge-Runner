#include <stdio.h>

int main(){
  long long int n, i, j, sum, max, in[5000];
  while(scanf("%lld", &n) && n){
    max = -100000;
    for(i = 0;i < n;i++) scanf("%lld", in + i);
    for(i = 0;i < n;i++){
      sum = 0;
      for(j = i;j < n;j++){
        sum += in[j];
        max = sum > max ? sum : max;
      }
    }

    printf("%lld\n", max);
  }

  return 0;
}