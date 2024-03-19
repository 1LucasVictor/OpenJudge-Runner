#include <stdio.h>

int main(void){
  
  int i, N, H, A, ATK=0;
  
  scanf("%d%d", &H, &N);
  
  for(i = 0; i < N; i++){
    scanf("%d", &A);
    ATK = ATK + A;
  }
    
  if(ATK >= H){
    printf("Yes");
  }
  else
  {
    printf("No");
  }
  
  return(0);
}