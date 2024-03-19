#include <stdio.h>

int main(void){
    int A, B, C, D, E, K;
    scanf("%d %d %d %d %d %d", &A, &B, &C, &D, &E, &K);
    if(E-A > K) printf(":(\n");
    else printf("Yay!\n");
    return 0;
}
