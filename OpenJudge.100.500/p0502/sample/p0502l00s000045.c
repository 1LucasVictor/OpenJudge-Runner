#include <stdio.h>
#include <stdlib.h>
int main(void){

  int N,i;
  int *data;

  scanf("%d",&N);

  data = (int*)malloc(sizeof(int)*N);
  for(i=0;i<N;i++){
    scanf("%d",&data[i]);
  }
  int j = 0;
  for(i=0;i<N;i++){
    if(data[i]%2 == 0 && data[i]%3 != 0 && data[i]%5 != 0){
      j += 1;
    }
  }
  if(j == 0){
    printf("APPROVED");
  }
  else printf("DENIED");

  return 0;
}