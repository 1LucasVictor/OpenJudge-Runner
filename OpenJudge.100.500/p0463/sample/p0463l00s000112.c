#include<stdio.h>
int main(void){
    int a,b,n;
    scanf("%d",&n);
    a=n/10;
    b=n-10*a;
    if(b==2){
        printf("hon");
    }
    if(b==0){
        printf("pon");
    }
    if(b==3){
        printf("bon");
    }
    if(b==4){
        printf("hon");
    }
    if(b==1){
        printf("pon");
    }
    if(b==5){
        printf("hon");
    }
    if(b==7){
        printf("hon");
    }
    if(b==6){
        printf("pon");
    }
    if(b==9){
        printf("hon");
    }
    if(b==8){
        printf("pon");
    }
    
    return 0;
}