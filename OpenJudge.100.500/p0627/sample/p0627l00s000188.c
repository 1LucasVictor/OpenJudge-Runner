#include<stdio.h>

int main(){
    int a, b;
    int win;
    scanf("%d %d", &a, &b);
    win = a + b;
    if(a - b > win){
        win = a - b;
    }
    if(a * b > win){
        win = a * b;
    }
    printf("%d", win);
    return 0;
}
