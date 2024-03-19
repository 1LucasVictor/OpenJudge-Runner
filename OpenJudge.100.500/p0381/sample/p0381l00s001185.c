#include "stdio.h"

int main(void){
  int x,y,z,i,k,b,j;

  for(b = 0; b < 1000; b++){
    int a = 0;  
    scanf("%d %d", &x, &y);
    if((x == 0) && (y == 0))break;
    for(i = 1; i <= x; i++){
      for(j = i+1; j <= x; j++){
        k = y - i -j;

        if((i != j) && (i != k) && (j != k) && (k <= x) &&(k > 0) && (j < k)){

          a++;
        }
      }
    }
    printf("%d\n", a);
  }

}

