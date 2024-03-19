#include <stdio.h>

int main(void){
    int x,i,five_hundred,five,happy=0;
    scanf("%d",&x);
    five_hundred = x / 500;
    happy += five_hundred * 1000;
    x -= five_hundred * 500;

    five = x / 5;
    happy += five * 5;
    
    printf("%d\n",happy);
    return 0;
}