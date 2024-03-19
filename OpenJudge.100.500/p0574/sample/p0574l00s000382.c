#include<stdio.h>

int main(){

    int s;
    scanf("%d",&s);
    int flag=0;

    if(s/1000 == s%1000/100 || s%1000/100 == s%100/10 || s%100/10 == s%10){
        flag=1;
    }
    if(flag){
        printf("Bad\n");
    }else{
        printf("Good\n");
    }

    return 0;
}