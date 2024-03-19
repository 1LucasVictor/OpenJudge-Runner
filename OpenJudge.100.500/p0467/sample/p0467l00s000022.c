#include <stdio.h>

int main(void)
{
  int x[3];
  int pick;
  int sum;
  int i;
  scanf("%d%d%d%d", &x[0], &x[1], &x[2], &pick);
  i = 1;
  sum = 0;
  while(1){
    if (x[0] != 0 && pick > 0){
      sum++;
      x[0]--;
      pick--;
    }else break;
  }
  while(1){
    if (x[1] != 0 && pick > 0){
      x[1]--;
      pick--;
    }else break;
  }
  while(1){
    if (x[2] != 0 && pick > 0){
      sum--;
      x[2]--;
      pick--;
    }else break;
  }
  printf("%d\n", sum);
  
  return (0);
  
  
}