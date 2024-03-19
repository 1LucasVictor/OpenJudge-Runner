#include <stdio.h>

int main(void){
  int s;
  scanf("%d", &s);
  if(s%9==0){
    printf("0\n");
  }else if(s%9==1){
    printf("1\n");
  }else if(s%9==2){
    printf("2\n");
  }else{
    printf("3\n");
  }
  
  return 0;
}