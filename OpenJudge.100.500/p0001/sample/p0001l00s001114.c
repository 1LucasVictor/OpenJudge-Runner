#include <stdio.h>

int main()
{
  int x, y;
  int sum, ans;
  
  while(scanf("%d %d", &x, &y) != -1){
    sum = x + y;
    
    for(ans = 0; sum != 0; ans++)
      sum = sum / 10;
    
    printf("%d\n", ans);
  }
  
  return 0;
}