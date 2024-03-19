#include <stdio.h>

int main(void){
  int D, N;
  scanf("%d %d", &D, &N);
  if(D == 0){
    if(N != 100){
      printf("%d\n", N);
    }else{
      printf("%d\n", 101);
    }
  }else if(D == 1){
    if(N != 100){
      printf("%d\n", N*100);
    }else{
      printf("%d", 10100);
    }
  }else{
    if(N != 100){
      printf("%d\n", N*10000);
    }else{
      printf("%d\n", 1010000);
    }
  }
  return 0;
}
