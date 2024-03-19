#include<stdio.h>
int main(void){
	
	int a, b, c;
    
    scanf("%d", &a);
    scanf("%d%d", &b, &c);
    
    if(c-b-a > 0){
    	printf("OK");
    	return 0;
    }
    
 	int d = b%a;
  	if(b-d+a > c){
    	printf("NG");
    }
       
    printf("OK");
    return 0;
}