#include <stdio.h>

int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    int c = -1;
    if (a <= 9 && b <= 9){
        c = a * b;
    }
    printf("%d", c);
}