#include <stdio.h>
int main(void){
    int x, gohyaku, go;
    scanf("%d\n", &x);
    
    gohyaku = x / 500;
    x -= 500*gohyaku;
    go = x / 5;
    
    printf("%d\n", gohyaku*1000 + go*5);
    return 0;
}