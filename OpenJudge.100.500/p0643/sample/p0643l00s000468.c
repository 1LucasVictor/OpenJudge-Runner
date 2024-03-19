#include <stdio.h>
int main(){
  int i,j;
  scanf("%d %d",&i,&j);
  if(i * j % 2 == 1){
  	printf("Odd");
    return 0;
  }
  printf("Even");
  return 0;
}