#include<stdio.h>
 
int main(void){
  unsigned int a,b;
  scanf("%d %d",&a,&b);
  if((a * b)%2 == 1){
  	printf("Odd\n");
  }else if((a * b)%2 == 0){
  	printf("Even\n");
  }
	return 0;
}