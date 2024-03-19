#include <stdio.h>

int main(void){
  int N, i, count=0;
  long int D, x, y;
  scanf("%d%ld",&N, &D);
  
  D = D*D;
  
  for(i = 0; i < N; i++){
    scanf("%ld%ld",&x, &y);
    if(x*x + y*y <= D) count += 1;
  }
  printf("%d\n",count);
  return 0;
}