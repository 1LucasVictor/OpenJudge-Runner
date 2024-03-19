#include<stdio.h>

int main(void){
  
  char moji1,moji2,moji3;
  
  moji1=getchar();
  moji2=getchar();
  moji3=getchar();
  
  ((moji1=='7')||(moji2=='7')||(moji3=='7')) ? printf("Yes") : printf("No");
  
  return 0;
}