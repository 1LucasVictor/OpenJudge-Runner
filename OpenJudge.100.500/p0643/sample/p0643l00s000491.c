#include <stdio.h>
int main(void){
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    if((a * b) % 2 == 0){
        printf("Even");
    }else{
        printf("Odd");
    }
}
