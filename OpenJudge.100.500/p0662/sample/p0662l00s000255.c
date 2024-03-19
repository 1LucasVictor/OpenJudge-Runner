#include <stdio.h>

int main(){
  int A, B, C, D;

  scanf("%d%d%d%d", &A, &B, &C, &D);

  if(B < C){
    printf("%d\n", 0);
  }else if(A < C){
    if(B < D){
      printf("%d\n", B - C);
    }else{
      printf("%d\n", D - C);
    }
  }else{
    if(B < D){
      printf("%d\n", B - A);
    }else if(A < D){
      printf("%d\n", D - A);
    }else{
      printf("%d\n", 0);
    }
  }
  
  return 0;
}
