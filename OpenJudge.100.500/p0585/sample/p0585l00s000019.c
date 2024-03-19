#include <stdio.h>

int A;
int B;
int T;

int main(){
    scanf("%d%d%d", &A, &B, &T);
    if(A < 1 || 20 < A || B < 1 || 20 < B || T < 1 || 20 < T){
        return 0;
    }
    B *= (int)(((double)T + 0.5)/(double)A);
    printf("%d\n", B);
    return 0;
}