#include<stdio.h>
//初めてのc!!

int main(void){

int a,b,c;

scanf("%d%d%d",&a,&b,&c);

    if(a-b>=c){
        printf("%d",0);
    }else{
        printf("%d",c-(a-b));
    }

    return 0;
}