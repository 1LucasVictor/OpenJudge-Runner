#include <stdio.h>

int main(){
  int num, rate, i;
  int min = -1;
  int max = 0;
  int max_get = 0;

  scanf("%d", &num);
  
  for (i = 0; i < num; i++){
    scanf("%d", &rate);
    if(min == -1 || min > rate){
      if(max_get < max - min) max_get =max - min;
      min = rate;
      max = -1;
    }else if(max == -1 || max < rate) max = rate;
  }
  if(max_get < max - min) max_get = max - min;
  
  printf("%d", max_get);

  return 0;
}