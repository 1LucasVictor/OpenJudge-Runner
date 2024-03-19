#include <stdio.h>

int main(void){
    
    int n;
    int i;
    int num;
    int flag;
    
    flag=0;
    scanf("%d", &n);
    
    for(i=0;n>i;i++){
        scanf("%d",&num);
        if(0==num%2){
            if((0==num%3)||(0==num%5)){
                flag=1;
            }
            else{
                printf("DENIED");
                return 0;
            }
        }
    }
    if(1==flag){
        printf("APPROVED");
    }else if(0==flag){
        printf("DENIED");
    }
}
