#include<stdio.h>

int main(){
  int n,k;
  scanf("%999d",&n);
  n = n % 10;
  if(n==3) {
    printf("bon\n");
  }else if(n==0 || n==1 || n==6 || n==8){
    printf("pon\n");
  }else {
    printf("hon\n");
  }
  return 0;
}