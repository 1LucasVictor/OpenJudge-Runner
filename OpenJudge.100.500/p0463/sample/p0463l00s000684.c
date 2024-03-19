#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if(0<n/10){
        n=n%10;
        if((n==2)||(n==4)||(n==5)||(n==7)||(n==9)){
            printf("hon\n");
        }else if((n==0)||(n==1)||(n==6)||(n==8)){
            printf("pon\n");
        }else if(n==3){
            printf("bon\n");
        }
    }else{
        if((n==2)||(n==4)||(n==5)||(n==7)||(n==9)){
            printf("hon\n");
        }else if((n==0)||(n==1)||(n==6)||(n==8)){
            printf("pon\n");
        }else if(n==3){
            printf("bon\n");
        }
    }
}