#include <stdio.h>
#include<ctype.h>
int main(void){
    
    char str;
    while(1){
            
            scanf("%c",&str);
        
            if(isupper(str)!=0){

                printf("%c",tolower(str));
            }
        
            else if(islower(str)!=0){
                printf("%c",toupper(str));
            }
            
             else if(str=='.'){
                printf(".");
                break;
            }
           
            else{
                printf("%c",str);
            } 
           
             if(str=='\n'){
                
                break;
            }
            
            
        

    }

    
    printf("\n");

    
    
}

