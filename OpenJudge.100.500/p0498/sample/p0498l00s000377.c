#include<stdio.h>

int main(void){
  int i;
  scanf("%d",&i);
  if(i%2==0){
    printf("%d",i/2);
  }else{
    printf("%d",(i+1)/2);
  }
  return 0;
}
