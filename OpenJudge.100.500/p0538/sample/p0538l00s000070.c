#include <stdio.h>

int main(void){
  int i,j;
  scanf("%d%d",&i,&j);
  if(i<=9&&j<=9){
	printf("%d",i*j);
  }else{
	printf("-1");
}
}