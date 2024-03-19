#include<stdio.h>

int main(){
  int A = 0; //容器１の最大値
  int B = 0; //容器１に入っている水の量
  int C = 0; //容器2に入っている水の量
  
  scanf("%d %d %d",&A,&B,&C);
  
  while(C > 0 && A > B){
    B++;
    C--;
  }
  
  printf("%d",C);
  
  return 0;
}