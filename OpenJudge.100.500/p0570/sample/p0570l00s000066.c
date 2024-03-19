#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
//　30min
int main(void){
  int a, b;
  int ans = 0;

  scanf("%d%d", &a, &b);

  if((a+b)%2 == 0){
    ans = (a+b) / 2;
  }else if((b-a)%2 == 0){
    ans = (b-a) / 2;
  }else{
    printf("IMPOSSIBLE\n");
    return 0;
  }

  if(ans < 0){
    ans *= (-1);
  }
  printf("%d\n", ans);
  
  return 0;
}