#include <stdio.h>

int main(void){
  long long D, N;
  scanf("%ld %ld", &D, &N);
  if(D == 0){
    printf("%ld\n", N);
  }else if(D == 1){
    printf("%ld\n", N*100);
  }else{
    printf("%ld\n", N*10000);
  }
  return 0;
}
