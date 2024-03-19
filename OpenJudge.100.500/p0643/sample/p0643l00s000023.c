#include<stdio.h>

void main(){
  int a,b;
  scanf("%d",&a);
  scanf("%d",&b);
  if(a*b%2==1){
    printf("Odd");
  }else{
    printf("Even");
  }
}