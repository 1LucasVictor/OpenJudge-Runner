#include <stdio.h>

int main(void){
    int A, B, C, D, x1, x2;
    scanf("%d", &A);
    scanf("%d", &B);
    scanf("%d", &C);
    scanf("%d", &D);
    if (B<=C || D<=A) {
        printf("%d", 0);
    }
    else {
        if (A>C) x1=A;
        else x1=C;
        if (B>D) x2=D;
        else x2=B;
        printf("%d", x2-x1);
    }
    
    return 0;
}
