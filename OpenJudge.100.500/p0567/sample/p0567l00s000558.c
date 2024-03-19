#include<stdio.h>
int main(){
    int a=0,b=0,c=0,d=0,e=0;
    scanf("%d %d %d",&a ,&b ,&c);
    d=c-(a-b);
    if(d>0){
        printf("%d",d);
    }
    else{
        printf("0");
    }
    return 0;

    }
