#include<stdio.h>

int main(void){
    int happy;
    happy = 0;
    int money = 0;
    scanf("%d",&money);
    
    while(money >= 500){
        money = money - 500;
        happy = happy + 1000;
        
    }
    while(money >= 5){
        money -= 5;
        happy += 5;
    }
    printf("%d\n",happy);
    return 0;
}