#include<stdio.h>
int main(void){
  	int a;
  scanf("%d",&a);
  if( a % 2 == 0){
    	printf("%d",a / 2);
  }else{
		printf("%d",(a + 1) / 2);
  }
  return 0;
}