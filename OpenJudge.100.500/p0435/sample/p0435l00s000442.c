#include <stdio.h>

int main(void){
  int x, y, N, D, i=0;
  
  scanf("%d %d", &N, &D);
  for(int j=0; j<N; j++){
    scanf("%d %d", &x, &y);
    if(x*x+y*y<=D*D)
      i++;
  }
  printf("%d\n", i);
return 0;}
