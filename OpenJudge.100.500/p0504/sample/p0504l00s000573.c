#include <stdio.h>

int main(void){
  
  int H,A;
  scanf("%d",&H);
  scanf("%d",&A);
  int ans;
  
  if(H%A == 0)  ans = H/A;
  if(H%A != 0)  ans = H/A + 1;
  
  printf("%d\n",ans);
  
  return 0;
}
