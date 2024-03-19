#include <stdio.h>

int main() {
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);
    int result;
    result = C - (A - B);
    if(result < 0){
        printf("0");
    }else{
        printf("%d", result);
    }
    return 0;
}