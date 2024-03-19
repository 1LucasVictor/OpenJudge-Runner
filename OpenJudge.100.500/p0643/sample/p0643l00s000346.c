#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    int num[2], a;
    scanf("%d%d", &num[0], &num[1]);
    a = (num[0] * num[1]) % 2;
    if(a == 0){
        printf("Even");
    }else{
        printf("Odd");
    }
}