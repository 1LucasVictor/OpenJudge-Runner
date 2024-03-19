#include <stdio.h>

int main(){
    int A, B, X;

    scanf("%d %d %d", &A, &B, &X);

    if (X < A){
        printf("NO\n");
    } else if (X > A+B){
        printf("NO\n");
    } else {
        printf("YES\n");
    }

    return 0;
}
