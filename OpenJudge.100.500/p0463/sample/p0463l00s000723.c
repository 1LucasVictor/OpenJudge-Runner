#include<stdio.h>
int main(void){
  	int a;
  scanf("%d",&a);
  if(a % 10 == 2 || a % 10 == 4 || a % 10 == 5 || a % 10 == 7 || a % 10 == 9){
    	printf("hon");
  }else if(a % 10 == 0 || a % 10 == 1 || a % 10 == 6 || a % 10 == 8){
		printf("pon");
  }else{
		printf("bon");
  }
  return 0;
}