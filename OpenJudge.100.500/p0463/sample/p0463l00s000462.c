#include<stdio.h>
int main(void){
  int n, m, k;
  scanf("%d", &n);
  m=n%100;
  k=m%10;
  if(k==3){
    printf("bon");
  }
  else if(k==0 || k==1 || k==6 || k==8){
    printf("pon");
  }
  else{
    printf("hon");
  }
  return 0;
}
  
