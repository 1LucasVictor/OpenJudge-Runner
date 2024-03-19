#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    int n, s;
    scanf("%d",&n);
    s = n % 10;

    if(s==2 || s==4 || s==5 || s ==7 || s==9){
        printf("hon");
    }else if(s==0 || s==1 || s==6 || s==8){
        printf("pon");
    }else{
        printf("bon");
    }
    
    return 0;
}