#include <stdio.h>

int main(){
  int A,B,C;
  scanf("%d %d %d",&A,&B,&C);
  if(A==7 && B==5){
    A=5;
    B=7;
  }
   if(C==7 && B==5){
    C=5;
    B=7;
  }
  if(A==5 && B==7){
    if(C==5) printf("YES");
    else printf("NO");
    return 0;
  }
  else printf("NO");
  return 0;
}