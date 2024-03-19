/*
ex3_2
tomatokan
*/
#include<stdio.h>

int main(void){
    int n,digit;
    scanf("%d",&n);
    digit=n%10;
    if(digit==3){
        /*n%10=3のとき*/
        printf("bon\n");
    }else if(digit==0||digit==1||digit==6||digit==8){
        /*n%10=0,1,6,8のとき*/
        printf("pon\n");
    }else{
        /*n%10=2,4,5,7,9のとき*/
        printf("hon\n");
    }
    return 0;
    
}