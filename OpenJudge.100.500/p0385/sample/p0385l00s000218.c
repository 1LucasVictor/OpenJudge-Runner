#include <stdio.h>

int main(void) {
    
    int x=0,num4,num3,num2,num1;
    
    while(1){
        
        scanf("%d",&x);
    
        if(x == 0){
            break;
        }
        
        num4 = x / 1000;
        if(num4 != 0){
 
        }
    
        num3 = (x -(num4 * 1000) ) /100;
        if(num3 != 0){
   
        }
        num2 = (x - ( (num3 * 100) + (num4 * 1000) ) ) / 10;
        if(num2 != 0){
  
        }
    
        num1 = (x - ( (num2 * 10 )+ (num3 * 100) + (num4 * 1000) ) );
        if(num1 != 0){
      
        } 
        
         printf("%d\n",num4+num3+num2+num1);
    }
	return 0;
}