#include<stdio.h>

int main(void){
  int i,j;
  scanf("%d %d",&i,&j);
  if((i <= 9 && i >= 1) && (j <= 9 && j >= 1))
    printf("%d",i * j);
  else
    printf("-1");
  return 0;
}
