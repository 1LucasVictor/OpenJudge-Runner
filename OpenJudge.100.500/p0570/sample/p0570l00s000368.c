#include <stdio.h>
#include <math.h>

int main(void)
{
  int a, b;
  int ans;
  
  scanf("%d%d", &a, &b);
  
  if((a+b)%2==0){
    ans = (a+b)/2;
    printf("%d", ans);
  }else{
    printf("IMPOSSIBLE");
  }
  
  return(0);
}