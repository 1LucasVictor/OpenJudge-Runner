#include <stdio.h>

int main(void){
    int X, Y;
    scanf("%d %d", &X, &Y);
    if (X*2<=Y && Y <= 4*X && Y%2 == 0){
        printf("Yes");
    }
    else {
        printf("No");
    }
}