#include <stdio.h>

int main(){
  int A,B,C,D;
  scanf("%d",&D);
  A=D/100;
  B=(D/10)%10;
  C=D%10;
  
  
  if(A==7 || B==7 || C==7){
    printf("Yes\n");
  }else{
    printf("No\n");
  }
  return 0;
}