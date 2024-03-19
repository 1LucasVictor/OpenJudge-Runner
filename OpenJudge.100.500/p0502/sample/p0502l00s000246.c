#include<stdio.h>
#include<stdlib.h>

int main(void){
  int N,i;
  int x[105];
  scanf("%d\n",&N );
  for(i=0; i < N; i++){
    scanf("%d\n",&x[i] );
    if(x[i] % 2 == 0){
      if((x[i] % 3 != 0) && (x[i] % 5 != 0)){
        printf("DENIED" );
        exit(0);
      }
    }
  }
  printf("APPROVED");
  return 0;
}