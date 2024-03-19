#include <stdio.h>

int main(){
  long long int N,K;
   
  scanf("%lld %lld", &N, &K );


  printf("%lld\n", (N%K)*2<K ? N%K : K-N%K );

  return 0;
}
   
