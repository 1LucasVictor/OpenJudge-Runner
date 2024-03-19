#include <stdio.h>

int main(void){

    int x, h1=0, h2=0, h;
    scanf("%d",&x);

    h1 = x / 500;
    h1 = h1 * 1000;
    
    h2 = (x % 500) / 5;
    h2 = h2 * 5;

    h = h1 + h2;
    printf("%d\n", h);

    return 0;
    
}