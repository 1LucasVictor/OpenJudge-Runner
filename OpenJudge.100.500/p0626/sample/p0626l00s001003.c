//b.c B-Ringo's Favorite Numbers

#include<stdio.h>

int main(void){
    int d,n;
    scanf("%d %d",&d,&n);
    if(d==0){
        if(n==100){
            n*=1;
            n+=1;
        }else{
            n*=1;
        }
    }else if(d==1){
        if(n==100){
            n*=100;
            n+=100;
        }else{
            n*=100;
        }
    }else{
        if(n==100){
            n*=10000;
            n+=10000;
        }else{
            n*=10000;
        }
    }
    printf("%d\n",n);
    return 0;
}