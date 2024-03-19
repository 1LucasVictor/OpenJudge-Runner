#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

int main(void){

    int a, b;

    scanf("%d%d", &a, &b);

    if(a % 2 == 1 && b % 2 == 1){
        printf("Odd\n");
    }else{
        printf("Even\n");
    }

    return 0;
}