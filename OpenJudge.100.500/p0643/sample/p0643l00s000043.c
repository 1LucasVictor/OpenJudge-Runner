#include <stdio.h>

int main(void){
	int a,b;
  	scanf("%d", &a);
  	scanf("%d", &b);
  
  	int ans = 0;
  ans = a*b;
  
  if(ans%2 == 0){
	printf("Even");
  }else{
   printf("Odd"); 
  }
return 0;

}