#include<stdio.h>
int d,n;
int main(void){
    scanf("%d%d",&d,&n);
    if(d == 0){
        printf("%d",n);
    }else if(d == 1){
        if(n == 0){
            printf("100");
        }
        printf("%d",n*100);
    }else if(d == 2){
        if(n == 0){
            printf("10000");
        }
        printf("%d",n*10000);
    }
    return 0;
}