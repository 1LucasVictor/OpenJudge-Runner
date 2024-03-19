#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){
  int H, N, A, sum = 0;
  scanf("%d %d", &H, &N);

  for(int i=0; i<N; i++){
    scanf("%d", &A);
    sum += A;
  }

  if(sum >= H)
    printf("Yes\n");
  else
    printf("No\n");
  
  return 0;
}
