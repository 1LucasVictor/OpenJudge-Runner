#include<stdio.h>

int main(){

    int x,y,a=0,b=0;

    scanf("%d %d",&x,&y);

    a=x*4;
    b=x*2;

    if(b<=y&&a>=y){
        printf("Yes");

    }else{
        printf("No");
    }
    return 0;




}