#include <stdio.h>

int main(void){
  int D, N;
  int i, j, k;
  scanf("%d %d", &D, &N);
  if(D == 0){
    printf("%d\n", N);
  }
  if(D == 1){
    printf("%d\n", N*100);
  }
  if(D == 2){
    printf("%d\n", N*10000);
  }
  return 0;
}
