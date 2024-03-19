#include<stdio.h>

int main(){
  int h[10000], w[10000], i, j, k = 0;
  while(1){
    scanf("%d %d", &h[k], &w[k]);
    if(h[k] == 0 && w[k] == 0)
      break;
    k++;
  }

  k = 0;
  while(1){
    if(h[k] == 0 && w[k] == 0)
      break;
    for(i = 1; i <= h[k]; i++){
      for(j = 1; j <= w[k]; j++){
        if(i == 1 || i == h[k] || j == 1 || j == w[k])
          printf("#");
        else
          printf(".");
      }
      printf("\n");
    }
    printf("\n");
    k++;
  }

  return 0;
}

