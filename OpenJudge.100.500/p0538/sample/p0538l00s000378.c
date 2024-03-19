#include <stdio.h>

int main(void){
  int A, B, ans;
  
  scanf("%d%d", &A, &B);
  
  if(A>=10 || B>=10){
    ans=-1;
  }
  else ans=A*B;
  
  printf("%d", ans);
  
  return 0;
}
