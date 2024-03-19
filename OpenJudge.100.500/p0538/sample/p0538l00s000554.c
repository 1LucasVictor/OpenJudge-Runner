#include <stdio.h>
int main(void)
{
  int A, B, ans;
  scanf("%d %d", &A, &B);
  if(A>9 || B>9){
    ans = -1;
  }
  else{
    ans = A * B;
  }
  printf("%d",ans);
  
  return 0;
}