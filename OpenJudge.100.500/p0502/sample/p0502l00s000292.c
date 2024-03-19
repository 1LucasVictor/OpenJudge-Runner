#include <stdio.h>

int main(void){
    
    int n;
    int i;
    int flag;
    
    flag=0;
    scanf("%d", &n);
    int array[n];
    
    for(i=0;n>i;i++){
        scanf("%d",&array[i]);
    }
    
    for(i=0;n>i;i++){
        if(0==array[i]%2 && flag!=2){
            if(!((0==array[i]%3)||(0==array[i]%5))){
                printf("DENIED");
                return 0;
            }
        }
    }
    printf("APPROVED");
    return 0;
}

