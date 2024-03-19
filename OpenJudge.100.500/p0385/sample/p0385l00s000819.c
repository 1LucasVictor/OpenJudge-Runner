#include <stdio.h>
#include<ctype.h>
#include<string.h>
int main(void){
    
    int number;
    while(1){
        int keta=0;
        scanf("%d",&number);
        
        if(number==0){
            break;
        }
        
        else{
            
            while(number>=1){
            keta += number % 10;
            number/=10;
            
            }
            printf("%d\n",keta);

            
            
        }
        
    }
    
    
}
