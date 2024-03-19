#include <stdio.h>

int main(){
  int A,B,X;
  scanf("%d %d %d",&A,&B,&X);
  if(X>=A && A+B>=X){
    printf("YES\n");
  }else{
    printf("NO\n");
  }
  return 0;
}