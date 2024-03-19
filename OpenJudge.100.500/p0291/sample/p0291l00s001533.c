#include <stdio.h>

int main(){
  int num, rate, i;
  int min = 0;
  int max = 0;
  int max_get = -100000000;

  scanf("%d", &num);
  
  for (i = 0; i < num; i++){
    scanf("%d", &rate);
    if(min == 0 || min > rate){
      if(max != 0 && max_get < max - min) max_get = max - min;
      min = rate;
      max = 0;
    }else if(max == 0 || max < rate) max = rate;
  }
  if(max_get < max - min) max_get = max - min;
  
  printf("%d\n", max_get);

  return 0;
}