#include <stdio.h>
int main(void){
    int i, A, B, K;
    scanf("%d %d %d", &A, &B, &K);
    for(i=A; K!=0; i--){
        if(A%i==0 && B%i==0)K--;
    }
    printf("%d\n", i+1);
    return 0;
}