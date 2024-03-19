#include <stdio.h>

int main(){
    int A, B, C;
    scanf("%d", &A);
    scanf("%d", &B);
    scanf("%d", &C);
    if (A*B*C == 175) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
}
