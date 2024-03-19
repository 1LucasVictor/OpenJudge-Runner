#include <stdio.h>

int main(void){
    int A, B, C;
    scanf("%d", &A);
    scanf("%d", &B);
    scanf("%d", &C);
    if (A>B+C) printf("%d", 0);
    else printf("%d", B+C-A);
    return 0;
}
