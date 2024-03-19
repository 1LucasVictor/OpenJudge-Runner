#include <stdio.h>
#define N 6

int main(void)
{
  int input[N];
  int i,j;
  
  for( i = 0; i < N; i++ ){
    scanf("%d", input+i);
  }
  
  for( i = 0; i < N; i++ ){
    for( j = i + 1; j < N; j++){
      if(input[5] < input[j] - input[i]){
        printf(":(\n");
        return 0;
      }
    }
  }
  
  printf("Yay!\n");
  
  return 0;
}