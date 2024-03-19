#include<stdio.h>

int main(void) {
    int balance = 100000;

    int week;
    scanf("%d", &week);

    while(week > 0) {
        balance *= 1.05;
        if(balance % 1000 > 0) balance = (balance / 1000) * 1000 + 1000;
        week--;
    }   

    printf("%d\n", balance);

    return 0;                                                                                                                                                            
}