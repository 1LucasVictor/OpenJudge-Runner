#include<stdio.h>
    int main(void){
    int x;
    scanf("%d",&x);
    printf("%d:%d:%d\n",x/3600,x%3600/60,x%3600%60);
    return 0;
    }