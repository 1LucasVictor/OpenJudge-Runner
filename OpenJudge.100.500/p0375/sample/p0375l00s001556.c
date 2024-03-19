#include<stdio.h>
int main(void){
    int i,n;
    scanf("%d",&n);
    for(i = 1;i <= n;i++){
        if(i % 3 == 0||i % 10 == 3||i < 100&&i / 10 == 3||i >= 100&&i < 1000&&i / 100 == 3||i >=1000&&i < 10000&&i / 1000 == 3){
            printf(" %d",i);
        }
    }

    printf("\n");

    return 0;
}