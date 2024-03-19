#include<stdio.h>
int main(void){
  int A,B,X;
  scanf("%d %d %d",&A,&B,&X);
  if(X-A>B || A>X){
    printf("NO");
  }else{
    printf("YES");
  }
  return 0;
}