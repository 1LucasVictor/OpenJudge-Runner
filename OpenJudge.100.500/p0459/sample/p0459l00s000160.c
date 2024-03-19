#include <stdio.h>

int main(){
  int X, Y;
  scanf("%d %d", &X, &Y);
  
  if(Y%2 == 0){
    if((2*X>=Y/2) && (X<=Y/2)){
      printf("Yes\n");
    }else{
      printf("No\n");
    }
  }else{
    printf("No\n");
  }
  return 0;
}