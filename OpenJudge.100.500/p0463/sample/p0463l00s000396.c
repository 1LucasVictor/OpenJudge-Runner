#include<stdio.h>

void main(){
  int N,keta;
  scanf("%d",&N);
  keta=N%10;
  switch(keta){
    case 3:
      printf("bon");
      break;
    case 0:
    case 1:
    case 6:
    case 8:
      printf("pon");
      break;
    default:
      printf("hon");
      break;
  } 		
}