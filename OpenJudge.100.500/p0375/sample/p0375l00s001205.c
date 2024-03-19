#include <stdio.h>

int main(){
  int n, x;
  scanf("%d", &n);

  for(int i = 1; i <= n; i++){
        if(i % 3 == 0){
          printf(" %d", i);
          continue;
        }

        x = i;
        while(x){
          if(x % 10 == 3){
                printf(" %d", i);
          }
          x /= 10;
        }
  }

  printf("\n");
  return 0;
}
