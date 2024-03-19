#include <stdio.h>

#define NUMBER 10000

int main(void){
  int i,j;
  long long num;
  int x[NUMBER];
  long long max,min,sun;

  scanf("%d", &num);
    
  for (i = 0;i < num;i++){
    scanf("%d",&x[i]);
    sun += x[i];
  }

  min = max = x[0];
  for (i = 1;i < num;i++){
    if (x[i] > max)
      max = x[i];
    if (x[i] < min)
      min = x[i];
  }
  printf("%d %d %d\n",min,max,sun);

  return 0;
}