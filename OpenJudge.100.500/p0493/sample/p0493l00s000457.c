#include<stdio.h>
int main(){
    int money;
    int fun = 0;
    scanf("%d", &money);
    while(money >= 500){
        money -= 500;
        fun += 1000;
    }
    while(money >= 5){
        money -= 5;
        fun += 5;
    }
    printf("%d", fun);
    return 0;
}