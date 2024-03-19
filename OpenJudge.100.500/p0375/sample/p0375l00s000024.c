#include <stdio.h>
int main(void){
    int i,num;
    scanf("%d",&num);
    
    for(i=1;i<=num;i++){
        
        if(i%10==3)
        printf(" %d",i);
        else if(i%3==0){
            
            if(i==num){
                printf(" %d",i);
            }
            else
            printf(" %d",i);
        }
    
    }

    printf("\n");
}

