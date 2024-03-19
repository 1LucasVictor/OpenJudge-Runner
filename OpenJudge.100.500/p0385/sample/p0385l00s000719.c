#include <stdio.h>
int main(void){
     
    long long number;
    while(1){
        int keta=0;
    
        scanf("%lld",&number);
         
        if(number==0){
            break;
        }
         
        else{
             
            while(number>0){
            keta += number % 10;
            number/=10;
             
            }
            printf("%d\n",keta);
 
             
             
        }
         
    }
}
