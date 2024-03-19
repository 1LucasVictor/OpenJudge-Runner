#include <stdio.h>

int main(void){
  
  int A, H, ATK;
  
  scanf("%d%d", &H, &A);
  if(H % A == 0){
    ATK = H / A;
  }
  else
  {
    ATK = H / A + 1;
  }
  printf("%d", ATK);
  
  return(0);
}