#include <stdio.h>

int main(void) {
    int a, b;
    scanf("%d %d", &a, &b);
    int product = a * b;
    if(product % 2 == 0){
        printf("Even\n");
    }else{
        printf("Odd\n");
    }
}
