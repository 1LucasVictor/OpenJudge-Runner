#include<stdio.h>

int main(){
  int A,B,C;
  
  scanf("%d %d",&A,&B);
  
  if(A<=9 && B<=9){
    C=A*B;
    printf("%d",C);
  }else{
    printf("-1");
  }
  
  return 0;
  
}