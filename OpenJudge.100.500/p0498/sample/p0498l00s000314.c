#include<stdio.h>

int main(void){
  int N;
  //入力
  scanf("%d", &N);
  //出力
  if(N % 2 == 0){ 
    printf("%d",N / 2);
  }else{
    printf("%d",N / 2 + 1);
  }
  
  return 0;
}
  
   
  