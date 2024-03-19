#include<stdio.h>
int main(void){
  
  int n;
  scanf("%d",&n);
  int f = n % 10;
  if(f == 2 || f == 4 || f == 5 || f == 7 || f == 9){
    printf("hon");
  }else if(f == 0 || f == 1 || f == 6 || f == 8){
    printf("pon");
  }else printf("bon");
  
  return 0;
}