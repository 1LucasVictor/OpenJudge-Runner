#include <stdio.h>

int main(void){

        int n;
        scanf("%d",&n);

        if(n%10==2 || n%10==4 || n%10==5 || n%10==7 ||n%10==9){
                printf("hon\n");
        }else if(n%10==3){
                printf("bon\n");
        }else{
                printf("pon\n");
        }   

return 0;
}