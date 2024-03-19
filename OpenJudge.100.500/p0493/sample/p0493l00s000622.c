#include<stdio.h>
 
int main(void){
  int x;
  int k = 0;
  scanf("%d",&x);
  
  if(0 <= x && x <= 1000000000){
 	k += (x/500) * 1000;
  	x = x % 500;
  	k += (x/5) * 5;
  
	printf("%d",k);
  }
  return 0;
}