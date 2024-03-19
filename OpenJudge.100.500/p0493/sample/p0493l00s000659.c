#include<stdio.h>
int main(void){
    int c,co = 0;
    scanf("%d", &c);
    while(c >= 500){
        c = c - 500;
        co = co + 1000;
    }
    while(c >= 5){
        c = c - 5;
        co = co + 5;
    }
    printf("%d\n", co);
    return 0;
}