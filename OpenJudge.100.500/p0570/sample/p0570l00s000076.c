#include <stdio.h>

int main(void){
    int A, B, K, X;

    scanf("%d %d", &A, &B);

    X= A+B;
    if (X%2==1)
        printf("IMPOSSIBLE\n");

    else
    {
        K=X/2;
        printf("%d\n",K);
    }
    
}

