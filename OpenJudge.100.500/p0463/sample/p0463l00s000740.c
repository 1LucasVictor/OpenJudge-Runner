#include<stdio.h>

int main(void){
    int N,temp=1000;

    scanf("%d",&N);

    if(N>=100){
        temp = N%100;
        if(temp>=10){
            temp = temp%10;
        }
    }
    if(temp==1000 && N>=10){
        temp = N%10;
    }
    if(temp==1000 && N>=0){
        temp = N;
    }

    if(temp==2||temp==4||temp==5||temp==7||temp==9)
        printf("hon");
    if(temp==0||temp==1||temp==6||temp==8)
        printf("pon");
    if(temp==3)
        printf("bon");

    return 0;
}