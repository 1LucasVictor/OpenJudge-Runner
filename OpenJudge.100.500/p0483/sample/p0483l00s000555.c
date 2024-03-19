#include <stdio.h>

int main(void){
	int num;
  	int f = 0;
  	
    if(scanf("%d",&num) == 0);
  
  	if(num / 100 == 7){
     	 f = 1;
    }
  
    num = num % 100;
  
    if(num / 10 == 7){
   	    f = 1; 
    }
  
    num = num % 10;
  
    if(num == 7){
   	    f = 1; 
    }
  
    if(f == 1){
   	    printf("Yes\n"); 
    }else{
   	    printf("No\n"); 
    }
    
	return 0;
}