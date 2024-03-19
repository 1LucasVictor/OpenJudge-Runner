#include<stdio.h>

int main (){
  int N;
  scanf("%d",&N);
  int n1 = N%10;
  if(n1 == 3){
    printf("bon");
  }else if(n1 == 0 ||n1 == 1){
     printf("pon");
  }else if(n1 == 6||n1 == 8){
     printf("pon");
  }else{
     printf("hon");
  }
  
  return 0;
}