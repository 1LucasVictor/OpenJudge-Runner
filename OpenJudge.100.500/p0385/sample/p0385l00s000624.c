#include <stdio.h>

int main(void) {
    

    

int num = 1;

int i = 0;
    while(num != 0){
        
        char str[10000];
         for(i=0;i<10000;i++){
            
            str[i] = 0;
        }
        scanf("%d",&num);
        
        sprintf(str,"%d",num);
        
 
        
       int sum = 0;
       

        for(i=0;i<10000;i++){
            if(str[i] != 0 ){
                sum += str[i] - '0';
            }
            //printf("%d",sum);
        }
        
        if(sum != 0){
             printf("%d\n",sum);
        }
    }
	return 0;
}