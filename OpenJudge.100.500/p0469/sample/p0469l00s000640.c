#include<stdio.h>
int main(void){
	
	int a, b, c;
    
    scanf("%d", &a);
    scanf("%d%d", &b, &c);
    
 	int d = b%a;
  	if(b-d+a > c){
    	printf("NG");
      	return 0;
    }
       
    printf("OK");
    return 0;
}