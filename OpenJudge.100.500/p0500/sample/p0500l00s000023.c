#include<stdio.h>
#include<stdlib.h>

int main(void){
  int N,M,i,j=0;
  int s[8],c[8];
  scanf("%d %d\n",&N,&M );
  for(i=0;i<M;i++){
    scanf("%d %d\n",&s[i],&c[i] );
  }
  for(i=0;i<1000;i++){
    while(1){
      if(s[j] == 1){
        if((c[j] != i/100)||(i<100)){
          break;
        }
      }else if(s[j] == 2){
        if((c[j] != (i/10)%10)||(i<10)){
          break;
        }
      }else{
        if(c[j] != i%10){
          break;
        }
      }
      if(j == M-1){
        printf("%d\n", i);
        exit(0);
      }
      j++;
    }
    j = 0;
  }
  printf("-1");
  return 0;
}