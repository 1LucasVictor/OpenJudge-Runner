#include<stdio.h>
int main(){
  int a,b;
  scanf("%d %d",&a,&b);
  if((8 - a) * (8 - b) < 0){
    printf(":(\n");
  }else{
    printf("Yay!\n");
  }
  return 0;
}