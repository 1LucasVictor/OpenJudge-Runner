#include <stdio.h>

int main(){
  int A, B, T;
  scanf("%d %d %d", &A, &B, &T);
  int ans=0;
  
  ans = (T/A) * B;
  
  printf("%d", ans);
  
 return 0; 
}