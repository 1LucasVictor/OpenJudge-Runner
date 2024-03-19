#include <stdio.h>

int main() {
    int N, A, B, x, y;
    scanf("%d %d %d", &N, &A, &B);
    x=N*A;
    if(x < B){
        printf("%d", x);
    }else{
        printf("%d", B);
    }
    return 0;
}