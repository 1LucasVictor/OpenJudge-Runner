#include<stdio.h>
int main(void){
  int N,n;
  scanf("%d",&N);
  n=N%10;
  if(n==3){
    printf("bon\n");
  }
  else if(n==0 || n==1 || n==6 || n==8){
    printf("pon\n");
  }
  else{
    printf("hon\n");
  }
  return 0;
}
