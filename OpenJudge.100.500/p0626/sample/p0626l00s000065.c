//b.c B-Ringo's Favorite Numbers

#include<stdio.h>

int main(void){
    int d,n;
    scanf("%d %d",&d,&n);
    if(d==0){
        n *= 1;
    }else if(d==1){
        n *= 100;
    }else{
        n *= 10000;
    }
    printf("%d\n",n);
    return 0;
}