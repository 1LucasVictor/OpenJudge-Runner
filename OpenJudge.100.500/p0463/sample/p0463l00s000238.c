#include <stdio.h>

int main(void){
    int num;
    scanf("%d", &num);
    if(num%10==2||num%10==4||num%10==5||num%10==7||num%10==9){
        printf("hon");
    }else if(num%10==0||num%10==1||num%10==6||num%10==8){
        printf("pon");
    }else{
        printf("bon");
    }
    return 0;
}