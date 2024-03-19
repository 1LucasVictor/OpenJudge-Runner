#include <stdio.h>

int main(void){
  int n,x,a = 0,i,j,k;
  while(1){
    scanf("%d %d",&n,&x);
    if(n == 0 && x == 0){
      break;
    }
    for(i = 1; i <= n; i++){
      for(j = 2; j <= n; j++){
        for(k = 3; k <= n; k++){
          if(i != j && j != k && k != i && i + j + k == x && i <  j && j < k){
            a += 1;
          }
        }
      }
    }
    printf("%d\n",a);
  }
  return 0;
}
