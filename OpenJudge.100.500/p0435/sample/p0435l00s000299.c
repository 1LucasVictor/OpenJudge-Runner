#include <stdio.h>
#include <math.h>

int main(void){
  int x, y, N, D, i=0;
  
  scanf("%d %d", &N, &D);
  for(int j=0; j<N; j++){
    scanf("%d %d", &x, &y);
    if(sqrt(x*x+y*y)<=D)
      i++;
  }
  printf("%d\n", i);
return 0;}
