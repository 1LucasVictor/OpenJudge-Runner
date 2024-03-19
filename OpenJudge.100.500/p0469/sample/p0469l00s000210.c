#include<stdio.h>

int main(void){
  int K,A,B;
  scanf("%d\n",&K );
  scanf("%d %d\n",&A,&B );
  for(int i=A; i<=B; i++){
    if(i % K ==0){
      printf("OK\n" );
      return 0;
    }
  }
  printf("NG\n" );
  return 0;
}
