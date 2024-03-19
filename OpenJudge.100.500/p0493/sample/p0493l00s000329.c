#include <stdio.h>

int main(){
    int x, A, B;
    scanf("%d", &x);
    
    A = (x / 500);
    B = ((x % 500) / 5);
    printf("%d\n", A * 1000 + B * 5);

    return 0;
}
