#include <stdio.h>

int main (void){
  int n, i;

  scanf("%d", &n);

  for(i = 1; i < n + 1; i++){
      if(i % 3 == 0){
        if(i % 10 != 3){
           printf(" %d", i);
        }
      }
      if(i % 10 == 3){
        printf(" %d", i);
      }
  }
  printf("\n");

  return 0;
}