#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    int N,amari;
    scanf("%d",&N);
    amari = N%10;
    if(amari==2||amari==4||amari==5||amari==7||amari==9){
        printf("hon\n");
    }else if(amari==3){
        printf("bon\n");
    }else{
        printf("pon\n");
    }
    return 0;
}