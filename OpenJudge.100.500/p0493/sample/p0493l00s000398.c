#include<stdio.h>

int main(void){
    int coins,point=0;
    scanf("%d", &coins);
    point = (coins / 500) * 1000;
    coins = coins % 500;
    point  += (coins /5) * 5;
    printf("%d", point);
    return 0;
}